Algoritmi avansa¸ti
C9 - Triangularea poligoanelor
Mihai-Sorin Stupariu
Sem. al II-lea, 2025 - 2026
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 1/36

Problemagalerieideart˘a
| Problema     | galeriei de    | art˘a            |          |
| ------------ | -------------- | ---------------- | -------- |
| Algoritmi    | de triangulare | - “Ear clipping” |          |
| Triangularea | poligoanelor   | - un algoritm    | eficient |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 2/36

Problemagalerieideart˘a
| Supravegherea | unei galerii            | de art˘a     |
| ------------- | ----------------------- | ------------ |
| Camera        | din P poate supraveghea | A, dar nu B. |
A(cid:114)
(cid:74)(cid:74)
|     | (cid:0) | (cid:74) |
| --- | ------- | -------- |
(cid:0)
|     | (cid:0)(cid:0) | (cid:74) |
| --- | -------------- | -------- |
(cid:74)
(cid:74)
(cid:74)(cid:114)
P
(cid:114)B
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 2/36

▶ O camer˘a video (vizibilitate 3600) poate fi identificat˘a cu un punct
din interiorul lui P; ea poate supraveghea acele puncte cu care poate
fi unit˘a printr-un segment inclusˆın interiorul poligonului.
▶
Problema galeriei de art˘a: cˆate camere video sunt necesare pentru
a supraveghea o galerie de art˘a ¸si unde trebuie amplasate acestea?
Problemagalerieideart˘a
Formalizare
▶
O galerie de art˘a poate fi interpretat˘a (ˆın contextul acestei probleme)
ca un poligon P (adic˘a o linie poligonal˘a f˘ar˘a autointersec¸tii) avˆand n
vˆarfuri.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 3/36

▶
Problema galeriei de art˘a: cˆate camere video sunt necesare pentru
a supraveghea o galerie de art˘a ¸si unde trebuie amplasate acestea?
Problemagalerieideart˘a
Formalizare
▶
O galerie de art˘a poate fi interpretat˘a (ˆın contextul acestei probleme)
ca un poligon P (adic˘a o linie poligonal˘a f˘ar˘a autointersec¸tii) avˆand n
vˆarfuri.
▶ O camer˘a video (vizibilitate 3600) poate fi identificat˘a cu un punct
din interiorul lui P; ea poate supraveghea acele puncte cu care poate
fi unit˘a printr-un segment inclusˆın interiorul poligonului.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 3/36

Problemagalerieideart˘a
Formalizare
▶
O galerie de art˘a poate fi interpretat˘a (ˆın contextul acestei probleme)
ca un poligon P (adic˘a o linie poligonal˘a f˘ar˘a autointersec¸tii) avˆand n
vˆarfuri.
▶ O camer˘a video (vizibilitate 3600) poate fi identificat˘a cu un punct
din interiorul lui P; ea poate supraveghea acele puncte cu care poate
fi unit˘a printr-un segment inclusˆın interiorul poligonului.
▶
Problema galeriei de art˘a: cˆate camere video sunt necesare pentru
a supraveghea o galerie de art˘a ¸si unde trebuie amplasate acestea?
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 3/36

Problemagalerieideart˘a
Comentarii
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 4/36

▶ Pentru a supraveghea un spa¸tiu avˆand forma unui poligon convex,
|     |     |     |     | este suficient˘a | o singur˘a camer˘a. |     |     |
| --- | --- | --- | --- | ---------------- | ------------------- | --- | --- |
▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma
este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.
|     |     |     |     | ▶ Principiu: | Poligonul considerat: | descompusˆın | triunghiuri |
| --- | --- | --- | --- | ------------ | --------------------- | ------------ | ----------- |
(triangulare).
Problemagalerieideart˘a
| Num˘arul | de camere | vs. forma | poligonului |     |     |     |     |
| -------- | --------- | --------- | ----------- | --- | --- | --- | --- |
▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru
supraveghereˆın func¸tie de n (sau controlarea acestuia de c˘atre n).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 5/36

▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma
este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.
|     |     |     |     | ▶ Principiu: | Poligonul considerat: | descompusˆın | triunghiuri |
| --- | --- | --- | --- | ------------ | --------------------- | ------------ | ----------- |
(triangulare).
Problemagalerieideart˘a
| Num˘arul | de camere | vs. forma | poligonului |     |     |     |     |
| -------- | --------- | --------- | ----------- | --- | --- | --- | --- |
▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru
supraveghereˆın func¸tie de n (sau controlarea acestuia de c˘atre n).
▶ Pentru a supraveghea un spa¸tiu avˆand forma unui poligon convex,
| este | suficient˘a o | singur˘a camer˘a. |     |     |     |     |     |
| ---- | ------------- | ----------------- | --- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 5/36

|     |     |     |     | ▶ Principiu: | Poligonul considerat: | descompusˆın | triunghiuri |
| --- | --- | --- | --- | ------------ | --------------------- | ------------ | ----------- |
(triangulare).
Problemagalerieideart˘a
| Num˘arul | de camere | vs. forma | poligonului |     |     |     |     |
| -------- | --------- | --------- | ----------- | --- | --- | --- | --- |
▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru
supraveghereˆın func¸tie de n (sau controlarea acestuia de c˘atre n).
▶ Pentru a supraveghea un spa¸tiu avˆand forma unui poligon convex,
| este | suficient˘a o | singur˘a camer˘a. |     |     |     |     |     |
| ---- | ------------- | ----------------- | --- | --- | --- | --- | --- |
▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma
este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 5/36

Problemagalerieideart˘a
| Num˘arul | de camere | vs. forma | poligonului |     |
| -------- | --------- | --------- | ----------- | --- |
▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru
supraveghereˆın func¸tie de n (sau controlarea acestuia de c˘atre n).
▶ Pentru a supraveghea un spa¸tiu avˆand forma unui poligon convex,
| este | suficient˘a o | singur˘a camer˘a. |     |     |
| ---- | ------------- | ----------------- | --- | --- |
▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma
este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.
| ▶ Principiu: | Poligonul | considerat: | descompusˆın | triunghiuri |
| ------------ | --------- | ----------- | ------------ | ----------- |
(triangulare).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 5/36

Problemagalerieideart˘a
Despre triangul˘ari
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 6/36

▶
(i) O diagonal˘a a lui P este un segment ce une¸ste dou˘a vˆarfuri ale
acestuia ¸si care este situatˆın interiorul lui P.
▶
(ii) O triangulare T a lui P este o descompunere a lui P ˆın
P
triunghiuri, dat˘a de o mul¸time maximal˘a de diagonale ce nu se
intersecteaz˘a.
Problemagalerieideart˘a
Defini¸tie formal˘a
▶
Fie P un poligon plan.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 7/36

▶
(ii) O triangulare T a lui P este o descompunere a lui P ˆın
P
triunghiuri, dat˘a de o mul¸time maximal˘a de diagonale ce nu se
intersecteaz˘a.
Problemagalerieideart˘a
Defini¸tie formal˘a
▶
Fie P un poligon plan.
▶
(i) O diagonal˘a a lui P este un segment ce une¸ste dou˘a vˆarfuri ale
acestuia ¸si care este situatˆın interiorul lui P.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 7/36

Problemagalerieideart˘a
Defini¸tie formal˘a
▶
Fie P un poligon plan.
▶
(i) O diagonal˘a a lui P este un segment ce une¸ste dou˘a vˆarfuri ale
acestuia ¸si care este situatˆın interiorul lui P.
▶
(ii) O triangulare T a lui P este o descompunere a lui P ˆın
P
triunghiuri, dat˘a de o mul¸time maximal˘a de diagonale ce nu se
intersecteaz˘a.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 7/36

