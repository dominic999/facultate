Algoritmi avansat¸i

C9 - Triangularea poligoanelor

Mihai-Sorin Stupariu

Sem. al II-lea, 2025 - 2026

Algoritmi avansat¸i - C9. Triangularea poligoanelor

1 / 36

Problema galeriei de art˘a

Problema galeriei de art˘a

Algoritmi de triangulare - “Ear clipping”

Triangularea poligoanelor - un algoritm eficient

Algoritmi avansat¸i - C9. Triangularea poligoanelor

2 / 36

Problema galeriei de art˘a

Supravegherea unei galerii de art˘a
Camera din P poate supraveghea A, dar nu B.

(cid:0)
(cid:0)(cid:0)
(cid:0)

(cid:114)A
(cid:74)(cid:74)

(cid:74)

(cid:74)

(cid:74)

(cid:74)

(cid:114)(cid:74)

P

(cid:114) B

Algoritmi avansat¸i - C9. Triangularea poligoanelor

2 / 36

▶ O camer˘a video (vizibilitate 3600) poate fi identificat˘a cu un punct

din interiorul lui P; ea poate supraveghea acele puncte cu care poate

fi unit˘a printr-un segment inclus ˆın interiorul poligonului.

▶ Problema galeriei de art˘a: cˆate camere video sunt necesare pentru

a supraveghea o galerie de art˘a ¸si unde trebuie amplasate acestea?

Problema galeriei de art˘a

Formalizare

▶ O galerie de art˘a poate fi interpretat˘a (ˆın contextul acestei probleme)
ca un poligon P (adic˘a o linie poligonal˘a f˘ar˘a autointersect¸ii) avˆand n
vˆarfuri.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

3 / 36

▶ Problema galeriei de art˘a: cˆate camere video sunt necesare pentru

a supraveghea o galerie de art˘a ¸si unde trebuie amplasate acestea?

Problema galeriei de art˘a

Formalizare

▶ O galerie de art˘a poate fi interpretat˘a (ˆın contextul acestei probleme)
ca un poligon P (adic˘a o linie poligonal˘a f˘ar˘a autointersect¸ii) avˆand n
vˆarfuri.

▶ O camer˘a video (vizibilitate 3600) poate fi identificat˘a cu un punct

din interiorul lui P; ea poate supraveghea acele puncte cu care poate
fi unit˘a printr-un segment inclus ˆın interiorul poligonului.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

3 / 36

Problema galeriei de art˘a

Formalizare

▶ O galerie de art˘a poate fi interpretat˘a (ˆın contextul acestei probleme)
ca un poligon P (adic˘a o linie poligonal˘a f˘ar˘a autointersect¸ii) avˆand n
vˆarfuri.

▶ O camer˘a video (vizibilitate 3600) poate fi identificat˘a cu un punct

din interiorul lui P; ea poate supraveghea acele puncte cu care poate
fi unit˘a printr-un segment inclus ˆın interiorul poligonului.

▶ Problema galeriei de art˘a: cˆate camere video sunt necesare pentru
a supraveghea o galerie de art˘a ¸si unde trebuie amplasate acestea?

Algoritmi avansat¸i - C9. Triangularea poligoanelor

3 / 36

Problema galeriei de art˘a

Comentarii

Algoritmi avansat¸i - C9. Triangularea poligoanelor

4 / 36

▶ Pentru a supraveghea un spat¸iu avˆand forma unui poligon convex,

este suficient˘a o singur˘a camer˘a.

▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma

este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.

▶ Principiu: Poligonul considerat: descompus ˆın triunghiuri

(triangulare).

Problema galeriei de art˘a

Num˘arul de camere vs. forma poligonului

▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru

supraveghere ˆın funct¸ie de n (sau controlarea acestuia de c˘atre n).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

5 / 36

▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma

este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.

▶ Principiu: Poligonul considerat: descompus ˆın triunghiuri

(triangulare).

Problema galeriei de art˘a

Num˘arul de camere vs. forma poligonului

▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru

supraveghere ˆın funct¸ie de n (sau controlarea acestuia de c˘atre n).
▶ Pentru a supraveghea un spat¸iu avˆand forma unui poligon convex,

este suficient˘a o singur˘a camer˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

5 / 36

▶ Principiu: Poligonul considerat: descompus ˆın triunghiuri

(triangulare).

Problema galeriei de art˘a

Num˘arul de camere vs. forma poligonului

▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru

supraveghere ˆın funct¸ie de n (sau controlarea acestuia de c˘atre n).
▶ Pentru a supraveghea un spat¸iu avˆand forma unui poligon convex,

este suficient˘a o singur˘a camer˘a.

▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma
este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

5 / 36

Problema galeriei de art˘a

Num˘arul de camere vs. forma poligonului

▶ Se dore¸ste exprimarea num˘arului de camere necesare pentru

supraveghere ˆın funct¸ie de n (sau controlarea acestuia de c˘atre n).
▶ Pentru a supraveghea un spat¸iu avˆand forma unui poligon convex,

