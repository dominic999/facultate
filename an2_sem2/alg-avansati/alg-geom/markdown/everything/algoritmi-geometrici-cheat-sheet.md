# Algoritmi Geometrici - Cheat Sheet

## C8 - Criterii numerice si acoperiri convexe

**Raport pe dreapta.** Pentru puncte coliniare, raportul `r(A, B, C)` este scalarul care exprimă poziția lui `C` față de `A` și `B`. Semnul raportului indică poziționarea relativă pe dreaptă; în exerciții se folosește pentru coliniaritate și puncte intermediare/exterioare.

**Test de orientare.** Pentru `A(xA, yA)`, `B(xB, yB)`, `C(xC, yC)`:

```text
Delta(A,B,C) = det | 1  xA  yA |
                   | 1  xB  yB |
                   | 1  xC  yC |
```

`Delta > 0` = viraj la stânga, `Delta < 0` = viraj la dreapta, `Delta = 0` = coliniaritate. Testul este folosit la convexitate, Graham/Andrew, Jarvis, triangulări, intersecții și teste de cerc.

**Acoperire convexă.** `Conv(P)` este cea mai mică mulțime convexă care conține `P`. Pentru mulțimi finite, frontiera este un poligon convex determinat de punctele extreme.

**Graham scan / Andrew.** Sortează punctele lexicografic, construiește marginea inferioară și superioară cu o stivă/listă; elimină ultimul punct cât timp apare viraj greșit. Complexitate: `O(n log n)` din sortare, memorie `O(n)`.

**Jarvis march.** Pornește din punct extrem și alege repetat următorul punct astfel încât toate celelalte să rămână de aceeași parte. Complexitate: `O(nh)`, unde `h` este numărul de puncte de pe hull; poate fi mai bun decât Graham când `h` este mic.

**Divide et impera pentru hull.** Împarte punctele, calculează hull-uri recursive, apoi le unește prin tangente. Complexitate tipică: `O(n log n)`.

## C9 - Triangularea poligoanelor

**Triangulare poligon.** Orice poligon simplu cu `n` vârfuri admite triangulare; orice triangulare are `n - 2` triunghiuri și `n - 3` diagonale.

**Teorema galeriei de artă.** Un poligon cu `n` vârfuri poate fi supravegheat cu `floor(n/3)` camere, iar această limită este strânsă. Demonstrația folosește triangulare + 3-colorarea vârfurilor; se alege culoarea cea mai rară.

**Graful dual al triangulării.** Noduri = triunghiuri, muchii = triunghiuri vecine pe o diagonală comună. Pentru poligoane simple, dualul este arbore; util în justificarea 3-colorării.

**Ear clipping.** Un „ear” este un vârf convex principal pentru care diagonala dintre vecinii săi este validă, iar triunghiul poate fi eliminat. Two Ears Theorem: orice poligon cu cel puțin 4 vârfuri are cel puțin două ears. Complexitate uzuală: `O(n^2)`.

**Triangulare eficientă.** Triangularea generală a unui poligon se poate face în `O(n log n)`, prin descompunere în poligoane monotone și triangularea lor liniară. Pentru poligon y-monoton: sortezi vârfurile după y, folosești stivă, cazuri după lanțuri diferite/același lanț.

## C10 - Triangularea mulțimilor de puncte si Delaunay

**Triangulare mulțime de puncte.** O triangulare a lui `P` subdivide maximal `Conv(P)` în triunghiuri cu vârfuri în `P`.

Dacă `n = |P|` și `k` este numărul de puncte de pe frontiera acoperirii convexe:

```text
număr triunghiuri = 2n - k - 2
număr muchii      = 3n - k - 3
```

**Compararea triangulărilor.** Se compară vectorii unghiurilor triunghiurilor, sortați crescător, prin ordine lexicografică. O triangulare unghiular optimă maximizează lexicografic vectorul unghiurilor.

**Muchie ilegală.** În patrulater convex `ABCD`, muchia `AC` este ilegală dacă înlocuirea cu `BD` îmbunătățește vectorul unghiurilor. Criteriu geometric: `D` este în interiorul cercului circumscris lui `ABC`. Flip-ul unei muchii ilegale îmbunătățește triangularea.

**Triangulare legală / Delaunay.** O triangulare legală nu are muchii ilegale. Orice triangulare unghiular optimă este legală. Dacă nu există patru puncte conciclice, triangularea legală este unică și coincide cu triangularea Delaunay.

## C11 - Voronoi, Fortune, DCEL

**Celulă Voronoi.** Pentru situl `p`, celula conține punctele mai apropiate de `p` decât de orice alt sit. Muchiile Voronoi sunt pe mediatoare; vârfurile apar la puncte egal depărtate de trei sau mai multe situri.