▶
Teorem˘a. Orice poligon admite o triangulare. Orice triangulare a
|     |     |     | unui poligon | cu n vˆarfuri | con¸tine exact | n−2 triunghiuri. |
| --- | --- | --- | ------------ | ------------- | -------------- | ---------------- |
Problemagalerieideart˘a
Rezultate
| ▶ Lem˘a. Orice | poligon admite | o diagonal˘a. |     |     |     |     |
| -------------- | -------------- | ------------- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 8/36

Problemagalerieideart˘a
Rezultate
| ▶ Lem˘a. Orice | poligon | admite o diagonal˘a. |     |
| -------------- | ------- | -------------------- | --- |
▶
Teorem˘a. Orice poligon admite o triangulare. Orice triangulare a
| unui poligon | cu n vˆarfuri | con¸tine exact | n−2 triunghiuri. |
| ------------ | ------------- | -------------- | ---------------- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 8/36

▶
Dat˘a o pereche (P,T ) se consider˘a o 3-colorare a acesteia: fiec˘arui
P
vˆarfˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.
▶
Observa¸tie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersec¸tii o astfel
de colorare exist˘a, deoarece graful dual asociat perechii (P,T ) este
P
arbore.
Problemagalerieideart˘a
Rezolvarea problemei galeriei de art˘a
▶
Amplasarea camerelor se poate faceˆın vˆarfurile poligonului.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 9/36

▶
Observa¸tie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersec¸tii o astfel
de colorare exist˘a, deoarece graful dual asociat perechii (P,T ) este
P
arbore.
Problemagalerieideart˘a
Rezolvarea problemei galeriei de art˘a
▶
Amplasarea camerelor se poate faceˆın vˆarfurile poligonului.
▶
Dat˘a o pereche (P,T ) se consider˘a o 3-colorare a acesteia: fiec˘arui
P
vˆarfˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 9/36

Problemagalerieideart˘a
Rezolvarea problemei galeriei de art˘a
▶
Amplasarea camerelor se poate faceˆın vˆarfurile poligonului.
▶
Dat˘a o pereche (P,T ) se consider˘a o 3-colorare a acesteia: fiec˘arui
P
vˆarfˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.
▶
Observa¸tie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersec¸tii o astfel
de colorare exist˘a, deoarece graful dual asociat perechii (P,T ) este
P
arbore.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 9/36

Problemagalerieideart˘a
Rezolvarea problemei galeriei de art˘a
▶
Amplasarea camerelor se poate faceˆın vˆarfurile poligonului.
▶
Dat˘a o pereche (P,T ) se consider˘a o 3-colorare a acesteia: fiec˘arui
P
vˆarfˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.
▶
Observa¸tie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersec¸tii o astfel
de colorare exist˘a, deoarece graful dual asociat perechii (P,T ) este
P
arbore.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 10/36

▶
Despre Teorema Galeriei de Art˘a: J. O’Rourke, Art Gallery Theorems
and Algorithms; J. Urrutia, Art Gallery and Illumination Problems
▶
Despre num˘arul de culori utilizat: L. Erickson, S. LaValle, A
chromatic art gallery problem, Fekete et al., On the Chromatic Art
Gallery Problem
Problemagalerieideart˘a
Teorema galeriei de art˘a
▶
Teorem˘a. [Chv´atal, 1975; Fisk, 1978] Pentru un poligon cu n vˆarfuri,
(cid:104)n(cid:105)
camere sunt uneori necesare¸siˆıntotdeauna suficiente pentru ca
3
fiecare punct al poligonului s˘a fie vizibil din cel pu¸tin una din camere.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 11/36

▶
Despre num˘arul de culori utilizat: L. Erickson, S. LaValle, A
chromatic art gallery problem, Fekete et al., On the Chromatic Art
Gallery Problem
Problemagalerieideart˘a
Teorema galeriei de art˘a
▶
Teorem˘a. [Chv´atal, 1975; Fisk, 1978] Pentru un poligon cu n vˆarfuri,
(cid:104)n(cid:105)
camere sunt uneori necesare¸siˆıntotdeauna suficiente pentru ca
3
fiecare punct al poligonului s˘a fie vizibil din cel pu¸tin una din camere.
▶
Despre Teorema Galeriei de Art˘a: J. O’Rourke, Art Gallery Theorems
and Algorithms; J. Urrutia, Art Gallery and Illumination Problems
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 11/36

Problemagalerieideart˘a
Teorema galeriei de art˘a
▶
Teorem˘a. [Chv´atal, 1975; Fisk, 1978] Pentru un poligon cu n vˆarfuri,
(cid:104)n(cid:105)
camere sunt uneori necesare¸siˆıntotdeauna suficiente pentru ca
3
fiecare punct al poligonului s˘a fie vizibil din cel pu¸tin una din camere.
▶
Despre Teorema Galeriei de Art˘a: J. O’Rourke, Art Gallery Theorems
and Algorithms; J. Urrutia, Art Gallery and Illumination Problems
▶
Despre num˘arul de culori utilizat: L. Erickson, S. LaValle, A
chromatic art gallery problem, Fekete et al., On the Chromatic Art
Gallery Problem
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 11/36

Problemagalerieideart˘a
| Teorema   | galeriei  | de art˘a - justificare, | exemplu |
| --------- | --------- | ----------------------- | ------- |
| • “uneori | necesare” |                         |         |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 12/36

Not˘am cu n ,n ,n num˘arul de vˆarfuri colorate cu cele 3 culori, are
1 2 3
|     |     |     |     | loc rela¸tia | n +n +n | = n. |     |     |
| --- | --- | --- | --- | ------------ | ------- | ---- | --- | --- |
|     |     |     |     |              | 1 2     | 3    |     |     |
(cid:104)n(cid:105)
|     |     |     |     | Presupunem | prin absurd | ca nu sunt | suficiente | camere. Aceasta |
| --- | --- | --- | --- | ---------- | ----------- | ---------- | ---------- | --------------- |
3
|     |     |     |     | ˆınseamn˘a | c˘a:                |                 |            |                   |
| --- | --- | --- | --- | ---------- | ------------------- | --------------- | ---------- | ----------------- |
|     |     |     |     |            | (cid:104)n(cid:105) | n               |            |                   |
|     |     |     |     | n          | > ⇒                 | n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|     |     |     |     |            | 1                   | 1               |            |                   |
|     |     |     |     |            | 3                   | 3               |            |                   |
|     |     |     |     |            | (cid:104)n(cid:105) | n               |            |                   |
|     |     |     |     | n          | 2 > ⇒               | n 2 > (folosind | defini¸tia | p˘ar¸tiiˆıntregi) |
|     |     |     |     |            | 3                   | 3               |            |                   |
|     |     |     |     |            | (cid:104)n(cid:105) | n               |            |                   |
|     |     |     |     | n          | > ⇒                 | n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|     |     |     |     |            | 3                   | 3               |            |                   |
|     |     |     |     |            | 3                   | 3               |            |                   |
Adunˆand rela¸tiile ob¸tinute se ajunge la rela¸tia n 1 +n 2 +n 3 > n, ceea
(cid:104)n(cid:105)
ˆIn
ce reprezint˘a o contradic¸tie. concluzie, exist˘a i astfel ca n ≤ .
i 3
Problemagalerieideart˘a
| Teorema         | galeriei | de art˘a - justificare, | exemplu |     |     |     |     |     |
| --------------- | -------- | ----------------------- | ------- | --- | --- | --- | --- | --- |
| • “ˆıntotdeauna |          | suficiente”             |         |     |     |     |     |     |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 13/36

