# Algoritmi Geometrici - Material Complet

_Document generat din toate fișierele Markdown din acest director._

## Organizare

Ordinea aleasă este una de studiu: mai întâi cursurile C8-C14, apoi seminarele cu soluții și la final modelul de subiect. În cursuri am eliminat repetițiile produse de overlay-urile PDF-urilor și am păstrat conținutul textual unic al fiecărui slide.

## Cuprins

- [C8 - Acoperiri convexe](#c8-acoperiri-convexe)
- [C9 - Triangularea poligoanelor](#c9-triangularea-poligoanelor)
- [C10 - Triangularea multimilor de puncte](#c10-triangularea-multimilor-de-puncte)
- [C11 - Diagrame Voronoi](#c11-diagrame-voronoi)
- [C12 - Intersectii](#c12-intersectii)
- [C13-C14 - Elemente de programare liniara](#c13-c14-elemente-de-programare-liniara)
- [Seminar 5 - Enunturi](#seminar-5-enunturi)
- [Seminar 5 - Solutii](#seminar-5-solutii)
- [Seminar 6 - Enunturi](#seminar-6-enunturi)
- [Seminar 6 - Solutii](#seminar-6-solutii)
- [Model de subiect - Enunt, barem si rezolvari](#model-de-subiect-enunt-barem-si-rezolvari)

---

## C8 - Acoperiri convexe

_Sursa: `aa-geom-c8.md`. Overlay-urile duplicate au fost consolidate pe fiecare slide._

### Slide 1/30 - C8 - Acoperiri convexe

_Fara continut text extras._

### Slide 2/30 - Introducere - Criterii numerice. Raport și test de orientare

Acoperiri convexe
- Problemă (exemplu):

Cum poate fi deplasat discul din A în B fără a atinge obstacolele?

- Complexitatea: memorie, timp, calcule

- Probleme abordate: acoperiri convexe, proximitate, intersecții, căutare, etc.

- Tehnici utilizate: construcții incrementale, divide et impera, plane-sweep,

transformări geometrice, etc.

- Algoritmii geometrici sunt legați de Geometria Computațională: complexitatea

computațională a problemelor geometrice în contextul analizei algoritmilor [Lee &
Preparata, 1984]

AB

### Slide 3/30 - Elementele lui Euclid

- Ideea de construcție geometrică realizată într-un număr finit de pași:

- Abordare numerică - sistem de coordonate în plan: Descartes (sec.

XVII)

- “Simplicitatea” construcțiilor geometrice: Lemoine (∼ 1900)

- a doua jumătate a sec. XX: formularea / rezolvarea unor probleme de

GC; în 1975 este folosit prima dată termenul de Computational

Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM

Annual Symposium on Theory of Computing)

- Domenii de aplicabilitate: grafică pe calculator, pattern recognition,

robotică, statistică, gestionarea bazelor de date numerice, cercetări

operaționale

Introducere

- Note istorice:

### Slide 4/30 - Transactions on Computers, 33 (1984), 1072-1101. - ETH Zürich, 2013.

- D. Lee, F. Preparata, Computational Geometry - A Survey, IEEE

- B. G¨artner, M. Hoffmann, Computational Geometry. Lecture Notes,

- J. Goodman, J. O’Rourke, C. T´oth (eds.) Handbook of Discrete and

Computational Geometry, 2017.

Bibliografie

Introducere

- M. de Berg, M. van Kreveld, M. Overmars si O. Schwarzkopf,

Computational Geometry, Algorithms and Applications, Springer,
2008.

- F. Preparata si M. Shamos, Computational Geometry: An

Introduction, Springer, 1985.

- S. Devadoss, J. O’Rourke, Discrete and Computational Geometry,

Princeton University Press, 2011.

(Site: http://cs.smith.edu/˜orourke/DCG/)

### Slide 5/30 - coordonate carteziene, coordonate polare)

- ordonare (relativ la un sistem de coordonate)

- raport (independent de alegerea unui sistem de coordonate)

- ordonare (relativ la un sistem de coordonate − posibile alegeri:

- testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

- Context 1D

- Context 2D

Criterii numerice. Raport și test de orientare

Criterii numerice − poziția relativă a unor puncte

- Stabilirea unor relații între puncte / ordonare

### Slide 6/30 - Criterii numerice. Raport și test de orientare - Vectori și puncte

y

O

A

v + w

v

w

1

2 A + 1

2 B

B

x

Combinații liniare
αv + βw (α, β ∈ R)

Combinații afine (baricentrice)
λA + µB (λ, µ ∈ R și λ + µ = 1)

### Slide 7/30 - punctelor A, B, P (sau raportul în care punctul P împarte - segmentul [AB]) și este notat cu r (A, P, B).

- Definiție Scalarul r definit în lema anterioară se numește raportul

−−→

AP = r

PB , r > 0

PB , r < 0

- Observație importantă. În calcularea raportului, ordinea punctelor

este esențială. Modul în care este definită această noțiune (mai precis

ordinea în care sunt considerate punctele) diferă de la autor la autor.

Criterii numerice. Raport și test de orientare

Conceptul de raport

- Lemă Fie A și B două puncte distincte în Rn. Pentru orice punct
P ∈ AB, P ̸= B există un unic scalar r ∈ R \ {−1} astfel ca
unic punct P ∈ AB.

PB . Reciproc, fiecărui scalar r ∈ R \ {−1}, îi corespunde un

### Slide 8/30 - Criterii numerice. Raport și test de orientare - Raport- exemple

(i) În R2 considerăm punctele A = (1, 1), B = (2, 2), C = (7, 7).

Determinăm raportul r (A, B, C ).

r =? a.î.

−−→
AB = r

BC .

AB = B − A = (xB − xA, yB − yA) = (1, 1)

BC = C − B = (xC − xB , yC − yB ) = (5, 5)

AB =

1
5

BC , deci r (A, B, C ) =

### Slide 9/30 - Criterii numerice. Raport și test de orientare - Raport- exemple

(ii) În R3 considerăm punctele A = (1, 2, 3), B = (2, 1, −1), C = (0, 3, 7).
Atunci punctele A, B, C sunt coliniare și avem r (A, C , B) = − 1
2 ,
r (B, C , A) = −2, r (C , A, B) = 1, r (C , B, A) = −2.

(iii) Fie A, B două puncte din Rn și M = 1
r (A, M, B) = 1, r (M, A, B) = − 1
2 .

2 A + 1

2 B. Atunci

### Slide 10/30 - Criterii numerice. Raport și test de orientare - Testul de orientare - motivație

y

O

R1

Q

P

R2

x

Poziția relativă a două puncte față de un vector / o muchie orientată

### Slide 11/30 - gradul II (∆(P, Q, R)). - Criterii numerice. Raport și test de orientare

- Obs. Testul de orientare se bazează pe calculul unui polinom de

Enunț principal

- Propoziție. Fie P = (p1, p2), Q = (q1, q2) două puncte distincte din

planul R2, fie R = (r1, r2) un punct arbitrar și

∆(P, Q, R) =

1
p1 q1
p2 q2

r1
r2

Atunci R este situat:
(i) pe dreapta PQ ⇔ ∆(P, Q, R) = 0 (”ecuația dreptei”);

(ii) ”în dreapta” segmentului orientat

(iii) ”în stânga” segmentului orientat

−→
PQ ⇔ ∆(P, Q, R) < 0;
PQ ⇔ ∆(P, Q, R) > 0.

### Slide 12/30 - Avem

∆(A, B, C ) =

= 1 > 0,

1 1 1

0 1 0

0 0 1

deci conform criteriului (testului de orientare) punctul C este în

stânga segmentului orientat

−−→

AB .

Criterii numerice. Raport și test de orientare

Testul de orientare - exemplu

### Slide 13/30 - (c) natura unui viraj în parcurgerea unei linii poligonale (la dreapta / la - stânga);

(d) natura unui poligon (convex / concav).

Criterii numerice. Raport și test de orientare

Aplicații

(a) dacă un punct este în dreapta / stânga unei muchii orientate;
(b) dacă două puncte sunt de o parte și de alta a unui segment / a unei

drepte;

### Slide 14/30 - Criterii numerice. Raport și test de orientare - Limitări - robustețe și erori de rotunjire

> Sursa: Kettner et al, Classroom examples of robustness problems in geometric computations, 2008

### Slide 15/30 - Mulțimea din stânga nu este convexă, întrucât există două puncte, pentru care - segmentul determinat nu este inclus în mulțime (punctele cu această proprietate

nu sunt unice!).

- Problematizare:

Mulțimile finite cu cel puțin două elemente nu sunt convexe −→

necesară acoperirea convexă.

Acoperiri convexe

Mulțimi convexe: generalități

- Conceptul de mulțime convexă:

O mulțime M ⊂ Rm este convexă dacă oricare ar fi p, q ∈ M,
segmentul [pq] este inclus în M.

### Slide 16/30 - Acoperiri convexe - Acoperire convexă a unei mulțimi (finite) P: concept

_Fara continut text extras._

### Slide 17/30 - combinație convexă a punctelor P1, P2, . . . , Pn este un punct P de

- Cea mai ”mică” (în sensul incluziunii) mulțime convexă care conține P.

- Intersecția tuturor mulțimilor convexe care conțin P.

- Mulțimea tuturor combinațiilor convexe ale punctelor din P. O

forma

P = α1P1 + . . . + αnPn, α1, . . . , αn ∈ [0, 1], α1 + . . . + αn = 1.

- Problematizare: Aceste caracterizări echivalente nu conduc la un

algoritm de determinare a acoperirii convexe.

Acoperiri convexe

Acoperire convexă a unei mulțimi finite P: concept

- Caracterizări echivalente:

### Slide 18/30 - (poliedru). - parcurgere a punctelor (complexitate O(n)).

- Cazuri particulare: d = 1 (segment); d = 2 (poligon); d = 3

- Cazul d = 1: acoperirea convexă este un segment; algoritmic:

- În continuare: d = 2.

Acoperiri convexe

Acoperire convexă a unei mulțimi finite P: problematizare

- Dacă P ⊂ Rd este finită, acoperirea sa convexă, Conv(P) este un

politop convex.

### Slide 19/30 - Cum determinăm, algoritmic, vârfurile acestui poligon? - Acoperiri convexe

- Problemă:

- Convenție: Sensul de parcurgere a frontierei este cel trigonometric.

Acoperire convexă a unei mulțimi finite P (practic)

- De fapt, dacă P este finită, acoperirea sa convexă, Conv(P) este un

poligon convex.

### Slide 20/30 - Acoperiri convexe - Un algoritm ”lent”: idee de lucru

Sunt considerate muchiile orientate.

### Slide 21/30 - orientare”). - Acoperiri convexe

- Q: Cum se decide dacă o muchie orientată fixată este pe frontieră?

- A: Toate celelalte puncte sunt ”în stanga” ei (v. “testul de

Un algoritm ”lent”: idee de lucru

Sunt considerate muchiile orientate.

### Slide 22/30

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

5.

6.

7.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”în dreapta” lui

−→

PQ

then valid ← false

if valid=true then E = E ∪ {

PQ}

8. din E se construiește lista L a vârfurilor acoperirii convexe /*este

necesar ca E să fie coerentă*/

Acoperiri convexe

Un algoritm lent

Input: O mulțime de puncte P din R2.
Output: O listă L care conține vârfurile ce determină frontiera acoperirii
convexe, parcursă în sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

### Slide 23/30 - nu returneze o listă coerentă de muchii.

- Complexitate algebrică: polinoame de gradul II

- Tratarea cazurilor degenerate: poate fi adaptat.

- Robustețea: datorită erorilor de rotunjire este posibil ca algoritmul să

Acoperiri convexe

Algoritmul ”lent”: comentarii

- Complexitatea: O(n3)

### Slide 24/30 - unul, fiind apoi eliminate anumite puncte.

- Punctele sunt mai întâi sortate și renumerotate lexicografic.

- Algoritmul este de tip incremental, punctele fiind adăugate unul câte

- Q: Cum se decide dacă trei puncte sunt vârfuri consecutive ale

acoperirii convexe?

- A: Se efectuează un ”viraj la stânga” în punctul din mijloc.

Acoperiri convexe

Graham’s scan, varianta Andrew: idee de lucru

### Slide 25/30 - Acoperiri convexe - Exemplu: evoluția Li pe parcursul Graham’s scan - varianta Andrew

_Fara continut text extras._

### Slide 26/30

2. L ← (P1, P2)

3. for i ← 3 to n

4.

5.

6.

do adaugă Pi la sfârșitul lui L

while L are mai mult de două puncte

and ultimele trei nu determină un viraj la stânga

do șterge penultimul punct

7. return Li

8. Parcurge pași analogi pentru a determina Ls

9. Concatenează Li și Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mulțime de puncte P din R2.
Output: O listă L care conține vârfurile ce determină frontiera acoperirii
convexe, parcursă în sens trigonometric.

1. Sortare lexicografică, renumerotare P1, P2, . . . , Pn conform ordonării

### Slide 27/30 - returneze o listă eronată (dar coerentă) de muchii. - Acoperiri convexe

- Tratarea cazurilor degenerate: corect.

- Robustețea: datorită erorilor de rotunjire este posibil ca algoritmul să

Graham’s scan, varianta Andrew: comentarii

- Complexitatea: O(n log n).

### Slide 28/30 - punctul cel mai de jos / din stânga / stânga jos).

- Inițializare: un punct care este sigur un vârf al acoperirii convexe (e.g.

- Lista se actualizează prin determinarea succesorului: ”cel mai la

- Implementare: două abordări (i) ordonare; (ii) testul de orientare.

- Complexitate: O(hn), unde h este numărul punctelor de pe frontiera

dreapta” punct.

acoperirii convexe.

- Algoritmul lui Chan “combină” ideile celor doi algoritmi, ajungând la

complexitatea-timp O(n log h).

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

- Algoritm de tip incremental. Nu necesită sortare prealabilă.

### Slide 29/30

2. k ← 1; L ← (A1); valid ← true

3. while valid= true

do alege un pivot arbitrar S ∈ P, diferit de Ak

do if Pi este la dreapta muchiei orientate Ak S

4.

5.

6.

7.

8.

9.

for i ← 1 to n

then S ← Pi

if S ̸= A1

then k ← k + 1;

Ak = S

adaugă Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mulțime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O listă L care conține vârfurile ce determină frontiera acoperirii convexe,
parcursă în sens trigonometric.

1. Determinarea unui punct din P care aparține frontierei (de exemplu cel mai mic,

folosind ordinea lexicografică); acest punct este notat cu A1.

### Slide 30/30 - exemplu: Traveling Salesman Problem, în context euclidian (costurile - sunt date de distanțele dintre puncte). În acest caz, ordinea în care

- Pot fi stabilite legături cu algoritmi studiați în alt context. De

nodurile de pe frontieră apar în traseul optim coincide cu ordinea în

care acestea apar în parcurgerea frontierei acoperirii convexe -

exemplu.

- Algoritmi pentru spații euclidiene de dimensiune m ≥ 3.

- Algoritmi eficienți pentru determinarea acoperirii convexe pentru

vârfurile unui poligon arbitrar.

- Algoritmi dinamici (on-line, real-time, convex hull maintenance).

Acoperiri convexe

Alte direcții de lucru

- Aplicații: grafică pe calculator, robotică, GIS, recunoașterea
formelor, gestionarea bazelor de date multi-dimensionale, etc.

---

## C9 - Triangularea poligoanelor

_Sursa: `aa-geom-c9.md`. Overlay-urile duplicate au fost consolidate pe fiecare slide._

### Slide 1/36 - C9 - Triangularea poligoanelor

_Fara continut text extras._

### Slide 2/36 - Problema galeriei de artă - Algoritmi de triangulare - “Ear clipping”

Triangularea poligoanelor - un algoritm eficient

Supravegherea unei galerii de artă
Camera din P poate supraveghea A, dar nu B.

•A

P

• B

### Slide 3/36 - din interiorul lui P; ea poate supraveghea acele puncte cu care poate - fi unită printr-un segment inclus în interiorul poligonului.

- O cameră video (vizibilitate 3600) poate fi identificată cu un punct

- Problema galeriei de artă: câte camere video sunt necesare pentru

a supraveghea o galerie de artă și unde trebuie amplasate acestea?

Problema galeriei de artă

Formalizare

- O galerie de artă poate fi interpretată (în contextul acestei probleme)
ca un poligon P (adică o linie poligonală fără autointersecții) având n
vârfuri.

### Slide 4/36 - Problema galeriei de artă - Comentarii

_Fara continut text extras._

### Slide 5/36 - este suficientă o singură cameră. - este mai ”complexă”, cu atât numărul de camere va fi mai mare.

- Pentru a supraveghea un spațiu având forma unui poligon convex,

- Numărul de camere depinde și de forma poligonului: cu cât forma

- Principiu: Poligonul considerat: descompus în triunghiuri

(triangulare).

Problema galeriei de artă

Numărul de camere vs. forma poligonului

- Se dorește exprimarea numărului de camere necesare pentru

supraveghere în funcție de n (sau controlarea acestuia de către n).

### Slide 6/36 - Problema galeriei de artă - Despre triangulări

_Fara continut text extras._

### Slide 7/36 - acestuia și care este situat în interiorul lui P. - triunghiuri, dată de o mulțime maximală de diagonale ce nu se

- (i) O diagonală a lui P este un segment ce unește două vârfuri ale

- (ii) O triangulare TP a lui P este o descompunere a lui P în

intersectează.

Problema galeriei de artă

Definiție formală

- Fie P un poligon plan.

### Slide 8/36 - unui poligon cu n vârfuri conține exact n − 2 triunghiuri. - Problema galeriei de artă

- Teoremă. Orice poligon admite o triangulare. Orice triangulare a

Rezultate

- Lemă. Orice poligon admite o diagonală.

### Slide 9/36 - vârf îi corepunde o culoare dintr-un set de 3 culori și pentru fiecare - triunghi, cele 3 vârfuri au culori distincte.

- Dată o pereche (P, TP ) se consideră o 3-colorare a acesteia: fiecărui

- Observație. Dacă P este linie poligonală fără autointersecții o astfel

de colorare există, deoarece graful dual asociat perechii (P, TP ) este

arbore.

Problema galeriei de artă

Rezolvarea problemei galeriei de artă

- Amplasarea camerelor se poate face în vârfurile poligonului.

### Slide 10/36 - Problema galeriei de artă - Rezolvarea problemei galeriei de artă

- Amplasarea camerelor se poate face în vârfurile poligonului.
- Dată o pereche (P, TP ) se consideră o 3-colorare a acesteia: fiecărui
vârf îi corepunde o culoare dintr-un set de 3 culori și pentru fiecare
triunghi, cele 3 vârfuri au culori distincte.

- Observație. Dacă P este linie poligonală fără autointersecții o astfel
de colorare există, deoarece graful dual asociat perechii (P, TP ) este
arbore.

### Slide 11/36 - and Algorithms; J. Urrutia, Art Gallery and Illumination Problems - chromatic art gallery problem, Fekete et al., On the Chromatic Art

- Despre Teorema Galeriei de Artă: J. O’Rourke, Art Gallery Theorems

- Despre numărul de culori utilizat: L. Erickson, S. LaValle, A

Gallery Problem

Problema galeriei de artă

Teorema galeriei de artă

- Teoremă. [Chvátal, 1975; Fisk, 1978] Pentru un poligon cu n vârfuri,
camere sunt uneori necesare și întotdeauna suficiente pentru ca
fiecare punct al poligonului să fie vizibil din cel puțin una din camere.

[ n
3

### Slide 12/36 - Problema galeriei de artă - Teorema galeriei de artă - justificare, exemplu

• “uneori necesare”

### Slide 13/36 - Notăm cu n1, n2, n3 numărul de vârfuri colorate cu cele 3 culori, are

loc relația n1 + n2 + n3 = n.

Presupunem prin absurd ca nu sunt suficiente

camere. Aceasta

[ n

3

înseamnă că:

n1 >

⇒ n1 >

(folosind definiția părții întregi)

n2 >

⇒ n2 >

n3 >

⇒ n3 >

n

Adunând relațiile obținute se ajunge la relația n1 + n2 + n3 > n, ceea

ce reprezintă o contradicție. În concluzie, există i astfel ca ni ≤

Problema galeriei de artă

Teorema galeriei de artă - justificare, exemplu

• “întotdeauna suficiente”

### Slide 14/36 - Algoritmi de triangulare - “Ear clipping” - Triangularea unui poligon - intuiție

_Fara continut text extras._

### Slide 15/36 - Algoritmi de triangulare - “Ear clipping” - Triangularea unui poligon - algoritmul “Ear clipping”

Vârfuri care pot fi selectate pentru start.

### Slide 16/36 - Algoritmi de triangulare - “Ear clipping” - Triangularea unui poligon - algoritmul “Ear clipping”

Ales un vârf, este considerat triunghiul determinat cu predecesorul și succesorul.

### Slide 17/36 - Algoritmi de triangulare - “Ear clipping” - Triangularea unui poligon - algoritmul “Ear clipping”

Procedura continuă....

### Slide 18/36 - Algoritmi de triangulare - “Ear clipping” - Triangularea unui poligon - algoritmul “Ear clipping”

... se obține o triangulare a poligonului.

### Slide 19/36 - Algoritmi de triangulare - “Ear clipping” - Clasificarea vârfurilor unui poligon - convexe/concave

Vârfurile convexe (cerc) / concave (pătrat).

### Slide 20/36 - Algoritmi de triangulare - “Ear clipping” - Clasificarea vârfurilor unui poligon - principale/neprincipale

Vârfurile principale (verde) / neprincipale (roșu).

### Slide 21/36 - Algoritmi de triangulare - “Ear clipping” - Clasificarea vârfurilor unui poligon

Patru tipuri de vârfuri.

### Slide 22/36 - este convex ⇔ are același tip de viraj ca vârful “cel mai din stânga”. - nu există un alt vârf în interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Vârf convex/concav(“reflex”): se stabilește cu testul de orientare. Un vârf

- Vârf principal: Pi este principal dacă [Pi−1Pi+1] este diagonală (echivalent:

- Ear (vârf / componentă de tip E ): este un vârf principal convex [Meisters,

1975]. Dacă Pi este componentă de tip E , atunci segmentul [Pi−1Pi+1]

nu intersectează laturile poligonului și este situat în interiorul acestuia,

adică este “diagonală veritabilă”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.

- Mouth (vârf / componentă de tip M): este un vârf principal concav

[Toussaint, 1991].

- Criterii de clasificare a vârfurilor: (i) vârf convex/concav; (ii) vârf principal/nu.

- Teoremă. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel puțin 4

vârfuri admite cel puțin două componente de tip E care nu se suprapun.

- Corolar. Orice poligon admite (cel puțin) o diagonală.

- Găsirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazează pe Two Ears Theorem!

- Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

- Link despre triangulări. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

- Concepte pentru un poligon P = (P1, P2, . . . , Pn):

### Slide 23/36 - poate fi realizată cu un algoritm de complexitate O(n log n) [Lee, - Preparata, 1977]. În concluzie, avem următoarea

- Descompunerea unui poligon oarecare in componente y -monotone

Teoremă. Un poligon poate fi triangulat folosind un algoritm de

complexitate O(n log n).

- Există și alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm

- Găsirea unui algoritm liniar ”simplu” Problemă în The Open Problems

liniar.

Project

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea în poligoane
monotone

- Algoritmi de triangulare eficienți: complexitate O(n) pentru poligoane
y -monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
următoare).

### Slide 24/36 - Exemplul 1 - Exemplul 2

- Poligonul din Exemplul 1 este y -monoton: (i) poate fi parcurs de sus în jos în

exact două moduri, fără întoarceri - există două lanțuri pe care se poate realiza

parcurgerea, (ii) orice dreaptă orizontală intersectează reuniunea dintre poligon și

interior după o mulțime conexă (∅, punct sau segment). Poligonul din Exemplul 2

nu este y -monoton.

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea în poligoane
monotone

- Concept: poligon y -monoton

### Slide 25/36 - “mai au nevoie de diagonale” / “mai pot să apară în triunghiuri. - (Clarificare. Q: Când este eliminat un vârf? A: Când a fost trasată o

- Statut al dreptei de baleiere: stivă a vârfurilor deja întâlnite, dar care

diagonală situată “mai jos de acesta”).

- Evenimente: modificarea statutului. Sunt vârfurile poligonului, în

prealabil ordonate după y ; pentru fiecare vârf știm dacă este pe lanțul

din stânga sau pe cel din dreapta.

- Invariant: “pâlnie” (funnel) în care (i) vârful de sus este convex; (ii)

pe o parte: o muchie; (iii) pe cealaltă parte: muchie / succesiune de

vârfuri concave.

Triangularea poligoanelor - un algoritm eficient

Metoda - paradigma dreptei de baleiere (line sweep)

- Se consideră o dreaptă de baleiere orizontală. Algoritmul reține o
serie de informații legate de structura geometrică analizată.

### Slide 26/36 - Triangularea poligoanelor - un algoritm eficient - Evenimente - cazul 1

1. Vârful nou întâlnit este pe lanțul opus ultimului vârf din stivă.

### Slide 27/36 - Triangularea poligoanelor - un algoritm eficient - Evenimente - cazul 2a

2a. Vârful nou întâlnit este pe același lanț cu ultimul vârf din stivă.

### Slide 28/36 - Triangularea poligoanelor - un algoritm eficient - Evenimente - cazul 2b

2b. Vârful nou întâlnit este pe același lanț cu ultimul vârf din stivă.

### Slide 29/36 - Triangularea poligoanelor - un algoritm eficient - Exemplu

_Fara continut text extras._

### Slide 30/36 - Triangularea poligoanelor - un algoritm eficient - Exemplu

_Fara continut text extras._

### Slide 31/36 - Triangularea poligoanelor - un algoritm eficient - Exemplu

_Fara continut text extras._

### Slide 32/36

2.

Inițializează o stivă vidă S și inserează v1, v2.

3. for j = 3 to n − 1

4.

5.

6.

7.

8.

9.

do if vj și vârful din top al lui S sunt în lanțuri diferite

then extrage toate vârfurile din S

inserează diagonale de la vj la vf. extrase, exceptând ultimul

inserează vj−1 și vj în S

else extrage un vârf din S

extrage celelalte vârfuri din S dacă diagonalele formate cu vj

sunt în interiorul lui P; inserează aceste diagonale; inserează

înapoi ultimul vârf extras

10.

inserează vj în S

11. adaugă diagonale de la vn la vf. stivei (exceptând primul și ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lanțul vârfurilor din partea stângă și al celor din partea dreaptă sunt unite într-un
singur șir, ordonat descrescător, dupa y (dacă ordonata este egală, se folosește
abscisa). Fie v1, v2, . . . , vn șirul ordonat.

do

if vj și vârful din top al lui S sunt în lanțuri diferite

### Slide 33/36 - Triangularea poligoanelor - un algoritm eficient - Tipuri de vârfuri

_Fara continut text extras._

### Slide 34/36 - Triangularea poligoanelor - un algoritm eficient - Tipuri de vârfuri

_Fara continut text extras._

### Slide 35/36 - triangulat în timp liniar. - triangulat cu complexitatea-timp O(n log n) și complexitatea-spațiu

- Conform algoritmului descris, un poligon y -monoton poate fi

- Teoremă (rezultatul principal) Un poligon cu n vârfuri poate fi

O(n).

Triangularea poligoanelor - un algoritm eficient

Rezultate

- Folosind un algoritm bazat pe paradigma dreptei de baleiere și
clasificarea vârfurilor indicată, un poligon cu n vârfuri poate fi
descompus în poligoane y -monotone cu un algoritm având
complexitatea-timp O(n log n).

### Slide 36/36 - principale/neprincipale).

- Clasificarea vârfurilor unui poligon (convexe/concave,

- Algoritm de triangulare (ear clipping) cu complexitate-timp pătratică.

- Paradigma dreptei de baleiere.

- Algoritm de triangulare liniar pentru poligoane monotone. Aplicație la

algoritm de triangulare cu complexitate timp O(n log n).

Triangularea poligoanelor - un algoritm eficient

Scurt rezumat

- Teorema galeriei de artă, exemple de aplicare (și la seminar).

---

## C10 - Triangularea multimilor de puncte

_Sursa: `aa-geom-c10.md`. Overlay-urile duplicate au fost consolidate pe fiecare slide._

### Slide 1/22 - C10 - Triangularea mulțimilor de puncte

_Fara continut text extras._

### Slide 2/22 - Triangularea unei mulțimi arbitrare de puncte - Triangulări legale și triangulări unghiular optime

- Are sens să vorbim de triangulare pentru mulțimea {P1, P2, . . . , Pn}?

- Exemplu:

- În cele ce urmează vom considera doar mulțimi de puncte din

planul R2.

Problematizare

- Tema anterioară: triangularea unui poligon (listă ordonată de puncte

(P1, P2, . . . , Pn)).

### Slide 3/22 - (P1, P2, . . . , Pn) și triangulare a mulțimii subdiacente

- Trebuie făcută distincție între triangulare a unui poligon

{P1, P2, . . . , Pn} (coincid dacă poligonul este convex!)

- Comentariu: Triangulările mulțimilor de puncte sunt esențiale în

grafica pe calculator.

Triangularea unei mulțimi arbitrare de puncte

Problematizare

- Definiție. O triangulare a unei mulțimi P este o subdivizare

maximală a acoperirii convexe Conv(P) a lui P cu triunghiuri ale
căror vârfuri sunt elemente ale lui P (fără autointersecții!)

### Slide 4/22 - Triangularea unei mulțimi arbitrare de puncte - Exemple

(i) 3 puncte necoliniare

### Slide 5/22 - Triangularea unei mulțimi arbitrare de puncte - Exemple

(ii) 4 puncte necoliniare, nesituate toate pe o aceeași dreaptă

### Slide 6/22 - o aceeași dreaptă. Notăm cu k numărul de puncte de pe frontiera - acoperirii convexe Conv(P). Orice triangulare a lui P are

- Legătură cantitativă între aceste elemente?

- Propoziție. Fie P o mulțime de n puncte din plan nesituate toate pe

(2n − k − 2) triunghiuri și (3n − k − 3) muchii.

- Exemplu: Cazul unui (unor puncte care formează un) poligon

convex: un poligon convex cu n vârfuri poate fi triangulat cu (n − 2)

triunghiuri, având (2n − 3) muchii.

Triangularea unei mulțimi arbitrare de puncte

Elemente ale unei triangulări

- Dată o mulțime de puncte P și o triangulare TP a sa:

vârfuri, muchii, triunghiuri.

### Slide 7/22 - Triangularea unei mulțimi arbitrare de puncte - Demonstrație

_Fara continut text extras._

### Slide 8/22 - Triangulări legale și triangulări unghiular optime - Problematizare

- Problemă. Se fac măsurători ale altitidinii pentru un teren. Se

dorește reprezentarea tridimensională (cât mai sugestivă) . Alternativ:
se dorește generarea unui teren pentru o aplicație.

### Slide 9/22 - 640 - 620

- Exemplu. Măsurători ale altitudinii.

630

1000

980

990

1005

580

570

590

Triangulare 1

Triangulare 2

- Întrebări naturale: (i) Există o triangulare “convenabilă” a unei

mulțimi de puncte? (ii) Cum poate fi determinată eficient o astfel de

triangulare?

Triangulări legale și triangulări unghiular optime

Problematizare - continuare

- Problemă (reformulată). Cum ”comparăm triangulările” unei

mulțimi de puncte fixate?

### Slide 10/22 - unghiurile lui T , ordonate crescător. Vectorul unghiurilor lui T este

- Fie T o triangulare a lui P cu m triunghiuri. Fie α1, α2, . . . , α3m

A(T ) = (α1, α2, . . . , α3m).

- Relație de ordine pe mulțimea triangulărilor lui P: ordinea

lexicografică pentru vectorii unghiurilor. Fie T și T ′ două triangulări

ale lui P. Atunci A(T ) > A(T ′) dacă ∃i astfel ca αj = α′

j , ∀1 ≤ j < i

- Triangulare unghiular optimă: T astfel ca A(T ) ≥ A(T ′), pentru

și αi > α′

i .

orice triangulare T ′.

Triangulări legale și triangulări unghiular optime

Terminologie, triangulări legale

- Fixată: o mulțime de puncte P. În cele ce urmează vom

presupune că P este o mulțime de puncte din planul R2.

### Slide 11/22 - Triangulări legale și triangulări unghiular optime - Exemplu - cazul unui patrulater convex

“Cel mai mic unghi care apare în triangularea dată de AC este mai mic
decât cel mai mic unghi care apare în triangularea dată de BD.”

### Slide 12/22 - Triangulări legale și triangulări unghiular optime - Exemplu - cazul unui patrulater inscriptibil

În acest caz triunghiurile formate de diagonale au “cele mai mici
unghiuri” congruente, deci nu putem distinge între cele două
diagonale.

### Slide 13/22 - AC , adiacentă cu triunghiurile ∆ACB și ∆ACD este ilegală dacă și - numai dacă punctul D este situat în interiorul cercului circumscris

- Criteriu geometric pentru a testa dacă o muchie este legală: muchia

∆ABC .

A

B

D

C

Triangulări legale și triangulări unghiular optime

Muchii ilegale

- Conceptul de muchie ilegală. Fie A, B, C , D ∈ R2 fixate astfel ca
ABCD să fie un patrulater convex; fie TAC , TBD triangulările date de
diagonalele AC , respectiv BD. Muchia AC este ilegală dacă

min A(TAC ) < min A(TBD).

### Slide 14/22

- (i) Punctele A, B, C , D sunt conciclice ⇔ Θ(A, B, C , D) = 0.

(ii) Fie A, B, C astfel ca ABC să fie un viraj la stânga. Un punct D este

situat în interiorul cercului circumscris ∆ABC ⇔ Θ(A, B, C , D) > 0.

Triangulări legale și triangulări unghiular optime

Muchii ilegale

- Criteriu numeric / analitic pentru a testa dacă o muchie este

ilegală.

- Pentru puncte A = (xA, yA), B = (xB , yB ), C = (xC , yC ), D = (xD , yD ):

Θ(A, B, C , D) =

xA
xB
xC
xD

yA
yB
yC
yD

x 2
A + y 2
A
B + y 2
B
C + y 2
C
D + y 2
D

1

### Slide 15/22 - Triangulări legale și triangulări unghiular optime - Exemplu

_Fara continut text extras._

### Slide 16/22 - Triangulări legale și triangulări unghiular optime - Muchii ilegale, triangulări legale

- Concluzie: Dacă muchia AC este ilegală, printr-un flip (înlocuirea ei

cu BD), cel mai mic unghi poate fi mărit (local).

A1

A

B

D

C

### Slide 17/22 - Triangulări legale și triangulări unghiular optime - Muchii ilegale, triangulări legale

- Concluzie: Dacă muchia AC este ilegală, printr-un flip (înlocuirea ei

cu BD), cel mai mic unghi poate fi mărit (local).

A1

A

B

D

C

### Slide 18/22 - Triangulări legale și triangulări unghiular optime - Muchii ilegale, triangulări legale

- Concluzie: Dacă muchia AC este ilegală, printr-un flip (înlocuirea ei

cu BD), cel mai mic unghi poate fi mărit (local).

A1

A

B

D

C

### Slide 19/22 - Triangulări legale și triangulări unghiular optime - Muchii ilegale, triangulări legale

- Concluzie: Dacă muchia AC este ilegală, printr-un flip (înlocuirea ei

cu BD), cel mai mic unghi poate fi mărit (local).

A1

A

B

D

C

### Slide 20/22 - fie T ′ triangularea obținută din T prin flip-ul muchiei e. Atunci

- Concluzie (reformulare): Fie T o triangulare cu o muchie ilegală e,

A(T ′) > A(T ).

- Triangulare legală: nu are muchii ilegale. Fapt: O triangulare legală

a unei mulțimi cu n puncte poate fi determinată printr-un algoritm

incremental randomizat, cu complexitate-timp medie O(n log n).

Triangulări legale și triangulări unghiular optime

Muchii ilegale, triangulări legale

- Concluzie: Dacă muchia AC este ilegală, printr-un flip (înlocuirea ei
cu BD), cel mai mic unghi poate fi mărit (local). Printr-un flip,
vectorul unghiurilor crește.

### Slide 21/22 - Triangularea unghiular optimă poate fi construită, folosind un - algoritm incremental randomizat, în timp mediu O(n log n), folosind

- Teoremă. Fie P o mulțime de n puncte din plan, în poziție generală.

O(n) memorie medie.

Triangulări legale și triangulări unghiular optime

Triangulări unghiular optime vs. triangulări legale

- Propoziție. Fie P o mulțime de puncte din plan.
(i) Orice triangulare unghiular optimă este legală.
(ii) Dacă P este în poziție generală (oricare patru puncte nu sunt

conciclice), atunci există o unică triangulare legală, iar aceasta este
unghiular optimă.

### Slide 22/22 - unghiular optime. - a patru puncte.

- Compararea triangulărilor - criteriu folosind unghiurile. Triangulări

- Conceptul de muchie ilegală. Criteriu numeric referitor la configurația

- Triangulări legale.

- Legătura dintre triangulările unghiular optime și triangulările legale.

Triangulări legale și triangulări unghiular optime

Scurt rezumat

- Triangulare a unei mulțimi de puncte. Rezultat referitor la numărul de

triunghiuri și muchii ale unei triangulări (și la seminar).

---

## C11 - Diagrame Voronoi

_Sursa: `aa-geom-c11.md`. Overlay-urile duplicate au fost consolidate pe fiecare slide._

### Slide 1/47 - C11 - Diagrame Voronoi

_Fara continut text extras._

### Slide 2/47 - Definiție, proprietăți elementare - Diagrame Voronoi și triangulări Delaunay

Un algoritm eficient

Subdiviziuni planare. DCEL
- Ideea de a delimita “zone de influență” a apărut cu multă vreme în urmă

(de exemplu în lucrările lui Descartes, dar și în legătură cu alte probleme;

este utilizată în mod curent în varii domenii. În plus, astfel de “împărțiri”

apar în natură. Conceptul aferent este cel de diagramă Voronoi - există o

multitudine de aplicații.

Motivație

- Problema oficiilor poștale: Se consideră o mulțime de puncte (oficiile

poștale) din plan. Ce zone vor deservi aceste oficii?

> Sursa:Google Maps

### Slide 3/47 - Definiție, proprietăți elementare - Aplicații - rețele de transport

> Sursa: [Tu et al., 2014]

### Slide 4/47 - Definiție, proprietăți elementare - Aplicații - rețele de transport

> Sursa: [Lebedeva et al., 2018]

### Slide 5/47 - Definiție, proprietăți elementare - Aplicații - medicină

> Sursa: [Antiga et al., 2003]

### Slide 6/47 - Definiție, proprietăți elementare - Aplicații - medicină

> Sursa: [Wang et al., 2019]

### Slide 7/47 - Definiție, proprietăți elementare - Exemple - diagrame Voronoi în context 2D

_Fara continut text extras._

### Slide 8/47 - Definiție, proprietăți elementare - Exemple - diagrame Voronoi în context 2D

_Fara continut text extras._

### Slide 9/47 - Definiție, proprietăți elementare - Exemple - diagrame Voronoi în context 2D

_Fara continut text extras._

### Slide 10/47 - planului R2 în n celule V(P1), . . . , V(Pn) cu proprietatea că

- Diagrama Voronoi a lui P (notată Vor(P)) este o divizare a

P ∈ V(Pi ) ⇔ d(P, Pi ) ≤ d(P, Pj ), ∀j = 1, . . . , n.

- Două celule adiacente au în comun o muchie sau un vârf (punct de

intersecție a muchiilor).

- Atenție! Vârfurile lui Vor(P) sunt diferite de punctele din P.

- Uneori, prin abuz de limbaj, este precizată doar împărțirea în muchii /

vârfuri.

- Diagrame Voronoi pot fi construite pentru diverse funcții distanță

(e.g. distanța Manhattan); forma celulelor depinde de forma

“cercului” în raport cu funcția distanță respectivă. De asemenea,

există și diagrame Voronoi cu ponderi.

Definiție, proprietăți elementare

Formalizare

- Fie P = {P1, P2, . . . , Pn} o mulțime de puncte din planul R2, numite

situri.

### Slide 11/47

- Celula asociată unui punct este o intersecție de semiplane:

V(Pi ) =

h(Pi , Pj ),

∩

j̸=i

unde h(Pi , Pj ) este semiplanul determinat de mediatoarea segmentului [Pi Pj ] care

conține punctul Pi . În particular: fiecare celulă este o mulțime convexă.

Aplicabilitate: algoritm (lent, complexitate-timp O(n2 log n)) de determinare a

diagramei Voronoi.

- Dacă toate punctele sunt coliniare, atunci diagrama Voronoi asociată Vor(P)

conține n − 1 drepte paralele între ele (în particular, pentru n ≥ 3, ea nu este

conexă). În caz contrar, diagrama este conexă, iar muchiile sale sunt fie segmente,

fie semidrepte (cui corespund acestea?). Există o propoziție care caracterizează

mediatoarele segmentelor [Pi Pj ] care definesc muchii ale diagramei Voronoi.

- Propoziție. Fie o mulțime cu n situri. Atunci, pentru diagrama Voronoi asociată

au loc inegalitățile

acesteia.

unde nv este numărul de vârfuri ale diagramei și nm este numărul de muchii al

nv ≤ 2n − 5,

nm ≤ 3n − 6,

Definiție, proprietăți elementare

Structura unei diagrame Voronoi

- Fie P = {P1, P2, . . . , Pn} o mulțime de situri (puncte) din planul R2.

### Slide 12/47

• Mulțime de puncte P în planul R2 =⇒

• Diagrama Voronoi Vor(P) =⇒

• Graful dual G(P). Noduri: fețele diagramei Voronoi (siturile). Arce:

dacă celulele (fețele diagramei Voronoi corespunzătoare) au o muchie

comună =⇒

• Triangulare TP (numită triangulare Delaunay)

Diagrame Voronoi și triangulări Delaunay

Diagrame Voronoi și triangulări

- Construcție:

### Slide 13/47 - mulțimile în poziție generală (nu există patru puncte conciclice), orice triangulare - Delaunay maximizează cel mai mic unghi, comparativ cu toate triangulările lui P.

- Teoremă. O triangulare este legală dacă și numai dacă este o triangulare Delaunay.

- Teoremă. Orice triangulare unghiular optimă este o triangulare Delaunay. Pentru

Diagrame Voronoi și triangulări Delaunay

Legătura cu triangulările legale / unghiular optime

- Propoziție. Fie T o triangulare a lui P. Atunci T este o triangulare Delaunay
dacă și numai dacă pentru orice triunghi din T cercul circumscris nu conține în
interiorul său niciun punct al lui P.

Pentru punctele A, B, C , D din figură, triangularea construită este o triangulare Delaunay. În schimb, triunghiul ∆ABC
nu poate participa la realizarea unei triangulări Delaunay, deoarece D este în interiorul cercului circumscris acestuia.

### Slide 14/47 - Oricare dintre cele două diagonale determină o triangulare Delaunay - (legală), deoarece vârfurile corespunzătoare sunt “separate” de

muchia degenerată.

Diagrame Voronoi și triangulări Delaunay

Legătura cu triangulările legale / unghiular optime - cazul
unui pătrat (patrulater inscriptibil)

Întrebare: Cum “funcționează” această construcție când punctele
din P sunt (de exemplu) vârfurile unui pătrat?

### Slide 15/47 - Un algoritm eficient - Algoritmul lui Fortune [1987]

- Principiu (paradigmă): sweep line / dreaptă de baleiere.

- Metodă clasică (și eficientă) de determinare a diagramei Voronoi

pentru o mulțime de puncte din planul R2. Complexitate: O(n log n).
Detalii:
http://www.ams.org/samplings/feature-column/fcarc-voronoi.
Suport vizual disponibil.

### Slide 16/47 - Un algoritm eficient - Adaptarea paradigmei dreptei de baleiere - problematizare

Inconvenient: la întâlnirea unui vârf al diagramei, dreapta de
baleiere nu a întâlnit încă toate siturile (puncte din P) care determină
acest vârf! În figură, la trecerea prin vârful V al diagramei Voronoi,
dreapta de baleiere d nu a întâlnit încă toate siturile care determină
V . Altfel spus, V ar trebui detectat înainte de a trece prin B și C .

### Slide 17/47 - Un algoritm eficient - Adaptarea paradigmei dreptei de baleiere

Adaptare: nu reținem informația legată de intersecția dintre dreapta de
baleiere și diagramă, ci doar informația legată de partea diagramei care nu
mai poate fi influențată de punctele situate de dincolo de dreapta de
baleiere. Acest lucru se realizează asociind fiecărui sit câte o parabolă -
mulțimea punctelor egal depărtate de sit și de dreapta de baleiere. Pe
parcurs (i) aceste parabole își schimbă forma, (ii) pot să dispară / să fie
“descompuse” în arce de parabolă.

### Slide 18/47 - Un algoritm eficient - Adaptarea paradigmei dreptei de baleiere - curba parabolică

Din punct de vedere practic, apare o reuniune de arce de parabolă (curbă
parabolică), ceea ce este situat deasupra acestei curbe nu mai poate fi
influențat de evenimentele nedetectate.

### Slide 19/47 - determină arcul de parabolă și dreapta de baleiere. Presupunem că

- Este o reuniune de arce de parabolă.

- Un punct de pe curba parabolică este egal depărtat de situl care

dreapta de baleiere d are ecuația y = 0, iar situl Pi , situat deasupra lui

d (adică yi > 0) are coordonatele (xi , yi ). Locul geometric al punctelor

egal depărtate de d și Pi are ecuația

y =

x 2 −

x +

xi

yi

x 2

i + y 2

i

2yi

1

- Punctele de racord ale arcelor de parabolă aparțin muchiilor diagramei

Voronoi.

- Curba parabolică este x-monotonă, adică orice dreaptă verticală o

intersectează exact într-un punct (la ce folosește această proprietate?).

Un algoritm eficient

Despre curba parabolică (I)

- Curba parabolică (beach line):

### Slide 20/47 - Un algoritm eficient - Despre curba parabolică (II) - modificarea curbei parabolice

Site event / eveniment de tip locație. (a) La trecerea printr-un sit apare un
arc de parabolă (care “la început” este degenerat) și, reciproc, apariția unui nou
arc este posibilă doar la trecerea printr-un sit. (b) Cum stabilim algoritmic /
numeric ce arc de parabolă este “splitat”? - v. figura de mai jos. Pentru o poziție
fixată a dreptei de baleiere pot fi determinate coordonatele proiecțiilor punctelor
de racord dintre arcele de parabolă pe dreapta de baleiere și, în particular, poate fi
găsit arcul de parabolă situat deasupra unui eveniment. (c) La un moment fixat,
curba parabolică are maxim (2n − 1) arce.

### Slide 21/47 - Un algoritm eficient - Despre curba parabolică (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (a) La întâlnirea punctului inferior
al unui cerc care trece prin cel puțin trei situri și este tangent la dreapta de
baleiere dispare un arc de parabolă și, reciproc, arcele de parabolă dispar
doar la acest tip de evenimente. În figură este cercul dat de punctele
G , C , D. Arcul care dispare este cel corespunzător punctului C . Un astfel de
eveniment este asociat unui vârf al diagramei Voronoi.

### Slide 22/47 - Un algoritm eficient - Despre curba parabolică (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (b) Un eveniment de tip cerc este
dat de trei arce de parabolă consecutive de pe curba parabolică, deci trebuie
testate toate tripletele consecutive de arce, pe măsură ce ele apar. În figură,
evenimentele de tip cerc “active” sunt C(HIE ) și C(BHI ).

### Slide 23/47 - Un algoritm eficient - Despre curba parabolică (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (c) Există triplete de arce
consecutive (muchii ale diagramei Voronoi) pentru care muchiile nu se
întâlnesc. În figură, de exemplu, această afirmație se aplică arcelor
determinate de punctele D, E și H.

### Slide 24/47 - Un algoritm eficient - Despre curba parabolică (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (d) Unele evenimente de tip cerc
detectate nu au loc. În figură, evenimentul de tip cerc corespunzător C(ABC )
nu va avea loc. Arcul de parabolă corespunzător va fi “splitat” la
evenimentul de tip locație D.

### Slide 25/47 - punct din mulțimea P (apare un arc de parabolă) - unui cerc care trece prin cel puțin trei situri, tangent la dreapta de

- site event / eveniment de tip locație: întâlnirea unui sit, adică a unui

- circle event / eveniment de tip cerc: întâlnirea unui “punct inferior” al

baleiere (dispare un arc de parabolă) - vârf al diagramei Voronoi

- Evenimente:

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - formalizare

- Statut: structura curbei parabolice (succesiunea de arce de parabolă
- se subînțelege că este reținută ordinea arcelor); este modificat de
două tipuri de evenimente

### Slide 26/47 - insereaza un arc, iar la un eveniment de tip cerc se șterge un arc; - (memorate simbolic) - corespund muchiilor diagramei Voronoi

- pe frunze: siturile care au arce active, la ajungerea într-un sit se

- în nodurile interne: punctele de racord ale arcelor de parabolă

- pointeri (eventual nuli) de la frunze către evenimentele de tip cerc; de

la nodurile interne către muchiile diagramei Voronoi

- Evenimente: coadă de priorități / evenimente Q și arbore de căutare

binar echilibrat. Sunt reținute evenimentele de tip sit, precum și

evenimentele de tip cerc - detectate pe parcursul algoritmului.

- Statut: Structura curbei parabolice - arbore de căutare binar

echilibrat T .

- Analiză preliminară a complexității: (i) Câte evenimente sunt în total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (totală) pentru

a actualiza coada de evenimente? (iv) Întrebări similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

- Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).

### Slide 27/47

2. while Q ̸= ∅

3.

4.

5.

6.

do elimină evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev

else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne încă prezente în T corespund semidreptelor diagramei Voronoi.

Consideră un bounding box care conține toate vârfurile diagramei Voronoi în

interiorul său și leagă semidreptele de acest bounding box, prin actualizarea

corespunzătoare a lui D.

8. Traversează muchiile pentru a adăuga celulele diagramei și pointeri corespunzători.

Un algoritm eficient

Algoritmul

Input. O mulțime de situri P = {p1, . . . , pn} de situri în plan.
Output. Diagrama Voronoi Vor(P) în interiorul unui bounding box, descrisă printr-o
listă dublu înlănțuită D.

1.

Inițializări: coada de evenimente Q ← P (preprocesare: ordonare după y ), statut
(arbore balansat) T ← ∅; listă dublu înlănțuită D ← ∅.

### Slide 28/47

2. Caută în T arcul α situat deasupra lui pi . Dacă frunza reprezentând α are un

pointer către un eveniment de tip cerc ev din Q, atunci ev este o alarmă falsă și

trebuie șters.

3. Înlocuiește frunza lui T care reprezintă α cu un subarbore cu trei frunze: cea din

mijloc reține situl pi și celelalte două situl pj asociat lui α. Memorează perechile

reprezentând punctele de racord în două noduri interne. Efectuează rebalansări în

T , dacă este necesar.

puncte de racord.

4. Generează noi înregistrări de tip semi-muchie în structura diagramei Voronoi (D),

pentru muchiile care separă celulele V (pi ) și V (pj ), corespunzând celor două noi

5. Verifică tripletele de arce consecutive nou create, pentru a verifica dacă muchiile

corespunzătoare punctelor de racord se întâlnesc. Dacă da, inserează evenimente

de tip cerc în Q și adaugă pointeri de la nodurile lui T la evenimentele

corespunzătoare din Q.

Un algoritm eficient

Procedura ProcessEvSit (pi )

1. Dacă T este vidă, inserează pi și revine, dacă nu continuă cu 2.−5.

### Slide 29/47

2. Adaugă centrul cercului care determină evenimentul ca înregistrare de tip vârf în

D. Creează înregistrări de tip semi-muchie corespunzând noului punct de racord de

pe linia parabolică și asignează pointeri corespunzători.

3. Verifică tripletele de arce consecutive nou create (care au foștii vecini ai lui α în

centru), pentru a verifica dacă muchiile corespunzătoare punctelor de racord se

întâlnesc. Dacă da, inserează evenimente de tip cerc în Q și adaugă pointeri de la

nodurile lui T la evenimentele corespunzătoare din Q.

Un algoritm eficient

Procedura ProcessEvCerc (γ)

1. Sțerge frunza γ ∈ T care corespunde arcului de cerc α care dispare. Actualizează

în nodurile interne perechile care corespund punctelor de racord. Efectuează
rebalansări în T , dacă este necesar. Sțerge toate evenimentele de tip cerc care îi
corespund lui α (cu ajutorul pointerilor de la predecesorul și succesorul lui γ în T ).

### Slide 30/47 - determinată cu un algoritm bazat pe paradigma dreptei de baleiere - având complexitate-timp O(n log n) și complexitate-spațiu O(n).

- Teoremă. Triangularea Delaunay a unei mulțimi de n situri poate fi

Un algoritm eficient

Rezultate principale

- Teoremă. Diagrama Voronoi a unei mulțimi de n situri poate fi

### Slide 31/47 - Subdiviziuni planare. DCEL - Motivație - reprezentarea diagramelor Voronoi

_Fara continut text extras._

### Slide 32/47 - Subdiviziuni planare. DCEL - Motivație - reprezentarea datelor geo-spațiale

> Sursa: https://s-media-cache-ak0.pinimg.com/originals/37/90/86/37908600ab7db99c424c3bc6e1ddb740.jpg
Ce structură de date este adecvată pentru a memora astfel de informații?

### Slide 33/47 - Subdiviziuni planare. DCEL - Problematizare

_Fara continut text extras._

### Slide 34/47 - Subdiviziuni planare. DCEL - Problematizare

_Fara continut text extras._

### Slide 35/47 - Subdiviziuni planare. DCEL - Problematizare

_Fara continut text extras._

### Slide 36/47 - Subdiviziuni planare. DCEL - Problematizare

_Fara continut text extras._

### Slide 37/47 - (muchie orientată), cf. “half-edge”. - Subdiviziuni planare. DCEL

- Ideea fundamentală este de a introduce conceptul de semi-muchie

Ideea cheie

### Slide 38/47 - Subdiviziuni planare. DCEL - Exemplu

_Fara continut text extras._

### Slide 39/47 - Subdiviziuni planare. DCEL - Exemplu

_Fara continut text extras._

### Slide 40/47 - astfel încât poligonul să fie la stânga frontierei, iar virajele convexe să - fie la stânga,

- frontieră exterioară, care poate fi parcursă cu ajutorul semi-muchiilor

- frontieră interioară (dacă există goluri), caz în care poligonul este tot

la stânga, dar virajele în vârfurile convexe sunt la dreapta.

Subdiviziunea din figură are 6 vârfuri, 12 semi-muchii, 3 fețe.

Semi-muchiile delimitează frontiere ale fețelor, fața delimitată fiind la

stânga.

Dat un poligon (eventual cu goluri):

Subdiviziuni planare. DCEL

Exemplu

### Slide 41/47 - IncidentEdge(v ) spre o muchie orientată care are v ca origine - corespunzătoare frontierei externe (pentru fața nemărginită este NULL);

- Vârf v : coordonatele lui v în Coordinates(v ), pointer

- Față f : pointer OuterComponent(f ) spre o muchie orientată

listă InnerComponents(f ), care conține, pentru fiecare gol, un pointer

către una dintre muchiile orientate de pe frontieră

- Muchie orientată

→

e : pointer Origin(

e ), pointer Twin(

e ) pointer

IncidentFace(

e ), pointer Next (

e ), pointer Prev(

e ).

- Listă de muchii dublu înlănțuite / DCEL - Doubly Connected

Edge List [Müller și Preparata, 1978] (trei înregistrări: vârfuri, fețe,

muchii orientate (semi-muchii)).

- Oricărei subdiviziuni planare S i se asociază o listă de muchii dublu

înlănțuite DS .

- Obs. Explicați cum, folosind pointerii de mai sus: (i) poate fi

parcursă frontiera exterioară / interioară a unei fețe (a unui poligon);

(ii) pot fi găsite toate semi-muchiile incidente cu un vârf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

- Conceptul de subdiviziune planară: vârfuri, muchii, fețe.

### Slide 42/47 - Subdiviziuni planare. DCEL - Exemplu

Vârf
v1
v2
v3
v4

Coords
(0, 4)
(4, 4)
(4, 0)
(0, −2)

Inc.

Edge

e12
e23
e34
e43

Față
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).

Semimuchie

Origin

Twin
e32

Face

f1

Next

Prev
e31

### Slide 43/47 - Subdiviziuni planare. DCEL - Exemplu

Vârf
v1
v2
v3
v4

Coords
(0, 4)
(4, 4)
(4, 0)
(0, −2)

Inc.

Edge

e12
e23
e34
e43

Față
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).

Semimuchie

Origin

Twin
e32

Face

f1

Next

Prev
e31

### Slide 44/47 - Subdiviziuni planare. DCEL - Exemplu

Vârf
v1
v2
v3
v4

Coords
(0, 4)
(4, 4)
(4, 0)
(0, −2)

Inc.

Edge

e12
e23
e34
e43

Față
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).

Semimuchie

Origin

Twin
e32

Face

f1

Next

Prev
e31

### Slide 45/47 - Subdiviziuni planare. DCEL - Exemplu

Vârf
v1
v2
v3
v4

Coords
(0, 4)
(4, 4)
(4, 0)
(0, −2)

Inc.

Edge

e12
e23
e34
e43

Față
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).

Semimuchie

Origin

Twin
e32

Face

f1

Next

Prev
e31

### Slide 46/47 - Subdiviziuni planare. DCEL

- Legătura cu triangulările unghiular optime.

- Algoritmul lui Fortune.

- Conceptele de subdiviziune planară și de Doubly Connected Edge List.

Scurt rezumat

- Conceptul de diagramă Voronoi. Aspecte cantitative legate de

numărul de vârfuri/muchii/muchii de tip semidreaptă (și la seminar).

### Slide 47/47 - Subdiviziuni planare. DCEL - Alte referințe

Algorithms for Competitive Programming: Diagrame Voronoi și triangulări
Delaunay

B. Kornberger, GeomSoftware

CGAL: Triangulări Delaunay și diagrame Voronoi (detalii, implementare)

ICPC World Finals 2018, Problem G Panda Preserve: (i) enunț, (ii)
indicații soluție

---

## C12 - Intersectii

_Sursa: `aa-geom-c12.md`. Overlay-urile duplicate au fost consolidate pe fiecare slide._

### Slide 1/30 - C12 - Intersecții

_Fara continut text extras._

### Slide 2/30 - Intersecția segmentelor (generalități) - Analiza complexității algebrice

Algoritm - comentarii inițiale

Metoda dreptei de baleiere

Alte rezultate

Suprapunerea straturilor tematice

### Slide 3/30 - intersectează (interioarele lor se intersectează). - din plan, să se determine toate perechile care se intersectează.

- Problema 2. Date două poligoane P și Q, să se stabilească dacă se

- Problema 3. Dată o mulțime S = {s1, . . . , sn} de n segmente închise

- Problema 3’. Dată o mulțime S = {s1, . . . , sn} de n segmente

închise din plan, să se determine toate punctele de intersecție dintre

ele.

Intersecția segmentelor (generalități)

Motivație (Probleme geometrice în context 2D)

- Problema 1. Dată o listă (mulțime ordonată) de puncte

P = (P1, P2, . . . , Pm), să se stabilească dacă ea reprezintă un poligon
(linie poligonală fără autointersecții).

### Slide 4/30 - atunci ele se intersectează ⇔ A și B sunt de o parte și de alta a lui - CD și ⇔ C și D sunt de o parte și de alta a lui AB. Aceasta revine la

- Dacă segmentele [AB] și [CD] nu sunt incluse în aceeași dreaptă,

a aplica testul de orientare −→ polinoame de gradul II.

- De stabilit cum se procedează dacă segmentele sunt incluse în aceeși

dreaptă.

Analiza complexității algebrice

Determinarea complexității algebrice (I)

- Determinarea complexității algebrice revine la a stabili natura

calculelor care trebuie efectuate / a expresiilor care trebuie evaluate
pentru a rezolva o problemă (polinoame de un anumit grad, rapoarte
de polinoame, etc.). Nu interesează de câte ori se repetă un anumit
tip de calcule, ci cât de complexe sunt acestea. Pentru problema
analizată considerăm două segmente [AB] și [CD], cu coordonate
A = (xA, yA), B = (xB , yB ), C = (xC , yC ), D = (xD, yD).

### Slide 5/30

- Ecuația (1) se scrie în coordonate

{ xM = (1 − λ)xA + λxB = (1 − µ)xC + µxD

yM = (1 − λ)yA + λyB = (1 − µ)yC + µyD

Am obținut sistemul (2) de două ecuații cu două necunoscute (λ, µ),

care poate fi rescris sub forma

{ (xB − xA)λ + (xD − xC )µ = xC − xA

(yB − yA)λ + (yD − yC )µ = yC − yA

(2)

(3)

Analiza complexității algebrice

Determinarea complexității algebrice (IIa)

- Pentru a determina explicit punctul de intersecție dintre două

segmente [AB] și [CD]: un punct M este atât pe segmentul [AB], cât
și pe segmentul [CD] ⇔ există λ, µ ∈ [0, 1] astfel ca

M = (1 − λ)A + λB = (1 − µ)C + µD

(1)

(am scris punctul M ca fiind atât o combinație convexă a lui A și B,
cât și o combinație convexă a lui C și D).

### Slide 6/30

- Dacă ∆ ̸= 0, atunci

λ =

1

∆

xC − xA xD − xC

yC − yA yD − yC

,

µ =

xB − xA xC − xA

yB − yA yC − yA

deci calculul soluțiilor λ și µ ale sistemului (2) revine la evaluarea

unor rapoarte de forma polinom de gradul II

polinom de gradul II . Mai trebuie verificat faptul

că λ, µ ∈ [0, 1].

- În final, prin înlocuirea lui λ și µ în sistemul (2), se găsesc

coordonatele punctului de intersecție −→ polinom de gradul III

polinom de gradul II .

Analiza complexității algebrice

Determinarea complexității algebrice (IIa)

- Pentru sistemul (2), determinantul

∆ =

xB − xA xD − xC
yB − yA yD − yC

= (xB −xA)(yD −yC )−(yB −yA)(xD −xC )

este un polinom de gradul II. Dreptele AB și CD se intersectează
într-un singur punct ⇔ ∆ ̸= 0.

### Slide 7/30 - (Problema 3’)

- timp: O(n2)

- memorie: O(n)

- algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

- Complexitate:

- Comentariu: În anumite cazuri: optim (dacă toate segmentele se

intersectează).

- Algoritmi mai eficienți (output / intersection sensitive)?

Algoritm - comentarii inițiale

Algoritmul trivial

- Idee de lucru: Sunt considerate toate perechile de segmente și se
determină cele care se intersectează / se calculează punctele de
intersecție.

### Slide 8/30 - s este adăugat la listă L - atunci s este șters din L și se rapoartează intersecții între s și toate

- dacă punctul curent este marginea din stânga a unui segment s, atunci

- dacă punctul curent este marginea din dreapta a unui segment s,

segmentele din L

- Teoremă. Algoritmul are complexitate O(n log n + k) și necesită

O(n) memorie (k este numărul de perechi ce se intersectează).

Algoritm - comentarii inițiale

Rezolvarea problemei în context 1D

- Se dau segmentele [li , ri ] (i = 1, . . . , n). Mai întâi este realizată
ordonarea lexicografică a extremităților segmentelor / intervalelor
într-o listă P.

- Lista P este parcursă (crescător); lista L a segmentelor care conțin

punctul curent din P este actualizată:

### Slide 9/30 - Metoda dreptei de baleiere - Un prim algoritm

Dreapta de baleiere d: orizontală, astfel că toate intersecțiile situate
deasupra dreptei de baleiere au fost detectate. Statutul: mulțimea
segmentelor care intersectează d. Pentru aceste segmente se testează
efectiv dacă se intersectează sau nu. Evenimente : capetele
segmentelor −→ actualizarea statutului.

Statutul dreptelor din figură. d1 : ∅;

d2 : s2;

d3 : s1, s2, s3;

d4 : ∅;

d5 : s4.

### Slide 10/30 - Metoda dreptei de baleiere - Un prim algoritm

Obs. Sunt testate pentru intersecție segmente care intersectează, la
un moment dat, dreapta de baleiere d −→ (sunt testate segmentele
care sunt ”aproape” de-a lungul axei Oy ) −→ încă ineficient.

### Slide 11/30 - Metoda dreptei de baleiere - Statut - posibile abordări

Pentru segmentele s1, s2, s3 din figură sunt prezentate două variante pentru statut.
Marginea superioară a segmentului s este notată cu us , iar cea inferioară cu ds .În tabelul
din stânga statutul este o mulțime (nu se ține cont de ordinea segmentelor), iar în

tabelul din dreapta statutul este o listă (o mulțime ordonată, ordinea elementelor fiind
relevantă). În varianta 2 (statutul=listă), punctele de intersecție devin și ele evenimente
și trebuie inserate în coada de evenimente.

### Slide 12/30 - apoi y ).

- Segmentele: ordonate folosind extremitățile superioare (lexicografic, x

- Evenimente (puncte): (lexicografic, y apoi x).

- Statutul: listă (mulțime ordonată)

- Avantaj: în momentul modificării statutului, sunt testate intersecțiile

doar în raport cu vecinii din listă (sunt testate segmentele care sunt

”aproape” de-a lungul axei Ox).

- Fundamental: Punctele de intersecție devin, la rândul lor,

evenimente, deoarece schimbă ordinea segmenetelor care le determină

−→ chiar dacă nu sunt determinate explicit, trebuie inserate în lista

de evenimente (compararea coordonatelor poate necesita utilizarea

unor polinoame de gradul V)

Metoda dreptei de baleiere

Un algoritm eficient [Bentley și Ottmann, 1979; Mehlhorn
și N¨aher, 1994]

- Idee de lucru: ordonare (segmente, evenimente).

### Slide 13/30 - baleiere

- eliminat un segment din statutul liniei de baleiere

- testare pentru segmentele vecine nou apărute

- segmentele care le determină trebuie ”inversate” în statutul liniei de

- Marginea inferioară a unui segment

- punctele de intersecție (inserate în mod corespunzător pe parcurs)

Metoda dreptei de baleiere

3 tipuri de evenimente

- Marginea superioară a unui segment

- apare un nou segment în statutul liniei de baleiere, ce trebuie inserat

corespunzător

- testat, în raport cu vecinii, dacă au puncte de intersecție sub linia de

baleiere −→ vor deveni ulterior evenimente

### Slide 14/30 - La evenimentul us5 statutul se modifică de la (s1, s2, s3, s4) la (s1, s5, s2, s3, s4). De - asemenea, sunt efectuate teste de intersecție între vecinii nou apăruți. Astfel, s1

și s5 nu se intersectează, în schimb s5 și s2 se intersectează, fiind inserat un nou

eveniment (s5 ∩ s2).

Metoda dreptei de baleiere

Evenimente de tip margine superioară

### Slide 15/30 - Evenimentul analizat este ds1 . În figura din stânga, evenimentul s2 ∩ s3 nu a fost - detectat anterior și este adăugat în lista de evenimente. În figura din dreapta,

evenimentul s2 ∩ s3 a fost detectat anterior, întrucât s2 și s3 au fost vecine în

statut înainte de evenimentul us1 .

Metoda dreptei de baleiere

Evenimente de tip margine inferioară

### Slide 16/30 - dreapta

- pe frunze: segmente, este reținută ordinea segmentelor de la stânga la

- în nodurile interne: segmente, privite ca elemente de ghidare

- de evaluat: complexitatea-timp (pentru o actualizare, numărul de

repetiții)

- puncte, ordonate lexicografic, după y apoi x; memorată într-un arbore

de căutare binar echilibrat (balanced binary search tree)

- evenimentele nou detectate trebuie inserate în mod corespunzător!

- de evaluat: complexitatea-timp (pentru o inserare, numărul de

repetiții); complexitatea spațiu

- T – statut: arbore de căutare binar echilibrat

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

- Q – coada/lista de evenimente (event queue)

### Slide 17/30 - Metoda dreptei de baleiere - Exemplu

_Fara continut text extras._

### Slide 18/30 - pentru fiecare punct precizează segmentele pe care se găsește.

- Output. Mulțimea punctelor de intersecție (explicit sau doar formal);

1. Q ← ∅. Inserează extremitățile segmentelor în Q; împreună cu

marginea superioară a unui segment memorează și segmentul

2. T ← ∅.

3. while Q ̸= ∅

4.

5.

ANALIZEAZA (p)

do determină evenimentul p care urmează în Q și îl șterge

Metoda dreptei de baleiere

Algoritm INTERSECTII

- Input. O mulțime de segmente din planul R2.

### Slide 19/30

2. Determină toate segmentele care conțin p: sunt adiacente în T (de

ce?) Fie D(p), respectiv Int(p), mulțimea segmentelor care au p

drept margine inferioară, respectiv conțin p în interior.

3. if U(p) ∪ D(p) ∪ Int(p) conține mai mult de un segment

4.

then raportează p ca punct de intersecție, împreună cu

segmentele din U(p), D(p), Int(p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

1. Fie U(p) mulțimea segmentelor a căror extremitate superioară este p
(pentru cele orizontale este marginea din stânga) - stocată cu p în Q.

### Slide 20/30

6. inserează segmentele din U(p) ∪ Int(p) în T (ordinea segmentelor pe

frunzele lui T coincide cu ordinea în care sunt intersectate de o linie

de baleiere situată imediat sub p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

5. șterge segmentele din D(p) ∪ Int(p) din T

### Slide 21/30

8.

9.

10.

11.

12.

13.

14.

15.

then fie sl și sr vecinii din stânga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)

else fie s ′ din U(p) ∪ Int(p) cel mai în stânga în T

fie sl vecinul din stânga al lui p

DETERMINAEVENIMENT (sl , s ′, p)

fie s ′′ din U(p) ∪ Int(p) cel mai în dreapta în T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

### Slide 22/30

2.

then inserează punctul de intersecție ca eveniment în Q

Metoda dreptei de baleiere

DETERMINAEVENIMENT (sgtl , sgtr , p)

1. if sgtl și sgtr se intersectează sub linia de baleiere sau pe linia
de baleiere, dar la dreapta lui p și punctul de intersecție nu
este deja în Q

### Slide 23/30 - Metoda dreptei de baleiere - Rezultatul principal (intersecții de segmente)

Teoremă. Fie S o mulțime care conține n segmente din planul R2. Toate
punctele de intersecție ale segmentelor din S, împreună cu segmentele
corespunzătoare, pot fi determinate în O(n log n + I log n) timp, folosind
O(n) spațiu (I este numărul punctelor de intersecție).

### Slide 24/30 - Alte rezultate - Suprapunerea unor segmente cu conținut tematic diferit

_Fara continut text extras._

### Slide 25/30 - Alte rezultate - Red-blue intersections [Mairson și Stolfi, 1988; Mantler și

Snoeyink, 2000]

Teoremă. Pentru două mulțimi R și B de segmente din R2 având
interioare disjuncte, perechile de segmente ce se intersectează pot fi
determinate în O(n log n + k) timp și spațiu liniar, folosind predicate
(polinoame) de grad cel mult II (n = |R| + |B|) și k este numărul
perechilor ce se intersectează).

### Slide 26/30 - În figură sunt considerate două subdiviziuni S1, S2 și structurile de tip DCEL - asociate, fiind reprezentate doar semi-muchiile corespunzătoare muchiilor BC și

EF . Datorită punctului de intersecție P, aceste semi-muchii vor fi înlocuite cu alte

perechi de semi-muchii. În mod analog se procedează și pentru intersecția dintre

CD și EF .

Suprapunerea straturilor tematice

Exemplu

### Slide 27/30 - În exemplul din figură, prin vârful v al subdiviziunii S1 (cu albastru) trece o muchie - a subdiviziunii S2 (cu roșu).

Actualizarea presupune definirea unor semi-muchii noi (sau păstrarea celor vechi,

după caz), precum și definirea / actualizarea pointerilor asociați. La actualizare se

ține cont de principiul fața delimitată de o muchie este la stânga acesteia.

De exemplu, semi-muchia e este înlocuită cu două semi-muchii e ′ și e ′′. Pentru e ′

pointerii asociați sunt: Origin(e ′)=v , Twin(e ′) este legat de actualizarea lui ˜e,

Next(e ′)=Next(e), Prev(e ′)=α (semi-muchia “cea mai apropiată de e ′ în sens

trigonometric”). Pentru e ′′ pointerii asociați sunt: Origin(e ′′)=Origin(e),

Twin(e ′′) este legat de actualizarea lui ˜e, Next(e ′′)=β (semi-muchia “cea mai

apropiată de e ′′ în sens orar”), Prev(e ′′)=Prev(e).

Suprapunerea straturilor tematice

Actualizarea listei de semi-muchii

### Slide 28/30 - muchii ale lui S1, cât și ale lui S2

- Actualizează DO(S1,S2), în cazul în care evenimentul implică atât

- Memorează noile muchii orientate adecvat

- Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat într-o listă

dublu înlănțuită DO(S1,S2)

1. Copiază listele D1, D2 într-o nouă listă dublu înlănțuită DO(S1,S2)

2. Calculează toate intersecțiile de muchii dintre S1 și S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lângă actualizarea lui Q și T ,

efectuează:

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

- Input. Două subdiviziuni planare S1, S2 memorate în liste dublu

înlănțuite DS1, DS2

### Slide 29/30

4. Construiește graful G ale cărui noduri corespund ciclilor de frontieră și ale cărui

arce unesc fiecare ciclu corespunzând unui gol cu ciclul de la stânga vârfului cel

mai din stânga și determină componentele conexe ale lui G

5. for fiecare componentă a lui G

6.

do Fie C unicul ciclu de frontieră exterioară a

componentei și fie f fața mărginită a ciclului. Creează

o înregistrare pentru f , setează OuterComponent(f )

(către una din muchiile lui C), construiește lista

InnerComponents(f ) (pentru fiecare gol, pointer către

una dintre muchiile orientate). Pentru fiecare muchie

orientată, IncidentFace() către înregistrarea lui f

7. Etichetează fiecare față a lui O(S1, S2)

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

3. Determină ciclii de frontieră din O(S1, S2), stabilește natura (exteriori/interiori)

### Slide 30/30

- Corolar. (Operații boolene) Fie P1 un poligon cu n1 vârfuri și P2

un poligon cu n2 vârfuri; fie n = n1 + n2. Atunci P1 ∪ P2, P1 ∩ P2 și

P1 \ P2 pot fi determinate în timp O(n log n + k log n), unde k este

complexitatea output-ului.

Suprapunerea straturilor tematice

Rezultate principale

- Teoremă. (Overlay-ul hărților) Fie S1 o subdiviziune de
complexitate n1, S2 o subdiviziune de complexitate n2, fie
n := n1 + n2. Overlay-ul dintre S1 și S2 poate fi construit în
O(n log n + k log n), unde k este complexitatea overlay-ului.

---

## C13-C14 - Elemente de programare liniara

_Sursa: `aa-geom-c13_14.md`. Overlay-urile duplicate au fost consolidate pe fiecare slide._

### Slide 1/45 - C13, 14 - Elemente de programare liniară

_Fara continut text extras._

### Slide 2/45 - Motivație: turnarea pieselor în matrițe - Intersecții de semiplane - abordare cantitativă

Dualitate

Intersecții de semiplane - abordare calitativă. Programare liniară

### Slide 3/45 - Motivație: turnarea pieselor în matrițe - Turnarea pieselor în matrițe

Matriță M

### Slide 4/45 - Motivație: turnarea pieselor în matrițe - Turnarea pieselor în matrițe

Piesa turnată P

Matriță M

### Slide 5/45 - Motivație: turnarea pieselor în matrițe - Turnarea pieselor în matrițe

Fața superioară a lui P

Piesa turnată P

Matriță M

### Slide 6/45 - Motivație: turnarea pieselor în matrițe - Turnarea pieselor în matrițe

Fețe standard

Fața superioară a lui P

Piesa turnată P

Matriță M

### Slide 7/45 - care nu există o matriță adecvată. - poată fi extras (și dacă da, cu un algoritm eficient?)

- Neajunsuri: unele obiecte pot rămâne blocate; există obiecte pentru

- Problema studiată. Dat un obiect, există o matriță din care să

> Sursa: https://www.graphics.rwth-aachen.de/publication/03149/

Motivație: turnarea pieselor în matrițe

Problematizare

- Turnarea pieselor în matrițe și extragerea lor fără distrugerea matriței.

### Slide 8/45 - Motivație: turnarea pieselor în matrițe - Convenții

- Obiectele: poliedrale. Matrițele: formate dintr-o singură piesă;

fiecărui obiect P îi este asociată o matriță MP

- Obiectul: extras printr-o singură translație (sau o succesiune de

translații)

- Alegerea orientării: diverse orientări ale obiectului pot genera

diverse matrițe, astfel încât doar în unele configurații este posibilă
extragerea obiectului

### Slide 9/45 - Motivație: turnarea pieselor în matrițe - Terminologie și convenții (I)

Fața superioară: prin
convenție, obiectele au
(cel puțin) o față
superioară (este
orizontală, este singura
care nu este adiacentă cu
matrița).
Celelalte fețe: standard;
orice față standard f a
obiectului corespunde unei
fețe standard ˆf a matriței.

Fețe standard

Fața superioară a lui P

Piesa turnată P

Matriță M

### Slide 10/45 - Motivație: turnarea pieselor în matrițe - Terminologie și convenții (II)

Obiect care poate fi turnat
(castable): există o orientare pentru
care acesta poate fi turnat și apoi
extras printr-o translație (succesiune
de translații): direcție admisibilă.
Convenții: Matrița este
paralelipipedică și are o cavitate
corespunzătoare obiectului; fața
superioară a obiectului (și a matriței)
este perpendiculară cu planul Oxy .

Obiectul din figură (în formă de T) poate fi turnat.

### Slide 11/45 - În figura din stânga fața ˆf1 a matriței (corespunzătoare feței f1 a piesei) blochează - extragerea în direcția

d . Acest fapt este echivalent cu

−→

m(∠(

ν (f1),

d )) < 90◦ ⇔ cos(∠(

d ) > 0.

În figura din dreapta fața ˆf2 a matriței (corespunzătoare feței f2 a piesei) nu

blochează extragerea în direcția

ν (f2),

d )) ≥ 90◦ ⇔ cos(∠(

d ) ≤ 0.

Am notat cu

ν (f2) normalele exterioare la fețele f1, respectiv f2.

Condițiile referitoare la unghiuri indicate mai sus trebuie verificate pentru toate

fețele!

Motivație: turnarea pieselor în matrițe

Descrierea proprietății de a putea extrage o piesă într-o
direcție dată

### Slide 12/45 - −→

- Fie f o față a obiectului,

ν (f ) = (νx , νy , νz ). Faptul că fața

corespunzătoare ˆf a matriței nu blochează extragerea în direcția

revine la

⟨

ν (f ),

d ⟩ ≤ 0 ⇔

νx · dx + νy · dy + νz ≤ 0.

d

(1)

- Fixată o față f (informația relevantă fiind νx , νy , νz ) căutăm

d = (dx , dy ) astfel încât să fie verificată relația (1). Aceasta este o

inegalitate care descrie un hiperplan.

- Condițiile indicate mai sus trebuie verificate pentru toate fețele!

Motivație: turnarea pieselor în matrițe

Detaliere (scriere în coordonate)

- Cum vrem să extragem obiectul din matriță “în sus”, putem

presupune f.r.g. că

d = (dx , dy , 1) (de ce?).

### Slide 13/45 - direcția ⃗d dacă și numai dacă ⃗d face un unghi de cel puțin 90◦ cu normala - exterioară a fiecărei fețe standard a lui P.

- Propoziție. Un poliedru P poate fi extras din matrița sa MP prin translație în

- Reformulare. Dat P, trebuie găsită o direcție ⃗d astfel încât, pentru fiecare față

standard f , unghiul dintre ⃗d și ⃗ν(f ) să fie cel puțin 90◦.

- Analitic - pentru o față: fiecare față definește un semiplan, i.e. dată o față

standard f a poliedrului / matriței, a găsi o direcție admisibilă revine la a rezolva o

inecuație de tipul (1), care corespunde unui semiplan.

- Analitic - toate fețele: Fie P un poliedru; fața superioară fixată, paralelă cu

planul Oxy . Considerăm matrița asociată și toate fețele matriței (i.e. toate fețele

standard ale poliedrului). A determina o direcție admisibilă revine la a determina o

direcție care verifică toate inegalitățile de tip (1), deci un sistem de inecuații.

- Concluzie: Pentru a stabili dacă există o direcție admisibilă, trebuie stabilit dacă o

intersecție de semiplane este nevidă.

Motivație: turnarea pieselor în matrițe

Sinteză - fundamente geometrice

- Context: direcția de extragere ⃗d are componenta z pozitivă.
- În general: o față standard ˆf a matriței (corespunzătoare unei fețe f a piesei)

pentru care unghiul dintre normala exterioară ⃗ν(f ) la față f și ⃗d este mai mic de
90◦ împiedică translația în direcția ⃗d.

### Slide 14/45 - Motivație: turnarea pieselor în matrițe - Exemple

1. Intersecția semiplanelor

−x + y + 1 ≤ 0; −y − 3 ≤ 0;

2x + 3y − 5 ≤ 0.

### Slide 15/45 - Motivație: turnarea pieselor în matrițe - Exemple

2 (a). Normalele exterioare ale fețelor standard, parcurse în sens orar, sunt
coliniare cu vectorii

(0, 1, 1), (0, 1, 0), (0, 0, −1), (0, −1, 0), (0, −1, 1).

### Slide 16/45

(i) Intersecția unei mulțimi de n semiplane poate fi determinată cu

complexitate-timp O(n log n) și folosind O(n) memorie.

(ii) Se poate stabili cu complexitate-timp medie O(n) dacă o intersecție de

semiplane este nevidă.

(ii)’ Fie P un poliedru cu n fețe. Se poate decide dacă P reprezintă un

obiect care poate fi turnat cu complexitate-timp medie O(n2) și

folosind O(n) spațiu. În caz afirmativ, o matriță și o direcție admisibilă

în care poate fi extras P este determinată cu aceeași complexitate-timp.

(i) Caracterizare explicită: Să se determine care sunt elementele

(vârfuri, muchii, etc.) care determină o intersecție de semiplane.

(ii) Calitativ: Să se stabilească dacă o intersecție de semiplane este nevidă.

- Rezultate: (descrise în detaliu ulterior)

Motivație: turnarea pieselor în matrițe

Intersecții de semiplane - probleme studiate, rezultate

- Probleme studiate:

### Slide 17/45 - este o mulțime poligonală convexă, mărginită de cel mult n muchii - (poate fi vidă, mărginită, nemărginită,...). Se poate aplica un

- Intersecția H1 ∩ H2 ∩ . . . ∩ Hn este dată de un sistem de inecuații;

algoritm de complexitate O(n log(n)) bazat pe paradigma divide et

impera și pe algoritmul de suprapunere a straturilor tematice (cf. curs

12) pentru a determina această intersecție.

- În cele ce urmează va fi prezentată o tehnică bazată pe o paradigmă

complet diferită.

Intersecții de semiplane - abordare cantitativă

(i) Caracterizare explicită - Formularea problemei

- Fie H = {H1, H2, . . . , Hn} o mulțime de semiplane din R2; semiplanul

Hi dat de o relație de forma

ai x + bi y + ci ≤ 0

### Slide 18/45 - Intersecții de semiplane - abordare cantitativă - Semiplane - intersecții

Când determinăm o intersecție de n semiplane, nu sunt neapărat
relevante toate semiplanele pentru determinarea intersecției acestora.
Altfel spus, date n semiplane, ne interesează care sunt cele care
contribuie efectiv la determinarea intersecției acestora?
În figura de mai jos (sursa Geogebra) sunt considerate cinci semiplane
s1, s2, s3, s4, s5 dintre care relevante pentru intersecție sunt doar s2 și
s4.

### Slide 19/45 - neverticală în plan?

- De câte informații (numerice) este nevoie pentru a indica o dreaptă

- Există o modalitate naturală de a stabili o corespondență între puncte

- 2

și drepte?

- DA: dualitate

- Cum se reflectă / respectă diferite proprietăți geometrice (de exemplu

incidența) prin dualitate?

Dualitate − motivație intuitivă

Dualitate

- De câte informații (numerice) este nevoie pentru a indica un punct

în plan?

### Slide 20/45 - asociază un punct din planul dual, notat d ∗:

- Unei drepte neverticale d : (y = md x + nd ) din planul primal i se

d ∗ = (md , −nd ) dualul lui d.

- Obs. Această transformare este polaritatea față de parabola y = x 2

2 .

Dualitate − definiții

Dualitate

- Unui punct p = (px , py ) din planul R2 (plan primal) i se asociază o

dreaptă din planul dual, notată p∗:

p∗ : (y = px x − py ) duala lui p.

### Slide 21/45 - Dualitate − proprietăți elementare - Dualitate

_Fara continut text extras._

### Slide 22/45 - Dualitate − proprietăți elementare - Dualitate

_Fara continut text extras._

### Slide 23/45 - Dualitate − “dicționar” concepte și configurații - Dualitate

Plan primal

Plan dual

Punct p

Dreaptă neverticală d

Dreaptă determinată
de două puncte

Dreaptă neverticală p∗
Punct d ∗

Punct de intersecție
a două drepte

Punctul p deasupra dreptei d Punctul d ∗ deasupra dreptei p∗

Segment

Fascicul de drepte (wedge)

### Slide 24/45 - Exemplu - Dualitate

_Fara continut text extras._

### Slide 25/45 - semiplan inferior - semiplan superior

- Dat un semiplan delimitat de o dreaptă neverticală

ax + by + c ≤ 0

(b ̸= 0)

cum se decide dacă este semiplan inferior sau semiplan superior? (R:

semnul lui b). Exemple:

−x + y + 3 ≤ 0

x − y − 3 ≤ 0

Dualitate

Semiplane inferioare și semiplane superioare

- Exemple.

### Slide 26/45 - Semiplane inferioare și semiplane superioare - Dualitate

Când determinăm o intersecție de semiplane inferioare / superioare,
nu sunt neapărat relevante toate semiplanele. În figura de mai jos
(link Geogebra) sunt considerate cinci semiplane inferioare
s1, s2, s3, s4, s5 dintre care relevante pentru intersecție sunt doar s2 și
s4.

### Slide 27/45 - Observația fundamentală - Dualitate

Fie p, q cu p ̸= q și dreapta d = pq neverticală. Fie r un punct situat
dedesubtul dreptei d = pq. Care este configurația duală?

### Slide 28/45 - superioară a acoperirii convexe a lui P?

- Q: Ce înseamnă că un segment [pq] (p, q ∈ P) participă la frontiera

- A: Toate celelalte puncte sunt dedesubtul dreptei d = pq.

- Configurația duală: Punctul d ∗ este situat dedesubtul dreptelor

corespunzătoare celorlalte puncte și, prin trecere la semiplane

inferioare, “contează” semiplanele inferioare determinate de p∗ și q∗.

Observația fundamentală

Dualitate

- Fie P o mulțime de puncte.

### Slide 29/45 - Dualitate - Exemplu - link Geogebra

Semiplane inferioare:

Inec. semiplan
h1 : y ≤ x + 4
h2 : y ≤ −x + 5
h3 : y ≤ 8
h4 : y ≤ 2x + 8
h5 : y ≤ 3x − 1
h6 : y ≤ 2x + 3
h7 : y ≤ −2x + 1

Ec. dr . suport
d1 : y = x + 4
d2 : y = −x + 5
d3 : y = 8
d4 : y = 2x + 8
d5 : y = 3x − 1
d6 : y = 2x + 3
d7 : y = −2x + 1

Pct. pl. dual
d ∗
1 = (1, −4)
2 = (−1, −5)
3 = (0, −8)
4 = (2, −8)
5 = (3, 1)
6 = (2, −3)
7 = (−2, −1)

Intersecția semiplanelor inferioare h1, . . . , h7 este determinată de intersecția dintre h5 și
h7. În mod corespunzător, frontiera superioară a acoperirii convexe a punctelor
5 = (3, 1) și d ∗
1 , . . . , d ∗
Semiplane superioare:

7 este determinată de d ∗

7 = (−2, −1).

h8 : y ≥ −10
h9 : y ≥ −15
h10 : y ≥ −x − 10
h11 : y ≥ x − 12

d8 : y = −10
d9 : y = −15
d10 : y = −x − 10
d11 : y = x − 12

8 = (0, 10)
9 = (0, 15)
10 = (−1, 10)
11 = (1, 12)

Intersecția semiplanelor superioare h8, . . . , h11 este determinată de intersecția dintre h8,
h10 și h11. În mod corespunzător, frontiera inferioară a acoperirii convexe a punctelor
8 = (0, 10), d ∗
8 , . . . , d ∗

11 este determinată de d ∗

10 = (−1, 10) și d ∗

11 = (1, 12).

### Slide 30/45 - complexitate O(n log n). - fi interpretată ca fiind ordonare a dreptelor după panta dreptei suport

- Teoremă Intersecția a n semiplane poate fi descrisă cu un algoritm de

- De fapt, aplicarea dualității combinată cu sortarea lexicografică poate

și apoi utilizarea unui mecanism incremental, cu eliminarea

semiplanelor redundante. Această abordare directă este descrisă de Z.

Zhu în 2006, în New Algorithm for Half-plane Intersection and its

Practical Value (v. și această referință).

Concluzie pentru (i) - abordarea cantitativă

Dualitate

- Pentru a determina o intersecție de semiplane inferioare se
consideră mulțimea de puncte din planul dual și se determină
frontiera superioară a acoperirii convexe a mulțimii respective. Un
rezultat analog are loc pentru intersecții de semiplane superioare și
frontiera inferioară a acoperirii convexe a mulțimii de puncte duale.
În consecință:

### Slide 31/45 - minute) pentru produs este indicat în tabel. - X

- Ciclul de producție este săptămânal (40h de lucru). Timpul de producție (în

10

12

8

Y

27

19

24

1

2

3

Obs.

pe ambele

Nr. prod.

x1

în paralel, simultan

x2, respectiv y2

x3, respectiv y3

Spațiu

0.1m2

0.2m2

0.05m2

Profit

13

9

- Aparatele X și Y au un interval de mentenanță de 5%, respectiv 7% din timpul de

lucru. Spațiul total de depozitare este de 50m2.

- Modelul matematic:

Constrângeri:

0.1x1 + 0.2(x2 + y2) + 0.05(x3 + y3) ≤ 50 Spațiu de depozitare

10x1 + 12x2 + 8x3 ≤ 0.95 · 40 · 60

27x1 + 19y2 + 24y3 ≤ 0.93 · 40 · 60

Timp aparatul X

Timp aparatul Y

Cerința:

maximizează(10x1 + 13(x2 + y2) + 9(x3 + y3))

Intersecții de semiplane - abordare calitativă. Programare liniară

(ii) Abordarea calitativă. Motivație

- Sunt realizate 3 produse (notate 1, 2 și 3) pe 2 aparate (notate X și Y ).

### Slide 32/45

- date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d

- funcție obiectiv: (c1x1 + c2x2 + . . . + cd xd )

- constrângeri: inegalitățile (2)

- regiune realizabilă (fezabilă): intersecția semispațiilor care definesc

constrângerile problemei

- Denumiri:

- Obs. Interpretare a cerinței de maximizare: Maximizarea funcției obiectiv revine

la a determina un punct al cărui vector de poziție are proiecția maximă de direcția

dată de vectorul

c = (c1, c2, . . . , cd ).

→

Intersecții de semiplane - abordare calitativă. Programare liniară

Problematizare, terminologie

- Formulare generală (în spațiul d-dimensional):

maximizează(c1x1 + c2x2 + . . . + cd xd )

date constrângerile liniare (inegalități)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

### Slide 33/45

Lemă. (Pentru d = 1) Un program liniar 1-dimensional poate fi

rezolvat în timp liniar.

Intersecții de semiplane - abordare calitativă. Programare liniară

Exemplu - cazul 1D (d = 1)

### Slide 34/45 - Intersecții de semiplane - abordare calitativă. Programare liniară

Exemplu - cazul 2D (d = 2)

### Slide 35/45 - • Coordonatele: x și y - • Funcția obiectiv: f→

c (p) = cx x + cy y , unde

• Constrângerile: h1, h2, . . . , hn (semiplane); se notează

→

c = (cx , cy ).

H = {h1, h2, . . . , hn}

• Regiunea fezabilă este C = h1 ∩ h2 ∩ . . . ∩ hn.

- Program liniar: (H,

c ).

- Scop: Se caută p ∈ C astfel ca f→

c (p) să fie maximă.

- Pentru o problemă de programare liniară în plan pot fi distinse patru

situații: (i) o soluție unică; (ii) toate punctele de pe o muchie sunt

soluții; (iii) regiunea fezabilă este nemărginită și pot fi găsite soluții

de-a lungul unei semidrepte; (iv) regiunea fezabilă este vidă.

Intersecții de semiplane - abordare calitativă. Programare liniară

Probleme de programare liniară în plan (d = 2)

- Convenții și terminologie:

### Slide 36/45 - Intersecții de semiplane - abordare calitativă. Programare liniară

Cazul 2D (d = 2) - exemple de regiuni fezabile

### Slide 37/45 - actualizează;

- constrângerile sunt adăugate una câte una;

- presupunem că la fiecare pas soluția (punctul de maxim) există, apoi

- sunt adăugate la început constrângeri care garantează mărginirea

programului liniar, definite astfel: se alege M >> 0 și se definesc noi

constrângeri convenabile;

- se lucrează cu convenția de ordonare lexicografică, astfel încât există o

unică soluție optimă.

- Vom considera în continuare

→

c = (0, −1), iar noile constrângeri vor fi:

m1 : x ≥ −M,

m2 : y ≥ −M.

Intersecții de semiplane - abordare calitativă. Programare liniară

Algoritm incremental pentru rezolvarea unei probleme de
programare liniară 2D

- Principii:

### Slide 38/45

(i) C0 ⊇ C1 ⊇ C2 ⊇ . . . ⊇ Cn = C .

(ii) Pentru fiecare i, regiunea fezabilă Ci , dacă este nevidă, are un vârf care

reprezintă o soluție optimă a problemei (Hi ,

c ). Punctul este notat cu

→

vi (depinde de alegerea lui m1 și m2).

- Observații:

Intersecții de semiplane - abordare calitativă. Programare liniară

Notații

- Fie (H,
notează:

c ) un program liniar cu constrângerile h1, h2, . . . , hn. Se

Hi = {m1, m2, h1, h2, . . . , hi }, mulțime de semiplane

Ci = m1 ∩ m2 ∩ h1 ∩ h2 ∩ . . . ∩ hi , regiune fezabilă.

Notația este pentru i = 0, . . . , n, în particular

H0 = {m1, m2}

C0 = m1 ∩ m2.

### Slide 39/45 - Intersecții de semiplane - abordare calitativă. Programare liniară - Exemplu

_Fara continut text extras._

### Slide 40/45

fie Ci = ∅

fie vi ∈ di , unde di este dreapta care mărginește hi .

În acest caz, găsirea lui vi revine la găsirea lui p ∈ di care maximizează

f→

(p), date constrângerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,

aceasta este o problemă pe programare liniară 1-dimensională, care

c

are complexitatea-timp liniară, adică O(i).

(i) dacă vi−1 ∈ hi , atunci vi = vi−1,

(ii) dacă vi−1 ̸∈ hi , atunci

Intersecții de semiplane - abordare calitativă. Programare liniară

Observații

- Fie 1 ≤ i ≤ n, presupunem că Ci−1 și vi−1 sunt determinate.

Considerăm hi . Sunt două situații:

### Slide 41/45 - → - c ) nu e realizabil (fezabil),

- Output. Dacă (H ∪ {m1, m2},

raportează. În caz contrar, indică punctul cel mai mic lexicografic p

care maximizează f→

(p).

c

1. v0 ← “colțul” lui c0

2. fie h1, h2, . . . , hn semiplanele din H

3. for i ← 1 to n

do if vi−1 ∈ hi

then vi ← vi−1

4.

5.

6.

7.

8.

9. return vn

else vi ← punctul p de pe di care

maximizează f→

(p) date constrângerile din Hi

if p nu există

then raportează “nefezabil” end

Intersecții de semiplane - abordare calitativă. Programare liniară

Algoritm LPMARG2D (H,

c , m1, m2)

- Input. Un program liniar (H ∪ {m1, m2},

c ) din R2

### Slide 42/45 - Intersecții de semiplane - abordare calitativă. Programare liniară - Comentariu - ordinea contează

_Fara continut text extras._

### Slide 43/45 - iar varianta bazată pe alegerea aleatorie a semiplanelor are - complexitate-timp medie O(n) (n este numărul semiplanelor).

- Algoritmul incremental LPMARG2D are complexitate-timp O(n2),

Intersecții de semiplane - abordare calitativă. Programare liniară

Algoritm aleatoriu

- Pasul 2. este înlocuit cu:

2’. Calculează o permutare arbitrară a semiplanelor, folosind o procedură

adecvată.

### Slide 44/45 - În concluzie, timpul total de rulare este Σn

i=1 Xi O(i) + O(n).

Valoarea așteptată (timpul mediu)

E [

Xi O(i)] = µ(

Xi O(i)) =

O(i)µ(Xi )≤

O(i) ·

= O(n).

n

Σ

i=1

2

i

Vom arăta că µ(Xi ) ≤ 2

i , de unde va rezulta inegalitatea dorită.

Intersecții de semiplane - abordare calitativă. Programare liniară

Analiza complexității-timp - varianta algoritmului
probabilist (I)

Fie (Xi )i=1,...,n variabilă aleatoare definită astfel:

Xi =

{ 0,
1,

dacă vi−1 ∈ hi (adică este ales pasul 5 la iterația i)
dacă vi−1 ̸∈ hi (adică este ales pasul 6 la iterația i).

### Slide 45/45 - • Care este probabilitatea ca vn−1 ̸∈ hn, adică la adăugarea lui hn, vârful - • Care este probabilitatea ca eliminând unul dintre semiplane să fie

vn−1 să fie modificat în vn? ⇔

modificat vârful optim vn?

- Arătăm inegalitatea pentru i = n (cazul general, analog).

Presupunem algoritmul terminat, vn vârful optim.

Intersecții de semiplane - abordare calitativă. Programare liniară

Analiza complexității-timp - varianta algoritmului
probabilist (II)

- Demonstrăm că µ(Xi ) ≤ 2

i , pentru orice i = 1, . . . , n, adică

probabilitatea ca vi−1 ̸∈ hi este ≤ 2
i .

---

## Seminar 5 - Enunturi

_Sursa: `seminar5-geom-aa.md`._

Algoritmi avansați - Seminar 5 (săpt. 9 și 10)

Mihai-Sorin Stupariu

1. Fie punctele A = (1, 2, 3), B = (4, 5, 6) ∈ R3.

a) Fie C = (a, 7, 8). Arătați că există a astfel ca punctele A, B, C să fie

coliniare și pentru a astfel determinat calculați raportul r(A, B, C).

b) Determinați punctul P astfel ca raportul r(A, P, B) = 1.

c) Dați exemplu de punct Q astfel ca r(A, B, Q) < 0 și r(A, Q, B) < 0.

2. Fie punctele P = (1, −1), Q = (3, 3).

a) Calculați valoarea determinantului care apare în testul de orientare pentru

muchia orientată

−→
P Q și punctul de testare O = (0, 0).

b) Fie Rα = (α, −α), unde α ∈ R. Determinați valorile lui α pentru care

punctul Rα este situat în dreapta muchiei orientate

−→
P Q.

3. Fie M = {P1, P2, . . . , P9}, unde P1 = (−2, 4), P2 = (−1, 1), P3 = (0, 1),
P4 = (2, 1), P5 = (4, 3), P6 = (5, 5), P7 = (6, 9), P8 = (8, 4), P9 = (10, 6).
Detaliați cum evoluează lista Li a vârfurilor care determină marginea inferioară
a frontierei acoperirii convexe a lui M, obținută pe parcursul Graham’s scan,
varianta Andrew. Justificați!

4. Dați un exemplu de mulțime M din planul R2 pentru care, la final, Li are
4 elemente, dar, pe parcursul algoritmului, numărul maxim de elemente al lui
Li este egal cu 6 (Li este lista vârfurilor care determină marginea inferioară
a frontierei acoperirii convexe a lui M, obținută pe parcursul Graham’s scan,
varianta Andrew). Justificați!

5. Discutați un algoritm bazat pe paradigma Divide et impera pentru determi-
narea acoperirii convexe. Analizați complexitatea-timp.

1

---

## Seminar 5 - Solutii

_Sursa: `seminar5-sol-geom-aa.md`._

Algoritmi avansați - Seminar 5 (săpt. 9 și 10)

Mihai-Sorin Stupariu

1. Fie punctele A = (1, 2, 3), B = (4, 5, 6) ∈ R3.

a) Fie C = (a, 7, 8). Arătați că există a astfel ca punctele A, B, C să fie

coliniare și pentru a astfel determinat calculați raportul r(A, B, C).

b) Determinați punctul P astfel ca raportul r(A, P, B) = 1.

c) Dați exemplu de punct Q astfel ca r(A, B, Q) < 0 și r(A, Q, B) < 0.

Soluție.

a) Condiția de coliniaritate a punctelor A, B, C este echivalentă cu colinia-

ritatea vectorilor

−→
AB și

−→
BC. Au loc relațiile:

−→
AB= B − A = (3, 3, 3),

−→
BC= (a − 4, 2, 2).

Vectorii dați sunt proporționali dacă și numai dacă a − 4 = 2, deci a = 6.
De fapt, dreapta AB este direcționată de vectorul (1, 1, 1) (și de orice vector
proporțional cu acesta).
În acest caz, avem

−→
AB= B − A = (3, 3, 3),

−→
BC= (2, 2, 2), deci

−→
AB=

−→
BC,

3
2

adică r(A, B, C) = 3

relația

−→
AB= r

−→
BC).

2 (raportul r(A, B, C) este acel scalar r pentru care are loc

b) Condiția r(A, P, B) = 1 este echivalentă cu

2 ).

verifică această condiție este mijlocul segmentului [AB], deci P = 1
2 , 7
( 5

2 , 9
c) Semnele rapoartelor indică faptul că (i) B nu este între A și Q; (ii) Q nu
este între A și B. Trebuie deci ca A să fie situat între Q și B. Un astfel de
punct este Q = (0, 1, 2) (l-am ales ca fiind A − (1, 1, 1)). Au loc relațiile

−→
AP =

−→
P B. Punctul P care
2 B =

2 A + 1

−→
AB= (3, 3, 3),

−→
BQ= (−4, −4, −4),

r(A, B, Q) = −

−→
AQ= (−1, −1, −1),

−→
QB= (4, 4, 4),

r(A, Q, B) = −

3
4

1
4

,

,

deci sunt verificate cerințele din enunț.

1

2. Fie punctele P = (1, −1), Q = (3, 3).

a) Calculați valoarea determinantului care apare în testul de orientare pentru

muchia orientată

−→
P Q și punctul de testare O = (0, 0).

b) Fie Rα = (α, −α), unde α ∈ R. Determinați valorile lui α pentru care

−→
P Q.

punctul Rα este situat în dreapta muchiei orientate

Soluție.

a) Conform teoriei,

∆(P, Q, R) =

|
|
|
|
|
|

1
p1
p2

1
q1
q2

1
r1
r2

|
|
|
|
|
|

.

În exemplu avem:

∆(P, Q, R) =

|
|
|
|
|
|

1
1
−1

1
3
3

1
0
0

|
|
|
|
|
|

= 6 (dezvoltare după ultima coloană).

Se poate verifica și pe un desen că O este la stânga muchiei orientate

−→
P Q.

b) Calculăm, pentru un α, valoarea ∆(P, Q, Rα):

∆(P, Q, Rα) =

|
|
|
|
|
|

1
1
−1

1
1
3
α
3 −α

|
|
|
|
|
|

= 6(1 − α).

−→
Punctul Rα este situat în dreapta muchiei orientate
P Q ⇔ ∆(P, Q, Rα) < 0
⇔ α > 1. Acest lucru poate fi verificat și pe desen, punctul Rα este variabil pe
cea de-a doua bisectoare (de ecuație x + y = 0), iar pentru α > 1 acest punct

−→
P Q.

este situat în dreapta muchiei orientate

2

3. Fie M = {P1, P2, . . . , P9}, unde P1 = (−5, 0), P2 = (−4, −3), P3 =
(−3, −3), P4 = (−1, −3), P5 = (1, −1), P6 = (2, 1), P7 = (3, 5), P8 = (5, 0).
Detaliați cum evoluează lista Li a vârfurilor care determină marginea inferioară
a frontierei acoperirii convexe a lui M, obținută pe parcursul Graham’s scan,
varianta Andrew.

Soluție.

P7

P6

P5

P8

P1

P2

P3

P4

Lista Li evoluează astfel:
P1P2
P1P2P3
P1P2P3P4 // este eliminat P3, deoarece P2, P3, P4 coliniare (nu viraj la stânga)
P1P2P4
P1P2P4P5
P1P2P4P5P6
P1P2P4P5P6P7
P1P2P4P5P6P7P8 // punctele P7, P6, P5 sunt eliminate în această ordine
P1P2P4P8 // lista finală (Li) a vârfurilor care determină marginea inferioară

3

4. Dați un exemplu de mulțime M din planul R2 pentru care, la final, Li are
3 elemente, dar, pe parcursul algoritmului, numărul maxim de elemente al lui
Li este egal cu 6 (Li este lista vârfurilor care determină marginea inferioară
a frontierei acoperirii convexe a lui M, obținută pe parcursul Graham’s scan,
varianta Andrew). Justificați!

Soluție.

P1

P2

P7

P3

P8

P6

P5

P9

P4

Lista Li are la final 3 elemente (P1, P4, P9).
Numărul maxim de elemente este 6: P1P4P5P6P7P8 (la adăugarea lui P8 în

listă).

Obs. Numărul maxim de elemente după verificări ale virajelor este 5:

P1P4P5P6P7.

4

5. Discutați un algoritm bazat pe paradigma Divide et impera pentru determi-
narea acoperirii convexe. Analizați complexitatea-timp.

Soluție. Complexitatea-timp este O(n log n). O descriere a algoritmului și

a analizei complexității poate fi găsită în survey-ul [Lee & Preparata, 1984].

5

---

## Seminar 6 - Enunturi

_Sursa: `seminar6-geom-aa.md`._

Algoritmi avansați - Seminar 6 (săpt. 11 și 12)

Mihai-Sorin Stupariu

1. Fie mulțimea P = {P1, P2, . . . , P7}, unde P1 = (0, 0), P2 = (1, 2), P3 =
(2, 1), P4 = (3, 0), P5 = (5, 0), P6 = (2, −3), P7 = (5, −2), P8 = (3.5, −2).
Indicați testele care trebuie făcute pentru a găsi succesorul lui P1 atunci când
aplicăm Jarvis’ march pentru a determina marginea inferioară a acoperirii con-
vexe a lui P, parcursă în sens trigonometric (drept pivot inițial va fi considerat
P2).

2. Aplicați metoda din demonstrația teoremei galeriei de artă, indicând o posi-
bilă amplasare a camerelor de supraveghere în cazul poligonului P0P1P2 . . . P12,
unde P0 = (0, −4), P1 = (5, −6), P2 = (7, −4), P3 = (5, −2), P4 = (5, 2), P5 =
(7, 4), P6 = (7, 6) iar punctele P7, . . . , P12 sunt respectiv simetricele punctelor
P6, . . . , P1 față de axa Oy.

3. Fie poligonul P = (P1P2P3P4P5P6), unde P1 = (5, 0), P2 = (3, 2), P3 =
(−1, 2), P4 = (−3, 0), P5 = (−1, −2), P6 = (3, −2). Arătați că Teorema Galeriei
de Artă poate fi aplicată în două moduri diferite, așa încât, aplicând metoda
din teoremă și mecanismul de 3-colorare, în prima variantă să fie suficientă o
singură cameră, iar în cea de-a doua variantă să fie necesare și suficiente două
camere pentru supravegeherea unei galerii având forma poligonului P.

4. Dați exemplu de poligon cu 6 vârfuri care să aibă atât vârfuri convexe, cât
și concave și toate să fie principale.

5. Fie M = {Ai | i = 0, . . . , 50} ∪ {Bi | i = 0, . . . , 40} ∪ {Ci | i = 0, . . . , 30}, dată
de punctele Ai = (i + 10, 0), i = 0, 1, . . . , 50, Bi = (0, i + 30), i = 0, 1, . . . , 40,
Ci = (−i, −i), i = 0, 1, . . . , 30. Determinați numărul de triunghiuri și numărul
de muchii ale unei triangulări a lui M.

6. Dați un exemplu de mulțime din R2 care să admită o triangulare având 6
triunghiuri și 11 muchii.

7. În R2 fie punctele P1 = (1, 7), P2 = (5, 7), P3 = (7, 5), P4 = (1, 3), P5 =
(5, 3), P6 = (α − 1, 5), cu α ∈ R. Discutați, în funcție de α, numărul de muchii
ale unei triangulări asociate mulțimii {P1, P2, P3, P4, P5, P6}.

8. Fie G un graf planar conex, v numărul de noduri, m numărul de muchii,
f numărul de fețe. Se presupune că fiecare vârf are gradul ≥ 3. Demonstrați
inegalitățile

v ≤ 2

3 m,
m ≤ 3f − 6,

v ≤ 2f − 4,

m ≤ 3v − 6
f ≤ 2
3 m
f ≤ 2v − 4

Dați exemplu de grafuri în care au loc egalități în relațiile de mai sus.

1

---

## Seminar 6 - Solutii

_Sursa: `seminar6-sol-geom-aa.md`._

Algoritmi avansați - Seminar 6 (săpt. 11 și 12)

Mihai-Sorin Stupariu

1. Fie mulțimea P = {P1, P2, . . . , P7, P8}, unde P1 = (0, 0), P2 = (1, 2),
P3 = (2, 1), P4 = (3, 0), P5 = (5, 0), P6 = (2, −3), P7 = (5, −2), P8 = (3.5, −2).
Indicați testele care trebuie făcute pentru a găsi succesorul lui P1 atunci când
aplicăm Jarvis’ march pentru a determina marginea inferioară a acoperirii con-
vexe a lui P, parcursă în sens trigonometric (drept pivot inițial va fi considerat
P2).

Soluție.

P2

P3

P1

P4

P5

P8

P7

P6

Pentru a găsi succesorul lui P1 este adăugat pivotul P2 (S cu notația din

1

suportul de curs). Punctele sunt apoi testate, iar dacă un punct P este la
dreapta muchiei orientate P1S, punctul P devine noul pivot.
Punctul P3: este în dreapta muchiei P1P2, deci pivotul P2 este înlocuit cu P3.
Punctul P4: este în dreapta muchiei P1P3, deci pivotul P3 este înlocuit cu P4.
Punctul P5: nu este în dreapta muchiei P1P4, deci pivotul P4 rămâne.
Punctul P6: este în dreapta muchiei P1P4, deci pivotul P4 este înlocuit cu P6.
Punctul P7: nu este în dreapta muchiei P1P6, deci pivotul P6 rămâne.
Punctul P8: nu este în dreapta muchiei P1P6, deci pivotul P6 rămâne.

Au fost parcurse toate punctele. Ultimul pivot (P6) este succesorul lui P1 în
parcurgerea frontierei acoperirii convexe a mulțimii date în sens trigonometric.

2. Aplicați metoda din demonstrația teoremei galeriei de artă, indicând o posi-
bilă amplasare a camerelor de supraveghere în cazul poligonului P0P1P2 . . . P12,
unde P0 = (0, −4), P1 = (5, −6), P2 = (7, −4), P3 = (5, −2), P4 = (5, 2), P5 =
(7, 4), P6 = (7, 6) iar punctele P7, . . . , P12 sunt respectiv simetricele punctelor
P6, . . . , P1 față de axa Oy.

Soluție. În figură sunt reprezentate o posibilă triangulare și 3-colorarea asociată
- există și alte variante corecte.

P6

P5

P2

P4

P3

P1

P7

P8

P9

P10

P11

P0

P12

2

3. Fie poligonul P = (P1P2P3P4P5P6), unde P1 = (5, 0), P2 = (3, 2), P3 =
(−1, 2), P4 = (−3, 0), P5 = (−1, −2), P6 = (3, −2). Arătați că Teorema Gale-
riei de Artă poate fi aplicată în două moduri diferite, așa încât, aplicând metoda
din teoremă și mecanismul de 3-colorare, în prima variantă să fie suficientă o
singură cameră, iar în cea de-a doua variantă să fie necesare și suficiente două
camere pentru supravegeherea unei galerii având forma poligonului P.

Soluție. Poligonul este un hexagon convex, deci pentru triangularea sa vor fi
folosite 3·6−6−3 = 9 muchii. Aceasta înseamnă că vom trasa 3 diagonale. Sunt
posibile două situații: (a) cele trei diagonale au un vârf comun; (b) nu există
un vârf comun al celor trei diagonale (acest lucru se poate demonstra trasând
una dintre diagonale și apoi raționând inductiv - este esențial că poligonul este
un hexagon convex). În cazul (a) este suficientă o cameră, iar în cazul (b)
3-colorarea indică utilizarea a două camere.

(a)

(b)

4. Dați exemplu de poligon cu 6 vârfuri care să aibă atât vârfuri convexe, cât
și concave și toate să fie principale.

Soluție. În figură este desenat un poligon cu 4 vârfuri convexe și 2 vârfuri
concave. Pot fi luate în considerare și alte variante (de exemplu cu un singur
vârf concav, cu doar 3 vârfuri convexe, etc.).

A

F

C

D

B

E

3

5. Fie M = {Ai | i = 0, . . . , 50} ∪ {Bi | i = 0, . . . , 40} ∪ {Ci | i = 0, . . . , 30}, dată
de punctele Ai = (i + 10, 0), i = 0, 1, . . . , 50, Bi = (0, i + 30), i = 0, 1, . . . , 40,
Ci = (−i, −i), i = 0, 1, . . . , 30. Determinați numărul de triunghiuri și numărul
de muchii ale unei triangulări a lui M.

Soluție. Trebuie stabilite mai întâi numărul de puncte n și numărul de puncte
de pe frontiera acoperirii convexe k (atenție la numărarea punctelor, nu trebuie
numărat un punct de două ori...). Pe o schiță se observă că sunt în total
123 de puncte (punctele din mulțimile {Ai | i = 0, . . . , 50}, {Bi | i = 0, . . . , 40},
respectiv {Ci | i = 0, . . . , 30} sunt diferite între ele). Obținem n = 123, k = 3,
apoi aplicăm formulele pentru determinarea numărului de triunghiuri, respectiv
a numărului de muchii.

nt = 2n − k − 2 = 241,

nm = 3n − k − 3 = 343.

6. Dați un exemplu de mulțime din R2 care să admită o triangulare având 6
triunghiuri și 11 muchii.

Soluție. Fie n numărul de puncte ale unei astfel de mulțimi și k numărul de
puncte de pe frontiera acoperirii convexe. Au loc relațiile

{ 2n − k − 2 = 6
3n − k − 3 = 11

Rezolvând acest sistem obținem n = 6, k = 4, deci o astfel de mulțime are 6
puncte, din care 4 sunt situate pe frontiera acoperirii convexe.
Un posibil exemplu: {(0, 0), (5, 0), (5, 3), (0, 3), (1, 1), (3, 1)}.

7. În R2 fie punctele P1 = (1, 7), P2 = (5, 7), P3 = (7, 5), P4 = (1, 3), P5 =
(5, 3), P6 = (α − 1, 5), cu α ∈ R. Discutați, în funcție de α, numărul de muchii
ale unei triangulări asociate mulțimii {P1, P2, P3, P4, P5, P6}.

Soluție. Trebuie analizată configurația punctelor P1, P2, . . . P6 și determinate
numărul n de puncte și numărul k de puncte de pe frontiera acoperirii convexe.
Punctele P1P2P3P4P5 determină un pentagon convex. Punctul P6 descrie o

dreaptă paralelă cu Ox care trece prin punctul P3.

• Pentru α − 1 ≤ 1, adică α ∈ (−∞, 2] punctul P6 este situat în exteriorul
sau pe laturile pentagonului P1P2P3P4P5. Avem n = 6, k = 6, deci 4 fețe
și 9 muchii.

• Pentru α − 1 > 1 și α − 1 < 7, adică α ∈ (2, 8) punctul P6 este situat în
interiorul pentagonului P1P2P3P4P5. Avem n = 6, k = 5, deci 5 fețe și 10
muchii.

• Pentru α − 1 = 7, adică α ∈ {8} punctul P6 coincide cu P3. Avem

n = 5, k = 5, deci 3 fețe și 7 muchii.

• Pentru α − 1 > 7, adică α ∈ (8, ∞) punctul P6 este situat în exteriorul
pentagonului P1P2P3P4P5. Avem n = 6, k = 6, deci 4 fețe și 9 muchii.

4

8. Fie G un graf planar conex, v numărul de noduri, m numărul de muchii,
f numărul de fețe. Se presupune că fiecare vârf are gradul ≥ 3. Demonstrați
inegalitățile

v ≤ 2

3 m,
m ≤ 3f − 6,

v ≤ 2f − 4,

m ≤ 3v − 6
f ≤ 2
3 m
f ≤ 2v − 4

Dați exemplu de grafuri în care au loc egalități în relațiile de mai sus.

5

---

## Model de subiect - Enunt, barem si rezolvari

_Sursa: `model-subiect-geom-aa.md`._

Algoritmi Avansat, i 2026 - Algoritmi geometrici
FMI, UniBuc, Anul II

Timp de lucru: 40 de minute Punctaj total: 60 de puncte
Instruct, iuni: Examen cu cursurile pe masă. Grilele (1-16) au un singur răspuns
corect. Întrebările deschise (17-24) cer justificare concisă.

1. (C8) (2p) Fie punctele A = (1, 2, 3), B = (4, 5, 6) ∈ R3. Punctul P pentru care
avem r(A, P, B) = 1 este
( 5
2, 9
2, 7
2).
(5, 7, 9).
(7, 8, 9).

(a)
(b)
(c)
(d) Nu există P cu această proprietate.

2. (C8) (2p) Considerăm următoarele propoziții:
(i) Graham’s scan are complexitatea-timp O(n log n)
(ii) Jarvis’ march foloses,te paradigma dreptei de baleiere orizontale
(iii) Graham’s scan se bazează pe sortarea punctelor
(iv) Există mulțimi de puncte pentru care complexitatea-timp a Jarvis’ march este
mai bună decât cea a Graham’s scan.
Selectați asocierea corectă între aceste propoziții și valoarea lor de adevăr
(A=adevărat, F=fals):

(a)
(b)
(c)
(d)

(i)-A, (ii)-A, (iii)-A, (iv)-A.
(i)-F, (ii)-F, (iii)-F, (iv)-F.
(i)-A, (ii)-F, (iii)-A, (iv)-A.
(i)-A, (ii)-F, (iii)-F, (iv)-A.

3. (C8) (2p) Fie mulțimea P = {P1, P2, . . . , P8}, unde P1 = (0, 0), P2 = (1, 2),
P3 = (2, 1), P4 = (3, 0), P5 = (5, 0), P6 = (2, −3), P7 = (5, −2), P8 = (3.5, −2).
Aplicăm Jarvis’ march pentru a determina frontiera acoperirii convexe a lui P,
parcursă în sens trigonometric. Pentru a găsi succesorul lui P1 (cel mai din stânga
punct), procesăm punctele în ordinea citirii lor (adică P2, P3, P4, etc.) Câte viraje
la dreapta sunt înregistrate până la găsirea sucesorului lui P1?

(a) 6.
(b) 3.
(c) 8.
(d) 0.

4. (C9) (2p) Fie P un poligon cu n vârfuri. Care este complexitatea-timp pentru
a stabili natura vârfurilor lui P folosind criteriul vârfuri convexe / vârfuri concave?

(a) O(log n).

1

(b) O(n).
(c) O(n log n).
(d) O(n2)

5. (C9) (2p) În ce context este utilizat graful dual asociat unei triangulări?

(a) Pentru a calcula numărul fețelor triangulării.
(b) Pentru a demonstra existent,a triangulării.
(c) La algorimtul Ear clipping.
(d) Pentru a justifica existent,a unei 3-colorări.

6. (C9) (2p) Fie poligonul y-monoton P = ABCDEF G, unde A = (6, 8), B =
(7, 6), C = (8, 5), D = (10, 4), E = (7, 2), F = (6, −1), G = (3, 2). Se aplică
pentru P algoritmul de triangulare a poligoanelor monotone în timp liniar. Indicați
ce vârfuri corespund cazurilor 1, 2a, respectiv 2b.

(a) 1: G, 2a: E, 2b: B, C, D.
(b) 1: E, 2a: G, 2b: B, C, D.
(c) 1: G, 2a: B, C, D, 2b: E.
(d) Poligonul nu este y-monoton.

(C10) (2p) Fie punctele P1 = (1, 7), P2 = (5, 7), P3 = (7, 5), P4 = (1, 3),
7.
P5 = (5, 3), P6 = (α − 1, 5), cu α ∈ R. Pentru ce valori ale lui α triangularea
asociată mulțimii {P1, P2, . . . , P7} are 5 fețe și 10 muchii?

(a) α ∈ (−∞, 2]
(b) α ∈ (2, 8)
(c) α = 8
(d) α ∈ (8, ∞)

8. (C10) (2p) Care este elementul geometric utilizat pentru a compara triangulările
unei mulțimi de puncte fixate?

(a) Lungimile laturilor triunghiurilor.
(b) Ariile triunghiurilor.
(c) Unghiurile triunghiurilor.
(d) Lungimile medianelor triunghiurilor.

9. (C11) (2p) În algoritmul lui Fortune avem un eveniment de tip sit. Care este
complexitatea-timp pentru a localiza frunza care va fi modificată în statutul T ?

(a) O(n2).
(b) O(n).
(c) O(n log n).
(d) O(log n).

2

10. (C11) (2p) În care din situațiile de mai jos diagrama Voronoi asociată unei
mulțimi M are exact 5 semidrepte?

(a) M este o mulțime formată din 5 puncte coliniare.
(b) M este o mulțime formată din 15 puncte, dintre care exact 5 pe frontiera

acoperirii convexe.

(c) M este o mulțime formată din 15 puncte, dintre care exact 15 pe frontiera

acoperirii convexe.

(d) M este o mulțime formată din 15 puncte, dintre care exact 10 pe frontiera

acoperirii convexe.

11. (C11) (2p) Considerăm toate mulțimile cu cinci puncte din R2 pentru care
diagrama Voronoi asociată are exact cinci semidrepte. Care este mulțimea tuturor
valorilor posibile ale numărului de vârfuri corespunzătoare acestor diagrame?

(a) {1}.
(b) {1, 2}.
(c) {1, 2, 3, 4, 5}.
(d) {1, 2, 3}.

12. (C12) (2p) Fie ABCD un patrulater cu vârfurile A = (xA, yA), B = (xB, yB),
C = (xC, yC), D = (xD, yD). Complexitatea algebrică a calculelor pentru: (i)
a stabili dacă patrulaterul este paralelogram, (ii) a stabili dacă patrulaterul este
dreptunghi?

(a)
(b)
(c)
(d)

(i): polinom de gradul I, (ii): polinom de gradul II.
(i): polinom de gradul II, (ii): raport de polinoame de gradul II.
(i): polinom de gradul I, (ii): raport de polinoame de gradul II.
(i): polinom de gradul II, (ii): polinom de gradul II.

13. (C12) (2p) Sunt folosite notațiile din algoritmul de intersecții de segmente.
Fie o mulțime de n segmente și p un element din coada de evenimente. Care este
numărul minim, respectiv numărul maxim de elemente posibil (din punct de vedere
teoretic) pentru mulțimea U (p) ∪ D(p) ∪ Int(p)? ?

(a) Minim 0, maxim n2.
(b) Minim 1, maxim n.
(c) Minim 1, maxim n2.
(d) Minim 0, maxim n.

14. (C13) (2p) Fie punctul p = (4, −2). Cu notațiile din cursul 13, care este p∗?

(a) Dreapta y = 4x + 2.
(b) Punctul (4, 2).
(c) Punctul (−4, 2).
(d) Dreapta y = 4x − 2.

3

15. (C14) (2p) Fie H = {H1, H2, H3, H4}, unde H1 : −y − 2 ≤ 0, H2 : −x − 2 ≤
0, H3 : x ≤ 7, H4 : x + y ≤ 10. Pentru ce funcție obiectiv f problema de programare
liniară dată de H și f admite un unic punct de maxim?

(a) f (x, y) = x + y.
(b) f (x, y) = x.
(c) f (x, y) = y.
(d) f (x, y) = −y.

16. (C14) (2p) Considerăm algoritmul LPMARG2D de rezolvare a problemelor
de programare liniară. Care exte complexitatea-timp de rulare a algoritmului pentru
o mulțime de n semiplane dacă pentru fiecare semiplan se trece pe la pasul 5?

(a) O(n2).
(b) O(n log n).
(c) O(1).
(d) O(n).

17. (C9) (3.5p) Triangularea poligoanelor - Teorema Galeriei de Artă
Aplicați metoda din demonstrația teoremei galeriei de artă, indicând o posibilă
amplasare a camerelor de supraveghere în cazul poligonului P0P1P2 . . . P12, unde
P0 = (0, −4), P1 = (5, −6), P2 = (7, −4), P3 = (5, −2), P4 = (5, 2), P5 = (7, 4),
P6 = (7, 6) iar punctele P7, . . . , P12 sunt respectiv simetricele punctelor P6, . . . , P1
față de axa Oy. (Realizați un desen și indicați, pe desen, amplasarea camerelor).

18. (C10) (3.5p) Triangularea mulțimilor de puncte
Realizați un desen cu o mulțime care să admită o triangulare având 6 triunghiuri și
11 muchii.

4

19. (C11) (3.5p) Diagrame Voronoi
Despre algoritmul lui Fortune: ce dificultate are aplicarea directă a paradigmei
dreptei de baleiere (line sweep), ce structură auxiliară este utilizată pentru a adapta
paradigma și care este relevant,a acestei structuri auxiliare?

20. (C11) (3.5p) DCEL
Considerăm conceptul de Doubly Connected Edge List. Indicați două diferent,e între
frontiere exterioare și frontiere interioare.

21. (C12) (3.5p) Subdiviziuni planare
Fie ABCD un pătrat și M, N, P, Q mijloacele laturilor [AB], [BC], [CD], respec-
tiv [DA]. Considerăm subdiviziunile planare S1 și S2 asociate celor două pătrate.
Indicați câte vârfuri, semimuchii și fețe va avea structura DCEL asociată overaly-ului
O(S1, S2).

22. (C13) (3.5p) Dualitate
Determinați duala următoarei configurații: Fie patru drepte care trec printr-un ace-
lași punct M . Se aleg două dintre ele; pe fiecare din aceste două drepte se consideră
câte un punct diferit de M și se consideră dreapta determinată de cele două puncte.
Desenați ambele configurații.

5

23. (C11) (3.5p) Dualitate
De ce în definirea conceptului de dualitate sunt omise dreptele verticale?

24. (C8-C14) (3.5p) Care este complexitatea algebrică a testului de orientare?
Indicați trei teme diferite abordate la curs în care este folosit testul de orientare.
Pentru fiecare dintre ele indicați un algoritm și, pe scurt, contextul utilizării.

6

Barem și rezolvări / indicat, ii - Algoritmi geometrici

Întrebări de tip grilă

1. a (v. Seminar 5, problema 1)

2. c

3. b (v. Seminar 6, problema 1)

4. b

5. d

6. a

7. b (v. Seminar 6, problema 7)

8. c

9. d

10. b

11. d (v. Seminar 7, problema 2)

12. a

13. b

14. a

15. c

16. d

Explicat, ii / indicat, ii întrebări deschise

17. Triangularea poligoanelor - Teorema Galeriei de Artă

Seminar 6, problema 2

18. Triangularea mult, imilor de puncte

Seminar 6, problema 6

19. Diagrame Voronoi

Dificultate: la întâlnirea unui vârf al diagramei nu au fost întâlnite toate siturile
care îl determină. Structura auxiliară: curba parabolică. Relevant, ă: ceea
ce este situat deasupra acestei curbe nu mai poate fi influent,at de evenimentele

7

nedetectate.

20. DCEL

1) Orice față are exact o frontieră exterioară, numărul de frontiere interioare depinde
de geometria feței. 2) Virajele în vârfurile convexe sunt la stânga pentru frontierele
exterioare, respectiv la dreapta pentru cele interioare.

21. Subdiviziuni planare.

8 vârfuri, 24 de semimuchii și 6 fețe

22. Dualitate.

Seminar 7, problema 4 (ii)

23. Dualitate.

Corespondent,a de dualitate asociază dreptei d de ecuație y = mx + n punctul
(m, −n), panta dreptei d devenind abscisa punctului dual. Pentru dreptele verticale
panta nu este definită (intuitiv este infinită) și construcția nu poate fi realizată.

24. Sinteză (Testul de orientare)

Complexitatea algebrică este dată de polinom de gradul II.
1) Acoperiri convexe / Graham’s scan / Punctele care conduc la viraje la dreapta
sunt eliminate din listă.
2) Triangularea poligoanelor / Algoritmul de triangulare a poligoanelor monotone /
Stabilirea cazurilor.
3) Triangularea multțimilor de puncte / Algoritmul de determinare a triangulărilor
legale / Condiția de conciclicitate.

8
