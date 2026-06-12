#!/usr/bin/env python3
import html
import json
import re
import subprocess
import zipfile
from collections import Counter
from datetime import datetime
from pathlib import Path
from xml.etree import ElementTree as ET


ROOT = Path(__file__).resolve().parents[1]
OUT_DIR = ROOT / "notes"
FULL_NOTES = OUT_DIR / "algoritmi-avansati-materiale.md"
CHEAT_SHEET = ROOT / "README.md"
PPTX_PDF_DIR = Path("/tmp/alg_notes_pptx_pdf")


COURSES = [
    ("Curs 1", "Algoritmi Avansați 2026 c-1.pptx"),
    ("Curs 2", "Algoritmi Avansați 2026 c-2.pptx"),
    ("Curs 3", "Algoritmi Avansați 2026 c-3.pptx"),
    ("Curs 4", "Algoritmi Avansați 2026 c-4.pptx"),
    ("Curs 5", "Algoritmi Avansați 2026 c-5pptx.pptx"),
    ("Curs 6", "Algoritmi Avansați 2026 c-6.pptx"),
    ("Curs 7", "Algoritmi Avansați 2026 c-7.pptx"),
]

SEMINARS = [
    ("Seminar 1", "seminar1-alg-aprox.pdf"),
    ("Seminar 2", "seminar2-alg-apox.pdf"),
    ("Seminar 3", "seminar3-alg-gen.pdf"),
]


STOPWORDS = {
    "algoritmi", "algoritm", "avansati", "avansați", "aproximare", "genetici",
    "pentru", "care", "este", "sunt", "acest", "aceasta", "prin", "dintr",
    "dintre", "intr", "într", "este", "fi", "sau", "ale", "mai", "mult",
    "curs", "seminar", "problema", "solutie", "soluție", "exemplu", "slide",
    "using", "with", "from", "this", "that", "the", "and", "for", "are",
}


def clean_text(text: str) -> str:
    text = html.unescape(text)
    text = text.replace("\xa0", " ")
    text = re.sub(r"[ \t]+", " ", text)
    return text.strip()


def normalize_line(line: str) -> str:
    line = clean_text(line)
    line = re.sub(r"^\s*[•●◦▪▫‣]\s*", "- ", line)
    return line


def extract_pptx(path: Path) -> list[dict]:
    xml_slides = []
    with zipfile.ZipFile(path) as archive:
        slide_names = sorted(
            [name for name in archive.namelist() if re.match(r"ppt/slides/slide\d+\.xml$", name)],
            key=lambda item: int(re.search(r"slide(\d+)\.xml$", item).group(1)),
        )
        for index, name in enumerate(slide_names, 1):
            root = ET.fromstring(archive.read(name))
            texts = []
            for node in root.iter():
                if node.tag.endswith("}t") and node.text:
                    line = normalize_line(node.text)
                    if line:
                        texts.append(line)
            xml_slides.append({"number": index, "lines": compact_lines(texts)})

    pdf_path = ensure_pptx_pdf(path)
    if not pdf_path:
        return xml_slides

    try:
        pdf_pages = extract_pdf(pdf_path)
    except Exception:
        return xml_slides

    slides = []
    for index, xml_slide in enumerate(xml_slides):
        pdf_lines = pdf_pages[index]["lines"] if index < len(pdf_pages) else []
        xml_score = useful_line_score(xml_slide["lines"])
        pdf_score = useful_line_score(pdf_lines)
        lines = pdf_lines if pdf_score > xml_score else xml_slide["lines"]
        slides.append({"number": xml_slide["number"], "lines": lines})
    return slides


def ensure_pptx_pdf(path: Path) -> Path | None:
    PPTX_PDF_DIR.mkdir(exist_ok=True)
    pdf_path = PPTX_PDF_DIR / f"{path.stem}.pdf"
    if pdf_path.exists():
        return pdf_path

    try:
        subprocess.run(
            ["libreoffice", "--headless", "--convert-to", "pdf", "--outdir", str(PPTX_PDF_DIR), str(path)],
            cwd=ROOT,
            check=True,
            capture_output=True,
            text=True,
            timeout=60,
        )
    except Exception:
        return None
    return pdf_path if pdf_path.exists() else None