(cid:104)n(cid:105)
|     |     |     |     | Presupunem | prin absurd | ca nu sunt | suficiente | camere. Aceasta |
| --- | --- | --- | --- | ---------- | ----------- | ---------- | ---------- | --------------- |
3
|     |     |     |     | ˆınseamn˘a | c˘a:                |                 |            |                   |
| --- | --- | --- | --- | ---------- | ------------------- | --------------- | ---------- | ----------------- |
|     |     |     |     |            | (cid:104)n(cid:105) | n               |            |                   |
|     |     |     |     | n          | > ⇒                 | n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|     |     |     |     |            | 1                   | 1               |            |                   |
|     |     |     |     |            | 3                   | 3               |            |                   |
|     |     |     |     |            | (cid:104)n(cid:105) | n               |            |                   |
|     |     |     |     | n          | 2 > ⇒               | n 2 > (folosind | defini¸tia | p˘ar¸tiiˆıntregi) |
|     |     |     |     |            | 3                   | 3               |            |                   |
|     |     |     |     |            | (cid:104)n(cid:105) | n               |            |                   |
|     |     |     |     | n          | > ⇒                 | n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|     |     |     |     |            | 3                   | 3               |            |                   |
|     |     |     |     |            | 3                   | 3               |            |                   |
Adunˆand rela¸tiile ob¸tinute se ajunge la rela¸tia n 1 +n 2 +n 3 > n, ceea
(cid:104)n(cid:105)
ˆIn
ce reprezint˘a o contradic¸tie. concluzie, exist˘a i astfel ca n ≤ .
i 3
Problemagalerieideart˘a
| Teorema         | galeriei | de art˘a - justificare, | exemplu |     |     |     |     |     |
| --------------- | -------- | ----------------------- | ------- | --- | --- | --- | --- | --- |
| • “ˆıntotdeauna |          | suficiente”             |         |     |     |     |     |     |
Not˘am cu n ,n ,n num˘arul de vˆarfuri colorate cu cele 3 culori, are
|     | 1 2           | 3       |     |     |     |     |     |     |
| --- | ------------- | ------- | --- | --- | --- | --- | --- | --- |
| loc | rela¸tia n +n | +n = n. |     |     |     |     |     |     |
|     | 1             | 2 3     |     |     |     |     |     |     |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 13/36

|     |     |     |     |     | (cid:104)n(cid:105) | n                 |                              |
| --- | --- | --- | --- | --- | ------------------- | ----------------- | ---------------------------- |
|     |     |     |     |     | n >                 | ⇒ n > (folosind   | defini¸tia p˘ar¸tiiˆıntregi) |
|     |     |     |     |     | 1                   | 1                 |                              |
|     |     |     |     |     | 3                   | 3                 |                              |
|     |     |     |     |     | (cid:104)n(cid:105) | n                 |                              |
|     |     |     |     |     | n 2 >               | ⇒ n 2 > (folosind | defini¸tia p˘ar¸tiiˆıntregi) |
|     |     |     |     |     | 3                   | 3                 |                              |
|     |     |     |     |     | (cid:104)n(cid:105) | n                 |                              |
|     |     |     |     |     | n >                 | ⇒ n > (folosind   | defini¸tia p˘ar¸tiiˆıntregi) |
|     |     |     |     |     | 3                   | 3                 |                              |
|     |     |     |     |     | 3                   | 3                 |                              |
Adunˆand rela¸tiile ob¸tinute se ajunge la rela¸tia n 1 +n 2 +n 3 > n, ceea
(cid:104)n(cid:105)
ˆIn
ce reprezint˘a o contradic¸tie. concluzie, exist˘a i astfel ca n ≤ .
i 3
Problemagalerieideart˘a
| Teorema         | galeriei | de art˘a - justificare, | exemplu |     |     |     |     |
| --------------- | -------- | ----------------------- | ------- | --- | --- | --- | --- |
| • “ˆıntotdeauna |          | suficiente”             |         |     |     |     |     |
Not˘am cu n ,n ,n num˘arul de vˆarfuri colorate cu cele 3 culori, are
|     | 1 2           | 3       |     |     |     |     |     |
| --- | ------------- | ------- | --- | --- | --- | --- | --- |
| loc | rela¸tia n +n | +n = n. |     |     |     |     |     |
|     | 1             | 2 3     |     |     |     |     |     |
(cid:104)n(cid:105)
| Presupunem | prin | absurd ca nu sunt | suficiente | camere. Aceasta |     |     |     |
| ---------- | ---- | ----------------- | ---------- | --------------- | --- | --- | --- |
3
| ˆınseamn˘a | c˘a: |     |     |     |     |     |     |
| ---------- | ---- | --- | --- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 13/36

Adunˆand rela¸tiile ob¸tinute se ajunge la rela¸tia n 1 +n 2 +n 3 > n, ceea
(cid:104)n(cid:105)
ˆIn
ce reprezint˘a o contradic¸tie. concluzie, exist˘a i astfel ca n ≤ .
i 3
Problemagalerieideart˘a
| Teorema         | galeriei | de art˘a - justificare, | exemplu |     |
| --------------- | -------- | ----------------------- | ------- | --- |
| • “ˆıntotdeauna |          | suficiente”             |         |     |
Not˘am cu n ,n ,n num˘arul de vˆarfuri colorate cu cele 3 culori, are
|     | 1 2           | 3       |     |     |
| --- | ------------- | ------- | --- | --- |
| loc | rela¸tia n +n | +n = n. |     |     |
|     | 1             | 2 3     |     |     |
(cid:104)n(cid:105)
| Presupunem | prin | absurd ca nu sunt | suficiente | camere. Aceasta |
| ---------- | ---- | ----------------- | ---------- | --------------- |
3
| ˆınseamn˘a | c˘a:                |                   |            |                   |
| ---------- | ------------------- | ----------------- | ---------- | ----------------- |
|            | (cid:104)n(cid:105) | n                 |            |                   |
|            | n >                 | ⇒ n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|            | 1                   | 1                 |            |                   |
|            | 3                   | 3                 |            |                   |
|            | (cid:104)n(cid:105) | n                 |            |                   |
|            | n 2 >               | ⇒ n 2 > (folosind | defini¸tia | p˘ar¸tiiˆıntregi) |
|            | 3                   | 3                 |            |                   |
|            | (cid:104)n(cid:105) | n                 |            |                   |
|            | n >                 | ⇒ n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|            | 3                   | 3                 |            |                   |
|            | 3                   | 3                 |            |                   |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 13/36

Problemagalerieideart˘a
| Teorema         | galeriei | de art˘a - justificare, | exemplu |     |
| --------------- | -------- | ----------------------- | ------- | --- |
| • “ˆıntotdeauna |          | suficiente”             |         |     |
Not˘am cu n ,n ,n num˘arul de vˆarfuri colorate cu cele 3 culori, are
|     | 1 2           | 3       |     |     |
| --- | ------------- | ------- | --- | --- |
| loc | rela¸tia n +n | +n = n. |     |     |
|     | 1             | 2 3     |     |     |
(cid:104)n(cid:105)
| Presupunem | prin | absurd ca nu sunt | suficiente | camere. Aceasta |
| ---------- | ---- | ----------------- | ---------- | --------------- |
3
| ˆınseamn˘a | c˘a:                |                   |            |                   |
| ---------- | ------------------- | ----------------- | ---------- | ----------------- |
|            | (cid:104)n(cid:105) | n                 |            |                   |
|            | n >                 | ⇒ n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|            | 1                   | 1                 |            |                   |
|            | 3                   | 3                 |            |                   |
|            | (cid:104)n(cid:105) | n                 |            |                   |
|            | n 2 >               | ⇒ n 2 > (folosind | defini¸tia | p˘ar¸tiiˆıntregi) |
|            | 3                   | 3                 |            |                   |
|            | (cid:104)n(cid:105) | n                 |            |                   |
|            | n >                 | ⇒ n > (folosind   | defini¸tia | p˘ar¸tiiˆıntregi) |
|            | 3                   | 3                 |            |                   |
|            | 3                   | 3                 |            |                   |
Adunˆand rela¸tiile ob¸tinute se ajunge la rela¸tia n 1 +n 2 +n 3 > n, ceea
(cid:104)n(cid:105)
ˆIn
ce reprezint˘a o contradic¸tie. concluzie, exist˘a i astfel ca n ≤ .
i 3
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 13/36