este suficient˘a o singur˘a camer˘a.

▶ Num˘arul de camere depinde ¸si de forma poligonului: cu cˆat forma
este mai ”complex˘a”, cu atˆat num˘arul de camere va fi mai mare.

▶ Principiu: Poligonul considerat: descompus ˆın triunghiuri

(triangulare).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

5 / 36

Problema galeriei de art˘a

Despre triangul˘ari

Algoritmi avansat¸i - C9. Triangularea poligoanelor

6 / 36

▶ (i) O diagonal˘a a lui P este un segment ce une¸ste dou˘a vˆarfuri ale

acestuia ¸si care este situat ˆın interiorul lui P.

▶ (ii) O triangulare TP a lui P este o descompunere a lui P ˆın

triunghiuri, dat˘a de o mult¸ime maximal˘a de diagonale ce nu se

intersecteaz˘a.

Problema galeriei de art˘a

Definit¸ie formal˘a

▶ Fie P un poligon plan.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

7 / 36

▶ (ii) O triangulare TP a lui P este o descompunere a lui P ˆın

triunghiuri, dat˘a de o mult¸ime maximal˘a de diagonale ce nu se

intersecteaz˘a.

Problema galeriei de art˘a

Definit¸ie formal˘a

▶ Fie P un poligon plan.
▶ (i) O diagonal˘a a lui P este un segment ce une¸ste dou˘a vˆarfuri ale

acestuia ¸si care este situat ˆın interiorul lui P.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

7 / 36

Problema galeriei de art˘a

Definit¸ie formal˘a

▶ Fie P un poligon plan.
▶ (i) O diagonal˘a a lui P este un segment ce une¸ste dou˘a vˆarfuri ale

acestuia ¸si care este situat ˆın interiorul lui P.

▶ (ii) O triangulare TP a lui P este o descompunere a lui P ˆın
triunghiuri, dat˘a de o mult¸ime maximal˘a de diagonale ce nu se
intersecteaz˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

7 / 36

▶ Teorem˘a. Orice poligon admite o triangulare. Orice triangulare a

unui poligon cu n vˆarfuri cont¸ine exact n − 2 triunghiuri.

Problema galeriei de art˘a

Rezultate

▶ Lem˘a. Orice poligon admite o diagonal˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

8 / 36

Problema galeriei de art˘a

Rezultate

▶ Lem˘a. Orice poligon admite o diagonal˘a.
▶ Teorem˘a. Orice poligon admite o triangulare. Orice triangulare a

unui poligon cu n vˆarfuri cont¸ine exact n − 2 triunghiuri.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

8 / 36

▶ Dat˘a o pereche (P, TP ) se consider˘a o 3-colorare a acesteia: fiec˘arui

vˆarf ˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare

triunghi, cele 3 vˆarfuri au culori distincte.

▶ Observat¸ie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersect¸ii o astfel

de colorare exist˘a, deoarece graful dual asociat perechii (P, TP ) este

arbore.

Problema galeriei de art˘a

Rezolvarea problemei galeriei de art˘a

▶ Amplasarea camerelor se poate face ˆın vˆarfurile poligonului.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

9 / 36

▶ Observat¸ie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersect¸ii o astfel

de colorare exist˘a, deoarece graful dual asociat perechii (P, TP ) este

arbore.

Problema galeriei de art˘a

Rezolvarea problemei galeriei de art˘a

▶ Amplasarea camerelor se poate face ˆın vˆarfurile poligonului.
▶ Dat˘a o pereche (P, TP ) se consider˘a o 3-colorare a acesteia: fiec˘arui
vˆarf ˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

9 / 36

Problema galeriei de art˘a

Rezolvarea problemei galeriei de art˘a

▶ Amplasarea camerelor se poate face ˆın vˆarfurile poligonului.
▶ Dat˘a o pereche (P, TP ) se consider˘a o 3-colorare a acesteia: fiec˘arui
vˆarf ˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.

▶ Observat¸ie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersect¸ii o astfel
de colorare exist˘a, deoarece graful dual asociat perechii (P, TP ) este
arbore.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

9 / 36

Problema galeriei de art˘a

Rezolvarea problemei galeriei de art˘a

▶ Amplasarea camerelor se poate face ˆın vˆarfurile poligonului.
▶ Dat˘a o pereche (P, TP ) se consider˘a o 3-colorare a acesteia: fiec˘arui
vˆarf ˆıi corepunde o culoare dintr-un set de 3 culori ¸si pentru fiecare
triunghi, cele 3 vˆarfuri au culori distincte.

▶ Observat¸ie. Dac˘a P este linie poligonal˘a f˘ar˘a autointersect¸ii o astfel
de colorare exist˘a, deoarece graful dual asociat perechii (P, TP ) este
arbore.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

10 / 36

▶ Despre Teorema Galeriei de Art˘a: J. O’Rourke, Art Gallery Theorems

and Algorithms; J. Urrutia, Art Gallery and Illumination Problems

▶ Despre num˘arul de culori utilizat: L. Erickson, S. LaValle, A

chromatic art gallery problem, Fekete et al., On the Chromatic Art

