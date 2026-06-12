# Algoritmi avansați - cheat sheet

Acest repo conține cursurile și seminariile agregate în Markdown.

## Fișiere generate

- [`notes/algoritmi-avansati-materiale.md`](notes/algoritmi-avansati-materiale.md) - toate cursurile și seminariile, delimitate pe materiale și slide-uri/pagini.
- [`README.md`](README.md) - acest cheat sheet rapid.

## Hartă rapidă

### Curs 1

- Sursa: `Algoritmi Avansați 2026 c-1.pptx`
- Bazele: algoritmi, complexitate timp, clasele O / Omega / Theta.
- Context teoretic: P, NP, NP-completitudine și probleme de optimizare.
- De reținut: când soluția exactă este prea scumpă, apar aproximările, euristicile și metodele randomizate.

### Curs 2

- Sursa: `Algoritmi Avansați 2026 c-2.pptx`
- Load Balancing: alocarea joburilor pe mașini astfel încât makespan-ul maxim să fie mic.
- Algoritmul greedy pune fiecare job pe mașina cu încărcare curentă minimă.
- Ideea analizei: compari soluția algoritmului cu lower bounds precum media încărcării și jobul maxim.

### Curs 3

- Sursa: `Algoritmi Avansați 2026 c-3.pptx`
- TSP și legătura cu ciclul Hamiltonian.
- Pentru metric TSP se folosește inegalitatea triunghiului pentru scurtături.
- Schema clasică: MST -> parcurgere dublă/Euler -> shortcut -> tur aproximativ.

### Curs 4

- Sursa: `Algoritmi Avansați 2026 c-4.pptx`
- Vertex Cover: alegi vârfuri astfel încât fiecare muchie să fie acoperită.
- Aproximare 2: alegi o muchie neacoperită și pui ambele capete în soluție.
- Extensie: Weighted Vertex Cover și relaxare prin programare liniară.

### Curs 5

- Sursa: `Algoritmi Avansați 2026 c-5pptx.pptx`
- Algoritmi genetici: populație, cromozomi, fitness, selecție, încrucișare, mutație.
- Codificarea transformă soluția într-un cromozom, iar fitness-ul ghidează evoluția populației.
- Parametri importanți: dimensiunea populației, probabilitatea de crossover, probabilitatea de mutație și criteriul de oprire.

### Curs 6

- Sursa: `Algoritmi Avansați 2026 c-6.pptx`
- Algoritmi probabilistici: rezultatul sau timpul de rulare depinde de alegeri aleatoare.
- Monte Carlo: timp controlat, dar poate greși cu probabilitate mică.
- Las Vegas: rezultat corect garantat, dar timpul de rulare este variabil. Exemple: Freivalds, primality testing, randomized quicksort.

### Curs 7

- Sursa: `Algoritmi Avansați 2026 c-7.pptx`
- Structuri randomizate: skip lists și ideea de niveluri alese probabilistic.
- Căutarea coboară din nivelurile superioare către lista de bază.
- Operații de urmărit: search, insert, delete și estimarea numărului de elemente pe nivel.

### Seminar 1

- Sursa: `seminar1-alg-aprox.pdf`
- Exerciții de algoritmi aproximativi: probleme de numărare, intervale, administrare/resurse și variante fracționare.
- Focalizare: modelarea problemei, alegerea unei euristici și justificarea soluției.

### Seminar 2

- Sursa: `seminar2-alg-apox.pdf`
- Exerciții pe load balancing / împărțirea coletelor-cadourilor.
- Focalizare: compararea soluției greedy cu soluția optimă și lower bounds.

### Seminar 3

- Sursa: `seminar3-alg-gen.pdf`
- Exerciții de algoritmi genetici: codificare binară, fitness, selecție, crossover și mutație.
- Focalizare: executarea manuală a pașilor pentru o generație și interpretarea probabilităților.

## Formule și idei scurte

- `O(g(n))`: limită superioară asimptotică.
- `Omega(g(n))`: limită inferioară asimptotică.
- `Theta(g(n))`: limită strânsă, simultan superioară și inferioară.
- Raport de aproximare pentru minimizare: `ALG(I) / OPT(I)`.
- Lower bound util: orice valoare `LB <= OPT`; dacă demonstrezi `ALG <= c * LB`, atunci ai aproximare `c`.
- Load balancing: `LB >= max(max_job, suma_joburi / m)`.
- Metric TSP: folosește inegalitatea triunghiului pentru shortcut-uri.
- Vertex Cover greedy cu muchii disjuncte: aproximare `2`.
- Monte Carlo: poate greși, dar probabilitatea de eroare poate fi redusă prin repetare.
- Las Vegas: nu greșește, dar timpul este aleator.

## Cum să înveți eficient

1. Parcurge întâi harta rapidă de mai sus ca să vezi tema fiecărui material.
2. Citește `notes/algoritmi-avansati-materiale.md` pe secțiuni: cursurile pentru concepte, seminariile pentru exerciții.
3. Pentru fiecare algoritm, notează separat: ideea, garanția de aproximare, complexitatea, condițiile de aplicare și un exemplu scurt.
4. Refă exercițiile din seminarii fără să te uiți la soluții, apoi compară pașii.

## Checklist înainte de examen

- Pot explica diferența dintre algoritm exact, euristică și algoritm de aproximare.
- Pot calcula sau justifica un raport de aproximare.
- Pot recunoaște când o problemă cere o abordare greedy, dinamică, randomizată sau genetică.
- Pot descrie componentele unui algoritm genetic: cromozom, populație, fitness, selecție, crossover, mutație, criteriu de oprire.
- Pot urmări un exemplu numeric complet din seminarii.

## Idei utile pentru extindere

- Un fișier separat `exercitii.md` doar cu enunțuri și pași de rezolvare.
- Flashcards în format Q/A pentru definiții, teoreme și rapoarte de aproximare.
- Un tabel comparativ cu probleme, algoritmi, complexități și garanții.