Algoritmidetriangulare-“Earclipping”
| Triangularea | unui poligon | - intui¸tie |
| ------------ | ------------ | ----------- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 14/36

Algoritmidetriangulare-“Earclipping”
| Triangularea | unui poligon  | - algoritmul            | “Ear clipping” |
| ------------ | ------------- | ----------------------- | -------------- |
|              | Vˆarfuri care | pot fi selectate pentru | start.         |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 15/36

Algoritmidetriangulare-“Earclipping”
| Triangularea | unui poligon | - algoritmul | “Ear clipping” |
| ------------ | ------------ | ------------ | -------------- |
Ales un vˆarf, este considerat triunghiul determinat cu predecesorul¸si succesorul.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 16/36

Algoritmidetriangulare-“Earclipping”
| Triangularea | unui poligon | - algoritmul | “Ear clipping” |
| ------------ | ------------ | ------------ | -------------- |
Procedura continu˘a....
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 17/36

Algoritmidetriangulare-“Earclipping”
| Triangularea | unui poligon   | - algoritmul  | “Ear clipping” |
| ------------ | -------------- | ------------- | -------------- |
|              | ... se ob¸tine | o triangulare | a poligonului. |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 18/36

Algoritmidetriangulare-“Earclipping”
| Clasificarea | vˆarfurilor | unui poligon     | - convexe/concave  |
| ------------ | ----------- | ---------------- | ------------------ |
|              | Vˆarfurile  | convexe (cerc) / | concave (p˘atrat). |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 19/36

Algoritmidetriangulare-“Earclipping”
Clasificarea vˆarfurilor unui poligon - principale/neprincipale
| Vˆarfurile principale | (verde) / neprincipale | (ro¸su). |
| --------------------- | ---------------------- | -------- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 20/36

Algoritmidetriangulare-“Earclipping”
| Clasificarea | vˆarfurilor | unui poligon |
| ------------ | ----------- | ------------ |
Patru tipuri de vˆarfuri.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 21/36

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     |     |     |     |     |     | i   |     | i−1 i+1 |
| --- | --- | --- | --- | --- | --- | --- | --- | ------- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
i−1 i i+1
- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
i i−1 i+1
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
|     |     |     |     |     | [Toussaint, | 1991]. |     |     |
| --- | --- | --- | --- | --- | ----------- | ------ | --- | --- |
▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
|     |     |     |     |     | Corolar. Orice | poligon admite | (cel pu¸tin) | o diagonal˘a. |
| --- | --- | --- | --- | --- | -------------- | -------------- | ------------ | ------------- |
▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
|     |     |     |     |     | Toussaint, | 1993]. Se bazeaz˘a | pe Two Ears | Theorem! |
| --- | --- | --- | --- | --- | ---------- | ------------------ | ----------- | -------- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶
|     |     |     |     |     | Link despre | triangul˘ari. Link | pentru algoritmul | Ear cutting |
| --- | --- | --- | --- | --- | ----------- | ------------------ | ----------------- | ----------- |
Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare:   | ear cutting     | / clipping | / trimming |     |     |     |     |
| ---------- | ----------------- | --------------- | ---------- | ---------- | --- | --- | --- | --- |
| ▶ Concepte | pentru un poligon | P =(P ,P ,...,P | ):         |            |     |     |     |     |
|            |                   | 1 2             | n          |            |     |     |     |     |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
i i−1 i+1
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
|     |     |     |     |     | [Toussaint, | 1991]. |     |     |
| --- | --- | --- | --- | --- | ----------- | ------ | --- | --- |
▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
|     |     |     |     |     | Corolar. Orice | poligon admite | (cel pu¸tin) | o diagonal˘a. |
| --- | --- | --- | --- | --- | -------------- | -------------- | ------------ | ------------- |
▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
|     |     |     |     |     | Toussaint, | 1993]. Se bazeaz˘a | pe Two Ears | Theorem! |
| --- | --- | --- | --- | --- | ---------- | ------------------ | ----------- | -------- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶
|     |     |     |     |     | Link despre | triangul˘ari. Link | pentru algoritmul | Ear cutting |
| --- | --- | --- | --- | --- | ----------- | ------------------ | ----------------- | ----------- |
Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare:   | ear cutting     | / clipping | / trimming |     |     |     |     |
| ---------- | ----------------- | --------------- | ---------- | ---------- | --- | --- | --- | --- |
| ▶ Concepte | pentru un poligon | P =(P ,P ,...,P | ):         |            |     |     |     |     |
|            |                   | 1 2             | n          |            |     |     |     |     |
- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     | i   |     | i−1 i+1 |     |     |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- | --- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
|     |     |     | i−1 | i i+1 |     |     |     |     |
| --- | --- | --- | --- | ----- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
|     |     |     |     |     | Corolar. Orice | poligon admite | (cel pu¸tin) | o diagonal˘a. |
| --- | --- | --- | --- | --- | -------------- | -------------- | ------------ | ------------- |
▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
|     |     |     |     |     | Toussaint, | 1993]. Se bazeaz˘a | pe Two Ears | Theorem! |
| --- | --- | --- | --- | --- | ---------- | ------------------ | ----------- | -------- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶
|     |     |     |     |     | Link despre | triangul˘ari. Link | pentru algoritmul | Ear cutting |
| --- | --- | --- | --- | --- | ----------- | ------------------ | ----------------- | ----------- |
Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare:   | ear cutting     | / clipping | / trimming |     |     |     |     |
| ---------- | ----------------- | --------------- | ---------- | ---------- | --- | --- | --- | --- |
| ▶ Concepte | pentru un poligon | P =(P ,P ,...,P | ):         |            |     |     |     |     |
|            |                   | 1 2             | n          |            |     |     |     |     |
- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     | i   |     | i−1 i+1 |     |     |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- | --- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
|     |     |     | i−1 | i i+1 |     |     |     |     |
| --- | --- | --- | --- | ----- | --- | --- | --- | --- |
- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
|     | i   |     |     | i−1 i+1 |     |     |     |     |
| --- | --- | --- | --- | ------- | --- | --- | --- | --- |
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
[Toussaint, 1991].
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
|     |     |     |     |     | Corolar. Orice | poligon admite | (cel pu¸tin) | o diagonal˘a. |
| --- | --- | --- | --- | --- | -------------- | -------------- | ------------ | ------------- |
▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
|     |     |     |     |     | Toussaint, | 1993]. Se bazeaz˘a | pe Two Ears | Theorem! |
| --- | --- | --- | --- | --- | ---------- | ------------------ | ----------- | -------- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶
|     |     |     |     |     | Link despre | triangul˘ari. Link | pentru algoritmul | Ear cutting |
| --- | --- | --- | --- | --- | ----------- | ------------------ | ----------------- | ----------- |
Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare:   | ear cutting     | / clipping | / trimming |     |     |     |     |
| ---------- | ----------------- | --------------- | ---------- | ---------- | --- | --- | --- | --- |
| ▶ Concepte | pentru un poligon | P =(P ,P ,...,P | ):         |            |     |     |     |     |
|            |                   | 1 2             | n          |            |     |     |     |     |
- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     | i   |     | i−1 i+1 |     |     |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- | --- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
|     |     |     | i−1 | i i+1 |     |     |     |     |
| --- | --- | --- | --- | ----- | --- | --- | --- | --- |
- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
|     | i   |     |     | i−1 i+1 |     |     |     |     |
| --- | --- | --- | --- | ------- | --- | --- | --- | --- |
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
[Toussaint, 1991].
▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
|     |     |     |     |     | Toussaint, 1993]. | Se bazeaz˘a | pe Two Ears | Theorem! |
| --- | --- | --- | --- | --- | ----------------- | ----------- | ----------- | -------- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶
|     |     |     |     |     | Link despre triangul˘ari. | Link | pentru algoritmul | Ear cutting |
| --- | --- | --- | --- | --- | ------------------------- | ---- | ----------------- | ----------- |
Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare:   | ear cutting | / clipping | / trimming |     |     |     |     |
| ---------- | ----------------- | ----------- | ---------- | ---------- | --- | --- | --- | --- |
| ▶ Concepte | pentru un poligon | P =(P ,P    | ,...,P ):  |            |     |     |     |     |
|            |                   | 1           | 2 n        |            |     |     |     |     |
- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     | i   |     | i−1 i+1 |     |     |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- | --- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
i−1 i i+1
- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
|     | i   |     |     | i−1 i+1 |     |     |     |     |
| --- | --- | --- | --- | ------- | --- | --- | --- | --- |
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
[Toussaint, 1991].
▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
| Corolar. | Orice poligon | admite (cel pu¸tin) | o diagonal˘a. |     |     |     |     |     |
| -------- | ------------- | ------------------- | ------------- | --- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