Gallery Problem

Problema galeriei de art˘a

Teorema galeriei de art˘a

(cid:105)

▶ Teorem˘a. [Chv´atal, 1975; Fisk, 1978] Pentru un poligon cu n vˆarfuri,
camere sunt uneori necesare ¸si ˆıntotdeauna suficiente pentru ca
fiecare punct al poligonului s˘a fie vizibil din cel put¸in una din camere.

(cid:104) n
3

Algoritmi avansat¸i - C9. Triangularea poligoanelor

11 / 36

▶ Despre num˘arul de culori utilizat: L. Erickson, S. LaValle, A

chromatic art gallery problem, Fekete et al., On the Chromatic Art

Gallery Problem

Problema galeriei de art˘a

Teorema galeriei de art˘a

(cid:105)

(cid:104) n
3

▶ Teorem˘a. [Chv´atal, 1975; Fisk, 1978] Pentru un poligon cu n vˆarfuri,
camere sunt uneori necesare ¸si ˆıntotdeauna suficiente pentru ca
fiecare punct al poligonului s˘a fie vizibil din cel put¸in una din camere.
▶ Despre Teorema Galeriei de Art˘a: J. O’Rourke, Art Gallery Theorems
and Algorithms; J. Urrutia, Art Gallery and Illumination Problems

Algoritmi avansat¸i - C9. Triangularea poligoanelor

11 / 36

Problema galeriei de art˘a

Teorema galeriei de art˘a

(cid:105)

(cid:104) n
3

▶ Teorem˘a. [Chv´atal, 1975; Fisk, 1978] Pentru un poligon cu n vˆarfuri,
camere sunt uneori necesare ¸si ˆıntotdeauna suficiente pentru ca
fiecare punct al poligonului s˘a fie vizibil din cel put¸in una din camere.
▶ Despre Teorema Galeriei de Art˘a: J. O’Rourke, Art Gallery Theorems
and Algorithms; J. Urrutia, Art Gallery and Illumination Problems

▶ Despre num˘arul de culori utilizat: L. Erickson, S. LaValle, A

chromatic art gallery problem, Fekete et al., On the Chromatic Art
Gallery Problem

Algoritmi avansat¸i - C9. Triangularea poligoanelor

11 / 36

Problema galeriei de art˘a

Teorema galeriei de art˘a - justificare, exemplu

• “uneori necesare”

Algoritmi avansat¸i - C9. Triangularea poligoanelor

12 / 36

Not˘am cu n1, n2, n3 num˘arul de vˆarfuri colorate cu cele 3 culori, are

loc relat¸ia n1 + n2 + n3 = n.

Presupunem prin absurd ca nu sunt suficiente

camere. Aceasta

(cid:104) n

(cid:105)

3

ˆınseamn˘a c˘a:

n1 >

⇒ n1 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

n2 >

⇒ n2 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

n3 >

⇒ n3 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

(cid:104) n

(cid:105)

(cid:104) n

(cid:105)

(cid:104) n

(cid:105)

3

3

3

n

3

n

3

n

3

Adunˆand relat¸iile obt¸inute se ajunge la relat¸ia n1 + n2 + n3 > n, ceea

ce reprezint˘a o contradict¸ie. ˆIn concluzie, exist˘a i astfel ca ni ≤

(cid:104) n

(cid:105)

.

3

Problema galeriei de art˘a

Teorema galeriei de art˘a - justificare, exemplu

• “ˆıntotdeauna suficiente”

Algoritmi avansat¸i - C9. Triangularea poligoanelor

13 / 36

Presupunem prin absurd ca nu sunt suficiente

camere. Aceasta

(cid:104) n

(cid:105)

3

ˆınseamn˘a c˘a:

n1 >

⇒ n1 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

n2 >

⇒ n2 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

n3 >

⇒ n3 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

(cid:104) n

(cid:105)

(cid:104) n

(cid:105)

(cid:104) n

(cid:105)

3

3

3

n

3

n

3

n

3

Adunˆand relat¸iile obt¸inute se ajunge la relat¸ia n1 + n2 + n3 > n, ceea

ce reprezint˘a o contradict¸ie. ˆIn concluzie, exist˘a i astfel ca ni ≤

(cid:104) n

(cid:105)

.

3

Problema galeriei de art˘a

Teorema galeriei de art˘a - justificare, exemplu

• “ˆıntotdeauna suficiente”
Not˘am cu n1, n2, n3 num˘arul de vˆarfuri colorate cu cele 3 culori, are
loc relat¸ia n1 + n2 + n3 = n.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

13 / 36

n1 >

⇒ n1 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

n2 >

⇒ n2 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

n3 >

⇒ n3 >

(folosind definit¸ia p˘art¸ii ˆıntregi)

(cid:104) n

(cid:105)

(cid:104) n

(cid:105)

(cid:104) n

(cid:105)

3

3

3

n

3

n

3

n

3

Adunˆand relat¸iile obt¸inute se ajunge la relat¸ia n1 + n2 + n3 > n, ceea