**Legătura Voronoi-Delaunay.** Două situri sunt unite în Delaunay dacă celulele lor Voronoi sunt vecine. Vârfurile Voronoi corespund cercurilor goale prin trei situri.

**Fortune.** Sweep line direct nu vede la timp toate siturile care definesc un vârf Voronoi; se folosește beach line / curba parabolică. Evenimente: site event și circle event. Structuri: coadă de evenimente `Q`, arbore/status `T`, DCEL pentru rezultat. Complexitate: `O(n log n)` timp, `O(n)` spațiu.

**DCEL.** Reprezintă subdiviziuni planare cu vârfuri, fețe și semi-muchii. O semi-muchie are de obicei pointeri spre `Origin`, `Twin`, `IncidentFace`, `Next`, `Prev`. Pentru o față: `OuterComponent` și eventual `InnerComponents`.

## C12 - Intersecții de segmente

**Intersecție segment-segment.** Se testează cu orientări și cazuri de coliniaritate. Complexitatea algebrică a testului de orientare este constantă.

**Sweep line pentru toate intersecțiile.** Evenimente: capete de segmente și intersecții descoperite. Statusul păstrează ordinea segmentelor intersectate de dreapta de baleiere; după fiecare eveniment se verifică vecinii relevanți. Complexitate tipică pentru raportarea tuturor intersecțiilor: `O((n + k) log n)`, unde `k` este numărul de intersecții raportate.

**Overlay de subdiviziuni.** Se combină două subdiviziuni planare, se creează vârfuri noi la intersecții și se actualizează semi-muchiile/fețele în DCEL.

## C13-C14 - Semiplane, dualitate, programare liniară

**Intersecții de semiplane.** Intersecția poate fi vidă, nevidă mărginită, nevidă nemărginită sau poate degenera într-o dreaptă/semidreaptă/segment/punct. Determinare cantitativă: `O(n log n)` și memorie `O(n)`.

**Dualitate punct-dreaptă.** O convenție uzuală: dreapta primală `y = mx + n` corespunde punctului dual `(m, -n)`. Dreptele verticale sunt omise deoarece nu au pantă finită. Incidența și ordinea deasupra/dedesubt se transformă în relații duale.

**Semiplane inferioare/superioare.** Problemele de intersecție a semiplanelor pot fi transformate prin dualitate în probleme pe acoperiri convexe / învelișuri ale punctelor duale.

**Programare liniară 2D.** Obiectivul este optimizarea unei funcții liniare peste o intersecție de semiplane. Algoritmul incremental randomizat menține soluția curentă; când o constrângere o invalidează, rezolvă o subproblemă pe frontiera constrângerii. Timp mediu: `O(n)`; caz nefavorabil determinist: poate ajunge la `O(n^2)` în ordini proaste.

## Formule si complexități de reținut

| Temă | Rezultat |
| --- | --- |
| Orientare `Delta(A,B,C)` | `>0` stânga, `<0` dreapta, `=0` coliniar |
| Hull Graham/Andrew | `O(n log n)` timp, `O(n)` spațiu |
| Hull Jarvis | `O(nh)` |
| Triangulare poligon | `n - 2` triunghiuri, `n - 3` diagonale |
| Ear clipping | `O(n^2)` |
| Triangulare poligon general | `O(n log n)` timp, `O(n)` spațiu |
| Triangulare mulțime puncte | triunghiuri `2n-k-2`, muchii `3n-k-3` |
| Fortune Voronoi/Delaunay | `O(n log n)` timp, `O(n)` spațiu |
| Intersecții segmente | `O((n+k) log n)` pentru `k` intersecții |
| Intersecție semiplane | `O(n log n)` |
| LP 2D incremental randomizat | `O(n)` timp mediu |

## Răspunsuri scurte tip examen

**De ce apare beach line la Fortune?** Pentru că un vârf Voronoi poate depinde de situri pe care sweep line-ul direct nu le-a întâlnit încă; beach line-ul separă zona finalizată de zona încă influențabilă.

**De ce graful dual ajută la galeria de artă?** Pentru că dualul triangulării unui poligon simplu este arbore, deci permite propagarea coerentă a unei 3-colorări; culoarea minimă dă cel mult `floor(n/3)` camere.

**Când o muchie e ilegală?** Când punctul opus cade în cercul circumscris triunghiului de cealaltă parte; atunci flip-ul crește vectorul unghiurilor.

**Ce memorează DCEL?** Topologia subdiviziunii: vârfuri, fețe și semi-muchii cu legături `Twin/Next/Prev`, astfel încât traversarea frontierelor și actualizarea overlay-urilor să fie locală.

**Unde se folosește testul de orientare?** Hull, clasificare vârfuri convexe/concave, ear clipping, triangulare monotonă, intersecții de segmente, condiții de legalitate/conciclicitate.