▶
|     |     |     |     |     | Link despre triangul˘ari. | Link pentru algoritmul | Ear cutting |
| --- | --- | --- | --- | --- | ------------------------- | ---------------------- | ----------- |
Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare:   | ear cutting | / clipping | / trimming |     |     |     |
| ---------- | ----------------- | ----------- | ---------- | ---------- | --- | --- | --- |
| ▶ Concepte | pentru un poligon | P =(P ,P    | ,...,P ):  |            |     |     |     |
|            |                   | 1           | 2 n        |            |     |     |     |
- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     | i   |     | i−1 i+1 |     |     |     |     |
| --- | --- | --- | ------- | --- | --- | --- | --- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
i−1 i i+1
- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
|     | i   |     |     | i−1 i+1 |     |     |     |
| --- | --- | --- | --- | ------- | --- | --- | --- |
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
[Toussaint, 1991].
▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
| Corolar. | Orice poligon | admite (cel pu¸tin) | o diagonal˘a. |     |     |     |     |
| -------- | ------------- | ------------------- | ------------- | --- | --- | --- | --- |
▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
| Toussaint, | 1993]. Se bazeaz˘a | pe Two Ears | Theorem! |     |     |     |     |
| ---------- | ------------------ | ----------- | -------- | --- | --- | --- | --- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

Algoritmidetriangulare-“Earclipping”
| Metode     | de triangulare: |            | ear cutting | / clipping | / trimming |
| ---------- | --------------- | ---------- | ----------- | ---------- | ---------- |
| ▶ Concepte | pentru          | un poligon | P =(P ,P    | ,...,P ):  |            |
|            |                 |            | 1           | 2 n        |            |
- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf
este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.
- Vˆarf principal: P este principal dac˘a [P P ] este diagonal˘a (echivalent:
|     |     | i   |     | i−1 i+1 |     |
| --- | --- | --- | --- | ------- | --- |
nu exist˘a un alt vˆarfˆın interiorul sau pe laturile ∆P PP ).
i−1 i i+1
- Ear (vˆarf / component˘a de tip E): este un vˆarf principal convex [Meisters,
1975]. Dac˘a P este component˘a de tip E, atunci segmentul [P P ]
|     |     | i   |     |     | i−1 i+1 |
| --- | --- | --- | --- | --- | ------- |
nu intersecteaz˘a laturile poligonului¸si este situatˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆P PP poate fi “eliminat”.
i−1 i i+1
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav
[Toussaint, 1991].
▶
Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel pu¸tin 4
vˆarfuri admite cel pu¸tin dou˘a componente de tip E care nu se suprapun.
▶
| Corolar. | Orice | poligon | admite (cel pu¸tin) | o diagonal˘a. |     |
| -------- | ----- | ------- | ------------------- | ------------- | --- |
▶
G˘asirea unei componente de tip E: complexitate O(n) [ElGindy, Everett,
| Toussaint, | 1993]. | Se bazeaz˘a | pe Two Ears | Theorem! |     |
| ---------- | ------ | ----------- | ----------- | -------- | --- |
▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶
| Link | despre triangul˘ari. |     | Link pentru algoritmul | Ear cutting |     |
| ---- | -------------------- | --- | ---------------------- | ----------- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 22/36

▶
|     |     |     |     | Descompunerea | unui poligon | oarecare | in componente | y-monotone |
| --- | --- | --- | --- | ------------- | ------------ | -------- | ------------- | ---------- |
poate fi realizat˘a cu un algoritm de complexitate O(nlogn) [Lee,
|     |     |     |     | Preparata, | 1977]. ˆIn concluzie, | avem | urm˘atoarea |     |
| --- | --- | --- | --- | ---------- | --------------------- | ---- | ----------- | --- |
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
|     |     |     |     | complexitate | O(nlogn). |     |     |     |
| --- | --- | --- | --- | ------------ | --------- | --- | --- | --- |
▶
Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm
liniar.
▶
G˘asirea unui algoritm liniar ”simplu” Problem˘aˆın The Open Problems
Project
Triangulareapoligoanelor-unalgoritmeficient
| Metode | de triangulare: | descompunereaˆın | poligoane |     |     |     |     |     |
| ------ | --------------- | ---------------- | --------- | --- | --- | --- | --- | --- |
monotone
▶
Algoritmi de triangulare eficien¸ti: complexitate O(n) pentru poligoane
y-monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 23/36

▶
Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm
liniar.
▶
G˘asirea unui algoritm liniar ”simplu” Problem˘aˆın The Open Problems
Project
Triangulareapoligoanelor-unalgoritmeficient
| Metode | de triangulare: | descompunereaˆın | poligoane |     |
| ------ | --------------- | ---------------- | --------- | --- |
monotone
▶
Algoritmi de triangulare eficien¸ti: complexitate O(n) pentru poligoane
y-monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).
▶
| Descompunerea | unui | poligon oarecare | in componente | y-monotone |
| ------------- | ---- | ---------------- | ------------- | ---------- |
poate fi realizat˘a cu un algoritm de complexitate O(nlogn) [Lee,
| Preparata, | 1977]. ˆIn | concluzie, avem | urm˘atoarea |     |
| ---------- | ---------- | --------------- | ----------- | --- |
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
| complexitate | O(nlogn). |     |     |     |
| ------------ | --------- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 23/36