ce reprezint˘a o contradict¸ie. ˆIn concluzie, exist˘a i astfel ca ni ≤

(cid:104) n

(cid:105)

.

3

Problema galeriei de art˘a

Teorema galeriei de art˘a - justificare, exemplu

• “ˆıntotdeauna suficiente”
Not˘am cu n1, n2, n3 num˘arul de vˆarfuri colorate cu cele 3 culori, are
loc relat¸ia n1 + n2 + n3 = n.

Presupunem prin absurd ca nu sunt suficiente
ˆınseamn˘a c˘a:

(cid:105)

(cid:104) n
3

camere. Aceasta

Algoritmi avansat¸i - C9. Triangularea poligoanelor

13 / 36

Adunˆand relat¸iile obt¸inute se ajunge la relat¸ia n1 + n2 + n3 > n, ceea

ce reprezint˘a o contradict¸ie. ˆIn concluzie, exist˘a i astfel ca ni ≤

(cid:104) n

(cid:105)

.

3

Problema galeriei de art˘a

Teorema galeriei de art˘a - justificare, exemplu

• “ˆıntotdeauna suficiente”
Not˘am cu n1, n2, n3 num˘arul de vˆarfuri colorate cu cele 3 culori, are
loc relat¸ia n1 + n2 + n3 = n.

Presupunem prin absurd ca nu sunt suficiente
ˆınseamn˘a c˘a:

(cid:105)

(cid:104) n
3

camere. Aceasta

n1 >

n2 >

n3 >

(cid:105)

(cid:105)

(cid:105)

(cid:104) n
3
(cid:104) n
3
(cid:104) n
3

⇒ n1 >

⇒ n2 >

⇒ n3 >

n
3
n
3
n
3

(folosind definit¸ia p˘art¸ii ˆıntregi)

(folosind definit¸ia p˘art¸ii ˆıntregi)

(folosind definit¸ia p˘art¸ii ˆıntregi)

Algoritmi avansat¸i - C9. Triangularea poligoanelor

13 / 36

Problema galeriei de art˘a

Teorema galeriei de art˘a - justificare, exemplu

• “ˆıntotdeauna suficiente”
Not˘am cu n1, n2, n3 num˘arul de vˆarfuri colorate cu cele 3 culori, are
loc relat¸ia n1 + n2 + n3 = n.

Presupunem prin absurd ca nu sunt suficiente
ˆınseamn˘a c˘a:

(cid:105)

(cid:104) n
3

camere. Aceasta

n1 >

n2 >

n3 >

(cid:105)

(cid:105)

(cid:105)

(cid:104) n
3
(cid:104) n
3
(cid:104) n
3

⇒ n1 >

⇒ n2 >

⇒ n3 >

n
3
n
3
n
3

(folosind definit¸ia p˘art¸ii ˆıntregi)

(folosind definit¸ia p˘art¸ii ˆıntregi)

(folosind definit¸ia p˘art¸ii ˆıntregi)

Adunˆand relat¸iile obt¸inute se ajunge la relat¸ia n1 + n2 + n3 > n, ceea
(cid:105)
ce reprezint˘a o contradict¸ie. ˆIn concluzie, exist˘a i astfel ca ni ≤
.

(cid:104) n
3

Algoritmi avansat¸i - C9. Triangularea poligoanelor

13 / 36

Algoritmi de triangulare - “Ear clipping”

Triangularea unui poligon - intuit¸ie

Algoritmi avansat¸i - C9. Triangularea poligoanelor

14 / 36

Algoritmi de triangulare - “Ear clipping”

Triangularea unui poligon - algoritmul “Ear clipping”

Vˆarfuri care pot fi selectate pentru start.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

15 / 36

Algoritmi de triangulare - “Ear clipping”

Triangularea unui poligon - algoritmul “Ear clipping”

Ales un vˆarf, este considerat triunghiul determinat cu predecesorul ¸si succesorul.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

16 / 36

Algoritmi de triangulare - “Ear clipping”

Triangularea unui poligon - algoritmul “Ear clipping”

Procedura continu˘a....

Algoritmi avansat¸i - C9. Triangularea poligoanelor

17 / 36

Algoritmi de triangulare - “Ear clipping”

Triangularea unui poligon - algoritmul “Ear clipping”

... se obt¸ine o triangulare a poligonului.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

18 / 36

Algoritmi de triangulare - “Ear clipping”

Clasificarea vˆarfurilor unui poligon - convexe/concave

Vˆarfurile convexe (cerc) / concave (p˘atrat).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

19 / 36

Algoritmi de triangulare - “Ear clipping”

Clasificarea vˆarfurilor unui poligon - principale/neprincipale

Vˆarfurile principale (verde) / neprincipale (ro¸su).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

20 / 36

Algoritmi de triangulare - “Ear clipping”

Clasificarea vˆarfurilor unui poligon

Patru tipuri de vˆarfuri.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

21 / 36

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]

nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,

adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.

- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.

▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4

vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.

▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]

nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,

adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.

- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.

▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4

vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.

▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.

▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4

vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.

▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]
nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4

vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.

▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]
nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]
nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4
vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]
nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4
vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.
▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

Algoritmi de triangulare - “Ear clipping”

Metode de triangulare: ear cutting / clipping / trimming

▶ Concepte pentru un poligon P = (P1, P2, . . . , Pn):

- Vˆarf convex/concav(“reflex”): se stabile¸ste cu testul de orientare. Un vˆarf

este convex ⇔ are acela¸si tip de viraj ca vˆarful “cel mai din stˆanga”.

- Vˆarf principal: Pi este principal dac˘a [Pi−1Pi+1] este diagonal˘a (echivalent:

nu exist˘a un alt vˆarf ˆın interiorul sau pe laturile ∆Pi−1Pi Pi+1).

- Ear (vˆarf / component˘a de tip E ): este un vˆarf principal convex [Meisters,

1975]. Dac˘a Pi este component˘a de tip E , atunci segmentul [Pi−1Pi+1]
nu intersecteaz˘a laturile poligonului ¸si este situat ˆın interiorul acestuia,
adic˘a este “diagonal˘a veritabil˘a”, iar ∆Pi−1Pi Pi+1 poate fi “eliminat”.
- Mouth (vˆarf / component˘a de tip M): este un vˆarf principal concav

[Toussaint, 1991].

▶ Criterii de clasificare a vˆarfurilor: (i) vˆarf convex/concav; (ii) vˆarf principal/nu.
▶ Teorem˘a. (Two Ears Theorem [Meisters, 1975]) Orice poligon cu cel put¸in 4
vˆarfuri admite cel put¸in dou˘a componente de tip E care nu se suprapun.

▶ Corolar. Orice poligon admite (cel put¸in) o diagonal˘a.
▶ G˘asirea unei componente de tip E : complexitate O(n) [ElGindy, Everett,

Toussaint, 1993]. Se bazeaz˘a pe Two Ears Theorem!

▶ Algoritmul de triangulare bazat de metoda ear cutting: complexitate O(n2).
▶ Link despre triangul˘ari. Link pentru algoritmul Ear cutting
Algoritmi avansat¸i - C9. Triangularea poligoanelor

22 / 36

▶ Descompunerea unui poligon oarecare in componente y -monotone

poate fi realizat˘a cu un algoritm de complexitate O(n log n) [Lee,

Preparata, 1977]. ˆIn concluzie, avem urm˘atoarea

Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de

complexitate O(n log n).

▶ Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm

▶ G˘asirea unui algoritm liniar ”simplu” Problem˘a ˆın The Open Problems

liniar.

Project

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Algoritmi de triangulare eficient¸i: complexitate O(n) pentru poligoane
y -monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

23 / 36

▶ Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm

▶ G˘asirea unui algoritm liniar ”simplu” Problem˘a ˆın The Open Problems

liniar.

Project

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Algoritmi de triangulare eficient¸i: complexitate O(n) pentru poligoane
y -monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).

▶ Descompunerea unui poligon oarecare in componente y -monotone
poate fi realizat˘a cu un algoritm de complexitate O(n log n) [Lee,
Preparata, 1977]. ˆIn concluzie, avem urm˘atoarea
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
complexitate O(n log n).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

23 / 36

▶ G˘asirea unui algoritm liniar ”simplu” Problem˘a ˆın The Open Problems

Project

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Algoritmi de triangulare eficient¸i: complexitate O(n) pentru poligoane
y -monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).

▶ Descompunerea unui poligon oarecare in componente y -monotone
poate fi realizat˘a cu un algoritm de complexitate O(n log n) [Lee,
Preparata, 1977]. ˆIn concluzie, avem urm˘atoarea
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
complexitate O(n log n).

▶ Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm

liniar.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

23 / 36

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Algoritmi de triangulare eficient¸i: complexitate O(n) pentru poligoane
y -monotone [Garey et al., 1978] (algoritmul este descris pe slide-urile
urm˘atoare).

▶ Descompunerea unui poligon oarecare in componente y -monotone
poate fi realizat˘a cu un algoritm de complexitate O(n log n) [Lee,
Preparata, 1977]. ˆIn concluzie, avem urm˘atoarea
Teorem˘a. Un poligon poate fi triangulat folosind un algoritm de
complexitate O(n log n).

▶ Exist˘a ¸si alte clase de algoritmi mai rapizi; [Chazelle, 1990]: algoritm

liniar.

▶ G˘asirea unui algoritm liniar ”simplu” Problem˘a ˆın The Open Problems

Project

Algoritmi avansat¸i - C9. Triangularea poligoanelor

23 / 36

Exemplul 1

Exemplul 2

▶ Poligonul din Exemplul 1 este y -monoton: (i) poate fi parcurs de sus ˆın jos ˆın

exact dou˘a moduri, f˘ar˘a ˆıntoarceri - exist˘a dou˘a lant¸uri pe care se poate realiza

parcurgerea, (ii) orice dreapt˘a orizontal˘a intersecteaz˘a reuniunea dintre poligon ¸si