def useful_line_score(lines: list[str]) -> int:
    return sum(len(re.findall(r"[A-Za-zĂÂÎȘȚăâîșț0-9]{2,}", line)) for line in lines)


def extract_pdf(path: Path) -> list[dict]:
    proc = subprocess.run(
        ["pdftotext", "-layout", str(path), "-"],
        cwd=ROOT,
        check=True,
        capture_output=True,
        text=True,
    )
    pages = []
    for index, page in enumerate(proc.stdout.split("\f"), 1):
        lines = [normalize_line(line) for line in page.splitlines()]
        pages.append({"number": index, "lines": compact_lines(lines)})
    return pages


def compact_lines(lines: list[str]) -> list[str]:
    result = []
    previous = None
    for line in lines:
        line = line.strip()
        if not line:
            continue
        if line == previous:
            continue
        if len(line) == 1 and line.isdigit():
            continue
        result.append(line)
        previous = line
    return result


def heading_from_lines(lines: list[str], fallback: str) -> str:
    for line in lines:
        if 4 <= len(line) <= 90:
            if not re.fullmatch(r"[-–—_ .\d]+", line):
                return line.lstrip("- ").strip()
    return fallback


def markdown_for_slides(label: str, filename: str, slides: list[dict]) -> str:
    lines = [f"## {label}", "", f"**Sursa:** `{filename}`", ""]
    for slide in slides:
        title = heading_from_lines(slide["lines"], f"Slide {slide['number']}")
        lines.extend([f"### Slide {slide['number']}: {title}", ""])
        body = slide["lines"]
        if body and body[0] == title:
            body = body[1:]
        if not body:
            lines.append("_Nu s-a putut extrage text util din acest slide._")
        else:
            for item in body:
                if item.startswith("- "):
                    lines.append(item)
                else:
                    lines.append(f"- {item}")
        lines.append("")
    return "\n".join(lines).rstrip() + "\n"


def markdown_for_pages(label: str, filename: str, pages: list[dict]) -> str:
    lines = [f"## {label}", "", f"**Sursa:** `{filename}`", ""]
    for page in pages:
        title = heading_from_lines(page["lines"], f"Pagina {page['number']}")
        lines.extend([f"### Pagina {page['number']}: {title}", ""])
        body = page["lines"]
        if body and body[0] == title:
            body = body[1:]
        if not body:
            lines.append("_Nu s-a putut extrage text util din această pagină._")
        else:
            for item in body:
                if item.startswith("- "):
                    lines.append(item)
                else:
                    lines.append(f"- {item}")
        lines.append("")
    return "\n".join(lines).rstrip() + "\n"


def tokenize(text: str) -> list[str]:
    words = re.findall(r"[A-Za-zĂÂÎȘȚăâîșț0-9][A-Za-zĂÂÎȘȚăâîșț0-9\-]{2,}", text.lower())
    return [word for word in words if word not in STOPWORDS and not word.isdigit()]


def key_terms(text: str, limit: int = 18) -> list[str]:
    counts = Counter(tokenize(text))
    return [word for word, _ in counts.most_common(limit)]


def summarize_section(items: list[dict]) -> list[str]:
    joined = "\n".join("\n".join(part["lines"]) for part in items)
    terms = key_terms(joined, 8)
    hints = []
    if terms:
        hints.append("Termeni recurenți: " + ", ".join(terms) + ".")
    first_titles = [heading_from_lines(part["lines"], "") for part in items[:3]]
    first_titles = [title for title in first_titles if title]
    if first_titles:
        hints.append("Primele repere: " + "; ".join(first_titles) + ".")
    return hints


def build_full_notes(course_data: list[dict], seminar_data: list[dict]) -> str:
    now = datetime.now().strftime("%Y-%m-%d %H:%M")
    lines = [
        "# Algoritmi avansați - materiale agregate",
        "",
        f"_Generat automat la {now} din prezentările `.pptx` și seminariile `.pdf`._",
        "",
        "## Cuprins",
        "",
        "### Cursuri",
        "",
    ]
    for item in course_data:
        lines.append(f"- [{item['label']}](#{slug(item['label'])})")
    lines.extend(["", "### Seminarii", ""])
    for item in seminar_data:
        lines.append(f"- [{item['label']}](#{slug(item['label'])})")
    lines.extend(["", "# Cursuri", ""])
    for item in course_data:
        lines.append(markdown_for_slides(item["label"], item["filename"], item["slides"]))
    lines.extend(["", "# Seminarii", ""])
    for item in seminar_data:
        lines.append(markdown_for_pages(item["label"], item["filename"], item["pages"]))
    return "\n".join(lines).rstrip() + "\n"