▶
G˘asirea unui algoritm liniar ”simplu” Problem˘aˆın The Open Problems
Project
Triangulareapoligoanelor-unalgoritmeficient
| Metode | de triangulare: | descompunereaˆın | poligoane |     |
| ------ | --------------- | ---------------- | --------- | --- |
monotone
▶
Algoritmi de triangulare eficien¸ti: complexitate O(n) pentru poligoane
y-monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).
▶
| Descompunerea | unui | poligon oarecare | in componente | y-monotone |
| ------------- | ---- | ---------------- | ------------- | ---------- |
poate fi realizat˘a cu un algoritm de complexitate O(nlogn) [Lee,
| Preparata, | 1977]. ˆIn | concluzie, avem | urm˘atoarea |     |
| ---------- | ---------- | --------------- | ----------- | --- |
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
| complexitate | O(nlogn). |     |     |     |
| ------------ | --------- | --- | --- | --- |
▶
Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm
liniar.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 23/36

Triangulareapoligoanelor-unalgoritmeficient
| Metode | de triangulare: | descompunereaˆın | poligoane |     |
| ------ | --------------- | ---------------- | --------- | --- |
monotone
▶
Algoritmi de triangulare eficien¸ti: complexitate O(n) pentru poligoane
y-monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).
▶
| Descompunerea | unui | poligon oarecare | in componente | y-monotone |
| ------------- | ---- | ---------------- | ------------- | ---------- |
poate fi realizat˘a cu un algoritm de complexitate O(nlogn) [Lee,
| Preparata, | 1977]. ˆIn | concluzie, avem | urm˘atoarea |     |
| ---------- | ---------- | --------------- | ----------- | --- |
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
| complexitate | O(nlogn). |     |     |     |
| ------------ | --------- | --- | --- | --- |
▶
Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm
liniar.
▶
G˘asirea unui algoritm liniar ”simplu” Problem˘aˆın The Open Problems
Project
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 23/36

Exemplul 1 Exemplul 2
▶
Poligonul din Exemplul 1 este y-monoton: (i) poate fi parcurs de susˆın josˆın
exact dou˘a moduri, f˘ar˘aˆıntoarceri - exist˘a dou˘a lan¸turi pe care se poate realiza
parcurgerea, (ii) orice dreapt˘a orizontal˘a intersecteaz˘a reuniunea dintre poligon¸si
interior dup˘a o mul¸time conex˘a (∅, punct sau segment). Poligonul din Exemplul 2
nu este y-monoton.
Triangulareapoligoanelor-unalgoritmeficient
Metode de triangulare: descompunereaˆın poligoane
monotone
▶
Concept: poligon y-monoton
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 24/36

▶
Poligonul din Exemplul 1 este y-monoton: (i) poate fi parcurs de susˆın josˆın
exact dou˘a moduri, f˘ar˘aˆıntoarceri - exist˘a dou˘a lan¸turi pe care se poate realiza
parcurgerea, (ii) orice dreapt˘a orizontal˘a intersecteaz˘a reuniunea dintre poligon¸si
interior dup˘a o mul¸time conex˘a (∅, punct sau segment). Poligonul din Exemplul 2
nu este y-monoton.
Triangulareapoligoanelor-unalgoritmeficient
| Metode | de triangulare: | descompunereaˆın | poligoane |
| ------ | --------------- | ---------------- | --------- |
monotone
▶
| Concept: | poligon y-monoton |            |     |
| -------- | ----------------- | ---------- | --- |
|          | Exemplul          | 1 Exemplul | 2   |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 24/36

Triangulareapoligoanelor-unalgoritmeficient
| Metode | de triangulare: | descompunereaˆın | poligoane |
| ------ | --------------- | ---------------- | --------- |
monotone
▶
| Concept: | poligon y-monoton |            |     |
| -------- | ----------------- | ---------- | --- |
|          | Exemplul          | 1 Exemplul | 2   |
▶
Poligonul din Exemplul 1 este y-monoton: (i) poate fi parcurs de susˆın josˆın
exact dou˘a moduri, f˘ar˘aˆıntoarceri - exist˘a dou˘a lan¸turi pe care se poate realiza
parcurgerea, (ii) orice dreapt˘a orizontal˘a intersecteaz˘a reuniunea dintre poligon¸si
interior dup˘a o mul¸time conex˘a (∅, punct sau segment). Poligonul din Exemplul 2
| nu este | y-monoton. |     |     |
| ------- | ---------- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 24/36

▶
Statut al dreptei de baleiere: stiv˘a a vˆarfurilor dejaˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘aˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
diagonal˘a situat˘a “mai jos de acesta”).
▶
Evenimente: modificarea statutului. Sunt vˆarfurile poligonului,ˆın
prealabil ordonate dup˘a y; pentru fiecare vˆarf ¸stim dac˘a este pe lan¸tul
din stˆanga sau pe cel din dreapta.
▶
Invariant: “pˆalnie” (funnel)ˆın care (i) vˆarful de sus este convex; (ii)
pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de
vˆarfuri concave.
Triangulareapoligoanelor-unalgoritmeficient
Metoda - paradigma dreptei de baleiere (line sweep)
▶
Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul re¸tine o
serie de informa¸tii legate de structura geometric˘a analizat˘a.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 25/36

▶
Evenimente: modificarea statutului. Sunt vˆarfurile poligonului,ˆın
prealabil ordonate dup˘a y; pentru fiecare vˆarf ¸stim dac˘a este pe lan¸tul
din stˆanga sau pe cel din dreapta.
▶
Invariant: “pˆalnie” (funnel)ˆın care (i) vˆarful de sus este convex; (ii)
pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de
vˆarfuri concave.
Triangulareapoligoanelor-unalgoritmeficient
Metoda - paradigma dreptei de baleiere (line sweep)
▶
Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul re¸tine o
serie de informa¸tii legate de structura geometric˘a analizat˘a.
▶
Statut al dreptei de baleiere: stiv˘a a vˆarfurilor dejaˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘aˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
diagonal˘a situat˘a “mai jos de acesta”).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 25/36

▶
Invariant: “pˆalnie” (funnel)ˆın care (i) vˆarful de sus este convex; (ii)
pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de
vˆarfuri concave.
Triangulareapoligoanelor-unalgoritmeficient
Metoda - paradigma dreptei de baleiere (line sweep)
▶
Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul re¸tine o
serie de informa¸tii legate de structura geometric˘a analizat˘a.
▶
Statut al dreptei de baleiere: stiv˘a a vˆarfurilor dejaˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘aˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
diagonal˘a situat˘a “mai jos de acesta”).
▶
Evenimente: modificarea statutului. Sunt vˆarfurile poligonului,ˆın
prealabil ordonate dup˘a y; pentru fiecare vˆarf ¸stim dac˘a este pe lan¸tul
din stˆanga sau pe cel din dreapta.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 25/36

Triangulareapoligoanelor-unalgoritmeficient
| Metoda | - paradigma |     | dreptei | de baleiere (line | sweep) |
| ------ | ----------- | --- | ------- | ----------------- | ------ |
▶
Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul re¸tine o
serie de informa¸tii legate de structura geometric˘a analizat˘a.
▶ Statut al dreptei de baleiere: stiv˘a a vˆarfurilor dejaˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘aˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
| diagonal˘a | situat˘a | “mai | jos de acesta”). |     |     |
| ---------- | -------- | ---- | ---------------- | --- | --- |
▶
Evenimente: modificarea statutului. Sunt vˆarfurile poligonului,ˆın
prealabil ordonate dup˘a y; pentru fiecare vˆarf ¸stim dac˘a este pe lan¸tul
| din | stˆanga sau | pe cel | din dreapta. |     |     |
| --- | ----------- | ------ | ------------ | --- | --- |
▶ Invariant: “pˆalnie” (funnel)ˆın care (i) vˆarful de sus este convex; (ii)
pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de
| vˆarfuri | concave. |     |     |     |     |
| -------- | -------- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 25/36