interior dup˘a o mult¸ime conex˘a (∅, punct sau segment). Poligonul din Exemplul 2

nu este y -monoton.

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Concept: poligon y -monoton

Algoritmi avansat¸i - C9. Triangularea poligoanelor

24 / 36

▶ Poligonul din Exemplul 1 este y -monoton: (i) poate fi parcurs de sus ˆın jos ˆın

exact dou˘a moduri, f˘ar˘a ˆıntoarceri - exist˘a dou˘a lant¸uri pe care se poate realiza

parcurgerea, (ii) orice dreapt˘a orizontal˘a intersecteaz˘a reuniunea dintre poligon ¸si

interior dup˘a o mult¸ime conex˘a (∅, punct sau segment). Poligonul din Exemplul 2

nu este y -monoton.

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Concept: poligon y -monoton

Exemplul 1

Exemplul 2

Algoritmi avansat¸i - C9. Triangularea poligoanelor

24 / 36

Triangularea poligoanelor - un algoritm eficient

Metode de triangulare: descompunerea ˆın poligoane
monotone

▶ Concept: poligon y -monoton

Exemplul 1

Exemplul 2

▶ Poligonul din Exemplul 1 este y -monoton: (i) poate fi parcurs de sus ˆın jos ˆın
exact dou˘a moduri, f˘ar˘a ˆıntoarceri - exist˘a dou˘a lant¸uri pe care se poate realiza

parcurgerea, (ii) orice dreapt˘a orizontal˘a intersecteaz˘a reuniunea dintre poligon ¸si

interior dup˘a o mult¸ime conex˘a (∅, punct sau segment). Poligonul din Exemplul 2

nu este y -monoton.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

24 / 36

▶ Statut al dreptei de baleiere: stiv˘a a vˆarfurilor deja ˆıntˆalnite, dar care

“mai au nevoie de diagonale” / “mai pot s˘a apar˘a ˆın triunghiuri.

(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o

diagonal˘a situat˘a “mai jos de acesta”).

▶ Evenimente: modificarea statutului. Sunt vˆarfurile poligonului, ˆın

prealabil ordonate dup˘a y ; pentru fiecare vˆarf ¸stim dac˘a este pe lant¸ul

din stˆanga sau pe cel din dreapta.

▶ Invariant: “pˆalnie” (funnel) ˆın care (i) vˆarful de sus este convex; (ii)

pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de

vˆarfuri concave.

Triangularea poligoanelor - un algoritm eficient

Metoda - paradigma dreptei de baleiere (line sweep)

▶ Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul ret¸ine o
serie de informat¸ii legate de structura geometric˘a analizat˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

25 / 36

▶ Evenimente: modificarea statutului. Sunt vˆarfurile poligonului, ˆın

prealabil ordonate dup˘a y ; pentru fiecare vˆarf ¸stim dac˘a este pe lant¸ul

din stˆanga sau pe cel din dreapta.

▶ Invariant: “pˆalnie” (funnel) ˆın care (i) vˆarful de sus este convex; (ii)

pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de

vˆarfuri concave.

Triangularea poligoanelor - un algoritm eficient

Metoda - paradigma dreptei de baleiere (line sweep)

▶ Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul ret¸ine o
serie de informat¸ii legate de structura geometric˘a analizat˘a.

▶ Statut al dreptei de baleiere: stiv˘a a vˆarfurilor deja ˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘a ˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
diagonal˘a situat˘a “mai jos de acesta”).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

25 / 36

▶ Invariant: “pˆalnie” (funnel) ˆın care (i) vˆarful de sus este convex; (ii)

pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de

vˆarfuri concave.

Triangularea poligoanelor - un algoritm eficient

Metoda - paradigma dreptei de baleiere (line sweep)

▶ Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul ret¸ine o
serie de informat¸ii legate de structura geometric˘a analizat˘a.

▶ Statut al dreptei de baleiere: stiv˘a a vˆarfurilor deja ˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘a ˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
diagonal˘a situat˘a “mai jos de acesta”).

▶ Evenimente: modificarea statutului. Sunt vˆarfurile poligonului, ˆın

prealabil ordonate dup˘a y ; pentru fiecare vˆarf ¸stim dac˘a este pe lant¸ul
din stˆanga sau pe cel din dreapta.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

25 / 36

Triangularea poligoanelor - un algoritm eficient

Metoda - paradigma dreptei de baleiere (line sweep)

▶ Se consider˘a o dreapt˘a de baleiere orizontal˘a. Algoritmul ret¸ine o
serie de informat¸ii legate de structura geometric˘a analizat˘a.

▶ Statut al dreptei de baleiere: stiv˘a a vˆarfurilor deja ˆıntˆalnite, dar care
“mai au nevoie de diagonale” / “mai pot s˘a apar˘a ˆın triunghiuri.
(Clarificare. Q: Cˆand este eliminat un vˆarf? A: Cˆand a fost trasat˘a o
diagonal˘a situat˘a “mai jos de acesta”).

▶ Evenimente: modificarea statutului. Sunt vˆarfurile poligonului, ˆın