def slug(text: str) -> str:
    text = text.lower()
    replacements = str.maketrans("ăâîșț", "aaist")
    text = text.translate(replacements)
    text = re.sub(r"[^a-z0-9]+", "-", text).strip("-")
    return text


def build_cheat_sheet(course_data: list[dict], seminar_data: list[dict]) -> str:
    static_map = {
        "Curs 1": [
            "Bazele: algoritmi, complexitate timp, clasele O / Omega / Theta.",
            "Context teoretic: P, NP, NP-completitudine și probleme de optimizare.",
            "De reținut: când soluția exactă este prea scumpă, apar aproximările, euristicile și metodele randomizate.",
        ],
        "Curs 2": [
            "Load Balancing: alocarea joburilor pe mașini astfel încât makespan-ul maxim să fie mic.",
            "Algoritmul greedy pune fiecare job pe mașina cu încărcare curentă minimă.",
            "Ideea analizei: compari soluția algoritmului cu lower bounds precum media încărcării și jobul maxim.",
        ],
        "Curs 3": [
            "TSP și legătura cu ciclul Hamiltonian.",
            "Pentru metric TSP se folosește inegalitatea triunghiului pentru scurtături.",
            "Schema clasică: MST -> parcurgere dublă/Euler -> shortcut -> tur aproximativ.",
        ],
        "Curs 4": [
            "Vertex Cover: alegi vârfuri astfel încât fiecare muchie să fie acoperită.",
            "Aproximare 2: alegi o muchie neacoperită și pui ambele capete în soluție.",
            "Extensie: Weighted Vertex Cover și relaxare prin programare liniară.",
        ],
        "Curs 5": [
            "Algoritmi genetici: populație, cromozomi, fitness, selecție, încrucișare, mutație.",
            "Codificarea transformă soluția într-un cromozom, iar fitness-ul ghidează evoluția populației.",
            "Parametri importanți: dimensiunea populației, probabilitatea de crossover, probabilitatea de mutație și criteriul de oprire.",
        ],
        "Curs 6": [
            "Algoritmi probabilistici: rezultatul sau timpul de rulare depinde de alegeri aleatoare.",
            "Monte Carlo: timp controlat, dar poate greși cu probabilitate mică.",
            "Las Vegas: rezultat corect garantat, dar timpul de rulare este variabil. Exemple: Freivalds, primality testing, randomized quicksort.",
        ],
        "Curs 7": [
            "Structuri randomizate: skip lists și ideea de niveluri alese probabilistic.",
            "Căutarea coboară din nivelurile superioare către lista de bază.",
            "Operații de urmărit: search, insert, delete și estimarea numărului de elemente pe nivel.",
        ],
        "Seminar 1": [
            "Exerciții de algoritmi aproximativi: probleme de numărare, intervale, administrare/resurse și variante fracționare.",
            "Focalizare: modelarea problemei, alegerea unei euristici și justificarea soluției.",
        ],
        "Seminar 2": [
            "Exerciții pe load balancing / împărțirea coletelor-cadourilor.",
            "Focalizare: compararea soluției greedy cu soluția optimă și lower bounds.",
        ],
        "Seminar 3": [
            "Exerciții de algoritmi genetici: codificare binară, fitness, selecție, crossover și mutație.",
            "Focalizare: executarea manuală a pașilor pentru o generație și interpretarea probabilităților.",
        ],
    }

    lines = [
        "# Algoritmi avansați - cheat sheet",
        "",
        "Acest repo conține cursurile și seminariile agregate în Markdown.",
        "",
        "## Fișiere generate",
        "",
        "- [`notes/algoritmi-avansati-materiale.md`](notes/algoritmi-avansati-materiale.md) - toate cursurile și seminariile, delimitate pe materiale și slide-uri/pagini.",
        "- [`README.md`](README.md) - acest cheat sheet rapid.",
        "",
        "## Hartă rapidă",
        "",
    ]
    for item in course_data:
        lines.append(f"### {item['label']}")
        lines.append("")
        lines.append(f"- Sursa: `{item['filename']}`")
        for hint in static_map.get(item["label"], summarize_section(item["slides"])):
            lines.append(f"- {hint}")
        lines.append("")
    for item in seminar_data:
        lines.append(f"### {item['label']}")
        lines.append("")
        lines.append(f"- Sursa: `{item['filename']}`")
        for hint in static_map.get(item["label"], summarize_section(item["pages"])):
            lines.append(f"- {hint}")
        lines.append("")

    lines.extend([
        "## Formule și idei scurte",
        "",
        "- `O(g(n))`: limită superioară asimptotică.",
        "- `Omega(g(n))`: limită inferioară asimptotică.",
        "- `Theta(g(n))`: limită strânsă, simultan superioară și inferioară.",
        "- Raport de aproximare pentru minimizare: `ALG(I) / OPT(I)`.",
        "- Lower bound util: orice valoare `LB <= OPT`; dacă demonstrezi `ALG <= c * LB`, atunci ai aproximare `c`.",
        "- Load balancing: `LB >= max(max_job, suma_joburi / m)`.",
        "- Metric TSP: folosește inegalitatea triunghiului pentru shortcut-uri.",
        "- Vertex Cover greedy cu muchii disjuncte: aproximare `2`.",
        "- Monte Carlo: poate greși, dar probabilitatea de eroare poate fi redusă prin repetare.",
        "- Las Vegas: nu greșește, dar timpul este aleator.",
        "",
        "## Cum să înveți eficient",
        "",
        "1. Parcurge întâi harta rapidă de mai sus ca să vezi tema fiecărui material.",
        "2. Citește `notes/algoritmi-avansati-materiale.md` pe secțiuni: cursurile pentru concepte, seminariile pentru exerciții.",
        "3. Pentru fiecare algoritm, notează separat: ideea, garanția de aproximare, complexitatea, condițiile de aplicare și un exemplu scurt.",
        "4. Refă exercițiile din seminarii fără să te uiți la soluții, apoi compară pașii.",
        "",
        "## Checklist înainte de examen",
        "",
        "- Pot explica diferența dintre algoritm exact, euristică și algoritm de aproximare.",
        "- Pot calcula sau justifica un raport de aproximare.",
        "- Pot recunoaște când o problemă cere o abordare greedy, dinamică, randomizată sau genetică.",
        "- Pot descrie componentele unui algoritm genetic: cromozom, populație, fitness, selecție, crossover, mutație, criteriu de oprire.",
        "- Pot urmări un exemplu numeric complet din seminarii.",
        "",
        "## Idei utile pentru extindere",
        "",
        "- Un fișier separat `exercitii.md` doar cu enunțuri și pași de rezolvare.",
        "- Flashcards în format Q/A pentru definiții, teoreme și rapoarte de aproximare.",
        "- Un tabel comparativ cu probleme, algoritmi, complexități și garanții.",
    ])
    return "\n".join(lines).rstrip() + "\n"


def main() -> None:
    OUT_DIR.mkdir(exist_ok=True)
    course_data = []
    seminar_data = []

    for label, filename in COURSES:
        path = ROOT / filename
        if path.exists():
            course_data.append({
                "label": label,
                "filename": filename,
                "slides": extract_pptx(path),
            })

    for label, filename in SEMINARS:
        path = ROOT / filename
        if path.exists():
            seminar_data.append({
                "label": label,
                "filename": filename,
                "pages": extract_pdf(path),
            })

    FULL_NOTES.write_text(build_full_notes(course_data, seminar_data), encoding="utf-8")
    CHEAT_SHEET.write_text(build_cheat_sheet(course_data, seminar_data), encoding="utf-8")

    summary = {
        "courses": [{"label": item["label"], "slides": len(item["slides"])} for item in course_data],
        "seminars": [{"label": item["label"], "pages": len(item["pages"])} for item in seminar_data],
        "outputs": [str(FULL_NOTES.relative_to(ROOT)), str(CHEAT_SHEET.relative_to(ROOT))],
    }
    print(json.dumps(summary, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