Triangulareapoligoanelor-unalgoritmeficient
Evenimente - cazul 1
1. Vˆarful nouˆıntˆalnit este pe lan¸tul opus ultimului vˆarf din stiv˘a.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 26/36

Triangulareapoligoanelor-unalgoritmeficient
Evenimente - cazul 2a
2a. Vˆarful nouˆıntˆalnit este pe acela¸si lan¸t cu ultimul vˆarf din stiv˘a.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 27/36

Triangulareapoligoanelor-unalgoritmeficient
Evenimente - cazul 2b
2b. Vˆarful nouˆıntˆalnit este pe acela¸si lan¸t cu ultimul vˆarf din stiv˘a.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 28/36

Triangulareapoligoanelor-unalgoritmeficient
Exemplu
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 29/36

Triangulareapoligoanelor-unalgoritmeficient
Exemplu
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 30/36

Triangulareapoligoanelor-unalgoritmeficient
Exemplu
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 31/36

|     |     |     | 2. Ini¸tializeaz˘a | o stiv˘a vid˘a | S ¸si insereaz˘a | v ,v . |
| --- | --- | --- | ------------------ | -------------- | ---------------- | ------ |
1 2
|     |     |     | 3. for j =3 | to n−1 |     |     |
| --- | --- | --- | ----------- | ------ | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
|     |     |     | 5.  | then extrage | toate vˆarfurile | din S |
| --- | --- | --- | --- | ------------ | ---------------- | ----- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
|     |     |     | 7.  | insereaz˘a | v ¸si v ˆın S |     |
| --- | --- | --- | --- | ---------- | ------------- | --- |
j−1 j
|     |     |     | 8.  | else extrage | un vˆarf din S |     |
| --- | --- | --- | --- | ------------ | -------------- | --- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     | ˆınapoi ultimul | vˆarf extras |     |
| --- | --- | --- | --- | --------------- | ------------ | --- |
|     |     |     | 10. | insereaz˘a      | v j ˆın S    |     |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa). | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |     |     |     |     |
| --------- | ------------------- | ----------------- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

|     |     |     |     | 3. for j =3 | to n−1 |     |
| --- | --- | --- | --- | ----------- | ------ | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
|     |     |     |     | 5.  | then extrage | toate vˆarfurile din S |
| --- | --- | --- | --- | --- | ------------ | ---------------------- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
|     |     |     |     | 7.  | insereaz˘a | v ¸si v ˆın S |
| --- | --- | --- | --- | --- | ---------- | ------------- |
j−1 j
|     |     |     |     | 8.  | else extrage | un vˆarf din S |
| --- | --- | --- | --- | --- | ------------ | -------------- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a      | v j ˆın S    |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
|     |     |     |     | 5.  | then extrage | toate vˆarfurile din S |
| --- | --- | --- | --- | --- | ------------ | ---------------------- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
|     |     |     |     | 7.  | insereaz˘a | v ¸si v ˆın S |
| --- | --- | --- | --- | --- | ---------- | ------------- |
j−1 j
|     |     |     |     | 8.  | else extrage | un vˆarf din S |
| --- | --- | --- | --- | --- | ------------ | -------------- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a      | v j ˆın S    |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

|     |     |     |     | 5.  | then extrage | toate vˆarfurile din S |
| --- | --- | --- | --- | --- | ------------ | ---------------------- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
|     |     |     |     | 7.  | insereaz˘a | v ¸si v ˆın S |
| --- | --- | --- | --- | --- | ---------- | ------------- |
j−1 j
|     |     |     |     | 8.  | else extrage | un vˆarf din S |
| --- | --- | --- | --- | --- | ------------ | -------------- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a      | v j ˆın S    |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
|     |     |     |     | 7.  | insereaz˘a | v ¸si v ˆın S |
| --- | --- | --- | --- | --- | ---------- | ------------- |
j−1 j
|     |     |     |     | 8.  | else extrage | un vˆarf din S |
| --- | --- | --- | --- | --- | ------------ | -------------- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a      | v j ˆın S    |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |     |     |     |
| --- | ------------ | ---------------- | ----- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

|     |     |     |     | 7.  | insereaz˘a | v ¸si v ˆın S |
| --- | --- | --- | --- | --- | ---------- | ------------- |
j−1 j
|     |     |     |     | 8.  | else extrage | un vˆarf din S |
| --- | --- | --- | --- | --- | ------------ | -------------- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a      | v j ˆın S    |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |     |     |     |
| --- | ------------ | ---------------- | ----- | --- | --- | --- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

|     |     |     |     | 8.  | else extrage | un vˆarf din S |
| --- | --- | --- | --- | --- | ------------ | -------------- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a v    | j ˆın S      |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |     |     |     |
| --- | ------------ | ---------------- | ----- | --- | --- | --- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
| 7.  | insereaz˘a | v ¸si v ˆın S |     |     |     |     |
| --- | ---------- | ------------- | --- | --- | --- | --- |
j−1 j
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     |     |     |     |     | ˆınapoi ultimul | vˆarf extras |
| --- | --- | --- | --- | --- | --------------- | ------------ |
|     |     |     |     | 10. | insereaz˘a v    | j ˆın S      |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |     |     |     |
| --- | ------------ | ---------------- | ----- | --- | --- | --- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
| 7.  | insereaz˘a | v ¸si v ˆın S |     |     |     |     |
| --- | ---------- | ------------- | --- | --- | --- | --- |
j−1 j
| 8.  | else extrage | un vˆarf din S |     |     |     |     |
| --- | ------------ | -------------- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

|     |     |     |     | 10. | insereaz˘a v | j ˆın S |
| --- | --- | --- | --- | --- | ------------ | ------- |
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |     |     |     |
| --------------------- | ------------ | -------- | --- | --- | --- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |     |     |     |
| Output: O triangulare | a lui        | P.       |     |     |     |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |     |     |     |
| ------------------ | ------------------- | ----------------- | ------ | --- | --- | --- |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |     |     |     |
1 2
| 3. for j =3 | to n−1 |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |     |     |     |
| --- | ------------ | ---------------- | ----- | --- | --- | --- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
| 7.  | insereaz˘a | v ¸si v ˆın S |     |     |     |     |
| --- | ---------- | ------------- | --- | --- | --- | --- |
j−1 j
| 8.  | else extrage | un vˆarf din S |     |     |     |     |
| --- | ------------ | -------------- | --- | --- | --- | --- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     | ˆınapoi ultimul | vˆarf extras |     |     |     |     |
| --- | --------------- | ------------ | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |
| --------------------- | ------------ | -------- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |
| Output: O triangulare | a lui        | P.       |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |
| ------------------ | ------------------- | ----------------- | ------ |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |
1 2
| 3. for j =3 | to n−1 |     |     |
| ----------- | ------ | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |
| --- | ------------ | ---------------- | ----- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
| 7.  | insereaz˘a | v ¸si v ˆın S |     |
| --- | ---------- | ------------- | --- |
j−1 j
| 8.  | else extrage | un vˆarf din S |     |
| --- | ------------ | -------------- | --- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     | ˆınapoi ultimul | vˆarf extras |     |
| --- | --------------- | ------------ | --- |
| 10. | insereaz˘a      | v ˆın S      |     |
j
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