prealabil ordonate dup˘a y ; pentru fiecare vˆarf ¸stim dac˘a este pe lant¸ul
din stˆanga sau pe cel din dreapta.

▶ Invariant: “pˆalnie” (funnel) ˆın care (i) vˆarful de sus este convex; (ii)
pe o parte: o muchie; (iii) pe cealalt˘a parte: muchie / succesiune de
vˆarfuri concave.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

25 / 36

Triangularea poligoanelor - un algoritm eficient

Evenimente - cazul 1

1. Vˆarful nou ˆıntˆalnit este pe lant¸ul opus ultimului vˆarf din stiv˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

26 / 36

Triangularea poligoanelor - un algoritm eficient

Evenimente - cazul 2a

2a. Vˆarful nou ˆıntˆalnit este pe acela¸si lant¸ cu ultimul vˆarf din stiv˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

27 / 36

Triangularea poligoanelor - un algoritm eficient

Evenimente - cazul 2b

2b. Vˆarful nou ˆıntˆalnit este pe acela¸si lant¸ cu ultimul vˆarf din stiv˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

28 / 36

Triangularea poligoanelor - un algoritm eficient

Exemplu

Algoritmi avansat¸i - C9. Triangularea poligoanelor

29 / 36

Triangularea poligoanelor - un algoritm eficient

Exemplu

Algoritmi avansat¸i - C9. Triangularea poligoanelor

30 / 36

Triangularea poligoanelor - un algoritm eficient

Exemplu

Algoritmi avansat¸i - C9. Triangularea poligoanelor

31 / 36

2.

Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

3. for j = 3 to n − 1

4.

5.

6.

7.

8.

9.

do if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite

then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul

insereaz˘a vj−1 ¸si vj ˆın S

else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

10.

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

4.

5.

6.

7.

8.

9.

3. for j = 3 to n − 1

do if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite

then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul

insereaz˘a vj−1 ¸si vj ˆın S

else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

10.

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

2.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

4.

5.

6.

7.

8.

9.

do if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite

then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul

insereaz˘a vj−1 ¸si vj ˆın S

else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

10.

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

2.
3. for j = 3 to n − 1

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

5.

6.

7.

8.

9.

then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul

insereaz˘a vj−1 ¸si vj ˆın S

else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

10.

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

2.
3. for j = 3 to n − 1
4.

do

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

6.

7.

8.

9.

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul

insereaz˘a vj−1 ¸si vj ˆın S

else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

10.

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

2.
3. for j = 3 to n − 1
4.
5.

do

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

7.

8.

9.

10.

insereaz˘a vj−1 ¸si vj ˆın S

else extrage un vˆarf din S

ˆınapoi ultimul vˆarf extras

insereaz˘a vj ˆın S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

2.
3. for j = 3 to n − 1
4.
5.
6.

do

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

8.

9.

10.

else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

do

2.
3. for j = 3 to n − 1
4.
5.
6.
7.

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul
insereaz˘a vj−1 ¸si vj ˆın S

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

9.

10.

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj

sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a

ˆınapoi ultimul vˆarf extras

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

do

2.
3. for j = 3 to n − 1
4.
5.
6.
7.
8.

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul
insereaz˘a vj−1 ¸si vj ˆın S
else extrage un vˆarf din S

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

10.

insereaz˘a vj ˆın S

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

do

2.
3. for j = 3 to n − 1
4.
5.
6.
7.
8.
9.

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul
insereaz˘a vj−1 ¸si vj ˆın S
else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj
sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
ˆınapoi ultimul vˆarf extras

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

do

2.
3. for j = 3 to n − 1
4.
5.
6.
7.
8.
9.

10.

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul
insereaz˘a vj−1 ¸si vj ˆın S
else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj
sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
ˆınapoi ultimul vˆarf extras
insereaz˘a vj ˆın S

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

Triangularea poligoanelor - un algoritm eficient

Triangularea poligoanelor monotone

Input: Un poligon y -monoton P.
Output: O triangulare a lui P.

1. Lant¸ul vˆarfurilor din partea stˆang˘a ¸si al celor din partea dreapt˘a sunt unite ˆıntr-un
singur ¸sir, ordonat descresc˘ator, dupa y (dac˘a ordonata este egal˘a, se folose¸ste
abscisa). Fie v1, v2, . . . , vn ¸sirul ordonat.
Init¸ializeaz˘a o stiv˘a vid˘a S ¸si insereaz˘a v1, v2.

do

2.
3. for j = 3 to n − 1
4.
5.
6.
7.
8.
9.

if vj ¸si vˆarful din top al lui S sunt ˆın lant¸uri diferite
then extrage toate vˆarfurile din S

insereaz˘a diagonale de la vj la vf. extrase, exceptˆand ultimul
insereaz˘a vj−1 ¸si vj ˆın S
else extrage un vˆarf din S

extrage celelalte vˆarfuri din S dac˘a diagonalele formate cu vj
sunt ˆın interiorul lui P; insereaz˘a aceste diagonale; insereaz˘a
ˆınapoi ultimul vˆarf extras
insereaz˘a vj ˆın S