Triangulareapoligoanelor-unalgoritmeficient
| Triangularea          | poligoanelor | monotone |     |
| --------------------- | ------------ | -------- | --- |
| Input: Un poligon     | y-monoton    | P.       |     |
| Output: O triangulare | a lui        | P.       |     |
1. Lan¸tul vˆarfurilor din partea stˆang˘a¸si al celor din partea dreapt˘a sunt uniteˆıntr-un
singur¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
| abscisa).          | Fie v 1 ,v 2 ,...,v | n ¸sirul ordonat. |        |
| ------------------ | ------------------- | ----------------- | ------ |
| 2. Ini¸tializeaz˘a | o stiv˘a vid˘a      | S ¸si insereaz˘a  | v ,v . |
1 2
| 3. for j =3 | to n−1 |     |     |
| ----------- | ------ | --- | --- |
4. do if v ¸si vˆarful din top al lui S suntˆın lan¸turi diferite
j
| 5.  | then extrage | toate vˆarfurile | din S |
| --- | ------------ | ---------------- | ----- |
6. insereaz˘a diagonale de la v j la vf. extrase, exceptˆand ultimul
| 7.  | insereaz˘a | v ¸si v ˆın S |     |
| --- | ---------- | ------------- | --- |
j−1 j
| 8.  | else extrage | un vˆarf din S |     |
| --- | ------------ | -------------- | --- |
9. extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu v
j
suntˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
|     | ˆınapoi ultimul | vˆarf extras |     |
| --- | --------------- | ------------ | --- |
| 10. | insereaz˘a      | v ˆın S      |     |
j
11. adaug˘a diagonale de la v la vf. stivei (exceptˆand primul¸si ultimul)
n
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 32/36

Triangulareapoligoanelor-unalgoritmeficient
Tipuri de vˆarfuri
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 33/36

Triangulareapoligoanelor-unalgoritmeficient
Tipuri de vˆarfuri
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 34/36

▶
|     |     |     |     | Conform algoritmului | descris, | un poligon y-monoton | poate fi |
| --- | --- | --- | --- | -------------------- | -------- | -------------------- | -------- |
|     |     |     |     | triangulatˆın timp   | liniar.  |                      |          |
▶
Teorem˘a (rezultatul principal) Un poligon cu n vˆarfuri poate fi
triangulat cu complexitatea-timp O(nlogn) ¸si complexitatea-spa¸tiu
O(n).
Triangulareapoligoanelor-unalgoritmeficient
Rezultate
▶ Folosind un algoritm bazat pe paradigma dreptei de baleiere ¸si
clasificarea vˆarfurilor indicat˘a, un poligon cu n vˆarfuri poate fi
| descompusˆın       | poligoane y-monotone | cu un algoritm | avˆand |     |     |     |     |
| ------------------ | -------------------- | -------------- | ------ | --- | --- | --- | --- |
| complexitatea-timp | O(nlogn).            |                |        |     |     |     |     |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 35/36

▶
Teorem˘a (rezultatul principal) Un poligon cu n vˆarfuri poate fi
triangulat cu complexitatea-timp O(nlogn) ¸si complexitatea-spa¸tiu
O(n).
Triangulareapoligoanelor-unalgoritmeficient
Rezultate
▶ Folosind un algoritm bazat pe paradigma dreptei de baleiere ¸si
clasificarea vˆarfurilor indicat˘a, un poligon cu n vˆarfuri poate fi
| descompusˆın       | poligoane y-monotone | cu un algoritm | avˆand |
| ------------------ | -------------------- | -------------- | ------ |
| complexitatea-timp | O(nlogn).            |                |        |
▶
| Conform algoritmului | descris,     | un poligon y-monoton | poate fi |
| -------------------- | ------------ | -------------------- | -------- |
| triangulatˆın        | timp liniar. |                      |          |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 35/36

Triangulareapoligoanelor-unalgoritmeficient
Rezultate
▶ Folosind un algoritm bazat pe paradigma dreptei de baleiere ¸si
clasificarea vˆarfurilor indicat˘a, un poligon cu n vˆarfuri poate fi
| descompusˆın       | poligoane y-monotone | cu un algoritm | avˆand |
| ------------------ | -------------------- | -------------- | ------ |
| complexitatea-timp | O(nlogn).            |                |        |
▶
| Conform algoritmului | descris,     | un poligon y-monoton | poate fi |
| -------------------- | ------------ | -------------------- | -------- |
| triangulatˆın        | timp liniar. |                      |          |
▶
Teorem˘a (rezultatul principal) Un poligon cu n vˆarfuri poate fi
triangulat cu complexitatea-timp O(nlogn) ¸si complexitatea-spa¸tiu
O(n).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 35/36

| ▶ Clasificarea | vˆarfurilor | unui poligon (convexe/concave, |     |
| -------------- | ----------- | ------------------------------ | --- |
principale/neprincipale).
▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
▶
| Paradigma | dreptei de | baleiere. |     |
| --------- | ---------- | --------- | --- |
▶
Algoritm de triangulare liniar pentru poligoane monotone. Aplica¸tie la
| algoritm | de triangulare | cu complexitate | timp O(nlogn). |
| -------- | -------------- | --------------- | -------------- |
Triangulareapoligoanelor-unalgoritmeficient
Scurt rezumat
▶
Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 36/36

▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
▶
|     |     |     | Paradigma | dreptei de | baleiere. |     |
| --- | --- | --- | --------- | ---------- | --------- | --- |
▶
Algoritm de triangulare liniar pentru poligoane monotone. Aplica¸tie la
|     |     |     | algoritm | de triangulare | cu complexitate | timp O(nlogn). |
| --- | --- | --- | -------- | -------------- | --------------- | -------------- |
Triangulareapoligoanelor-unalgoritmeficient
Scurt rezumat
▶
Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
| ▶ Clasificarea | vˆarfurilor unui | poligon (convexe/concave, |     |     |     |     |
| -------------- | ---------------- | ------------------------- | --- | --- | --- | --- |
principale/neprincipale).
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 36/36

▶
|     |     |     | Paradigma | dreptei de | baleiere. |     |
| --- | --- | --- | --------- | ---------- | --------- | --- |
▶
Algoritm de triangulare liniar pentru poligoane monotone. Aplica¸tie la
|     |     |     | algoritm | de triangulare | cu complexitate | timp O(nlogn). |
| --- | --- | --- | -------- | -------------- | --------------- | -------------- |
Triangulareapoligoanelor-unalgoritmeficient
Scurt rezumat
▶
Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
| ▶ Clasificarea | vˆarfurilor unui | poligon (convexe/concave, |     |     |     |     |
| -------------- | ---------------- | ------------------------- | --- | --- | --- | --- |
principale/neprincipale).
▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 36/36

▶
Algoritm de triangulare liniar pentru poligoane monotone. Aplica¸tie la
|     |     |     | algoritm | de triangulare | cu complexitate | timp O(nlogn). |
| --- | --- | --- | -------- | -------------- | --------------- | -------------- |
Triangulareapoligoanelor-unalgoritmeficient
Scurt rezumat
▶
Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
| ▶ Clasificarea | vˆarfurilor unui | poligon (convexe/concave, |     |     |     |     |
| -------------- | ---------------- | ------------------------- | --- | --- | --- | --- |
principale/neprincipale).
▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
▶
| Paradigma | dreptei de baleiere. |     |     |     |     |     |
| --------- | -------------------- | --- | --- | --- | --- | --- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 36/36

Triangulareapoligoanelor-unalgoritmeficient
Scurt rezumat
▶
Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
| ▶ Clasificarea | vˆarfurilor | unui poligon (convexe/concave, |     |
| -------------- | ----------- | ------------------------------ | --- |
principale/neprincipale).
▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
▶
| Paradigma | dreptei de | baleiere. |     |
| --------- | ---------- | --------- | --- |
▶
Algoritm de triangulare liniar pentru poligoane monotone. Aplica¸tie la
| algoritm | de triangulare | cu complexitate | timp O(nlogn). |
| -------- | -------------- | --------------- | -------------- |
Algoritmiavansa¸ti-C9.Triangulareapoligoanelor 36/36