10.
11. adaug˘a diagonale de la vn la vf. stivei (exceptˆand primul ¸si ultimul)

Algoritmi avansat¸i - C9. Triangularea poligoanelor

32 / 36

Triangularea poligoanelor - un algoritm eficient

Tipuri de vˆarfuri

Algoritmi avansat¸i - C9. Triangularea poligoanelor

33 / 36

Triangularea poligoanelor - un algoritm eficient

Tipuri de vˆarfuri

Algoritmi avansat¸i - C9. Triangularea poligoanelor

34 / 36

▶ Conform algoritmului descris, un poligon y -monoton poate fi

triangulat ˆın timp liniar.

▶ Teorem˘a (rezultatul principal) Un poligon cu n vˆarfuri poate fi

triangulat cu complexitatea-timp O(n log n) ¸si complexitatea-spat¸iu

O(n).

Triangularea poligoanelor - un algoritm eficient

Rezultate

▶ Folosind un algoritm bazat pe paradigma dreptei de baleiere ¸si
clasificarea vˆarfurilor indicat˘a, un poligon cu n vˆarfuri poate fi
descompus ˆın poligoane y -monotone cu un algoritm avˆand
complexitatea-timp O(n log n).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

35 / 36

▶ Teorem˘a (rezultatul principal) Un poligon cu n vˆarfuri poate fi

triangulat cu complexitatea-timp O(n log n) ¸si complexitatea-spat¸iu

O(n).

Triangularea poligoanelor - un algoritm eficient

Rezultate

▶ Folosind un algoritm bazat pe paradigma dreptei de baleiere ¸si
clasificarea vˆarfurilor indicat˘a, un poligon cu n vˆarfuri poate fi
descompus ˆın poligoane y -monotone cu un algoritm avˆand
complexitatea-timp O(n log n).

▶ Conform algoritmului descris, un poligon y -monoton poate fi

triangulat ˆın timp liniar.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

35 / 36

Triangularea poligoanelor - un algoritm eficient

Rezultate

▶ Folosind un algoritm bazat pe paradigma dreptei de baleiere ¸si
clasificarea vˆarfurilor indicat˘a, un poligon cu n vˆarfuri poate fi
descompus ˆın poligoane y -monotone cu un algoritm avˆand
complexitatea-timp O(n log n).

▶ Conform algoritmului descris, un poligon y -monoton poate fi

triangulat ˆın timp liniar.

▶ Teorem˘a (rezultatul principal) Un poligon cu n vˆarfuri poate fi

triangulat cu complexitatea-timp O(n log n) ¸si complexitatea-spat¸iu
O(n).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

35 / 36

▶ Clasificarea vˆarfurilor unui poligon (convexe/concave,

principale/neprincipale).

▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.

▶ Paradigma dreptei de baleiere.

▶ Algoritm de triangulare liniar pentru poligoane monotone. Aplicat¸ie la

algoritm de triangulare cu complexitate timp O(n log n).

Triangularea poligoanelor - un algoritm eficient

Scurt rezumat

▶ Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

36 / 36

▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.

▶ Paradigma dreptei de baleiere.

▶ Algoritm de triangulare liniar pentru poligoane monotone. Aplicat¸ie la

algoritm de triangulare cu complexitate timp O(n log n).

Triangularea poligoanelor - un algoritm eficient

Scurt rezumat

▶ Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
▶ Clasificarea vˆarfurilor unui poligon (convexe/concave,

principale/neprincipale).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

36 / 36

▶ Paradigma dreptei de baleiere.

▶ Algoritm de triangulare liniar pentru poligoane monotone. Aplicat¸ie la

algoritm de triangulare cu complexitate timp O(n log n).

Triangularea poligoanelor - un algoritm eficient

Scurt rezumat

▶ Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
▶ Clasificarea vˆarfurilor unui poligon (convexe/concave,

principale/neprincipale).

▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

36 / 36

▶ Algoritm de triangulare liniar pentru poligoane monotone. Aplicat¸ie la

algoritm de triangulare cu complexitate timp O(n log n).

Triangularea poligoanelor - un algoritm eficient

Scurt rezumat

▶ Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
▶ Clasificarea vˆarfurilor unui poligon (convexe/concave,

principale/neprincipale).

▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
▶ Paradigma dreptei de baleiere.

Algoritmi avansat¸i - C9. Triangularea poligoanelor

36 / 36

Triangularea poligoanelor - un algoritm eficient

Scurt rezumat

▶ Teorema galeriei de art˘a, exemple de aplicare (¸si la seminar).
▶ Clasificarea vˆarfurilor unui poligon (convexe/concave,

principale/neprincipale).

▶ Algoritm de triangulare (ear clipping) cu complexitate-timp p˘atratic˘a.
▶ Paradigma dreptei de baleiere.
▶ Algoritm de triangulare liniar pentru poligoane monotone. Aplicat¸ie la

algoritm de triangulare cu complexitate timp O(n log n).

Algoritmi avansat¸i - C9. Triangularea poligoanelor

36 / 36


