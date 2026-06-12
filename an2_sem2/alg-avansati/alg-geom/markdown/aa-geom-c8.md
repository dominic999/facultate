Algoritmi avansat¸i

C8 - Acoperiri convexe

Mihai-Sorin Stupariu

Sem. al II-lea, 2025 - 2026

Algoritmi avansat¸i - C8. Acoperiri convexe

1 / 30

Introducere

Introducere

Criterii numerice. Raport ¸si test de orientare

Acoperiri convexe

Algoritmi avansat¸i - C8. Acoperiri convexe

2 / 30

▶ Problem˘a (exemplu):

Cum poate fi deplasat discul din A ˆın B f˘ar˘a a atinge obstacolele?

▶ Complexitatea: memorie, timp, calcule

▶ Probleme abordate: acoperiri convexe, proximitate, intersect¸ii, c˘autare, etc.

▶ Tehnici utilizate: construct¸ii incrementale, divide et impera, plane-sweep,

transform˘ari geometrice, etc.

Introducere

Introducere

▶ Algoritmii geometrici sunt legat¸i de Geometria Computat¸ional˘a: complexitatea

computat¸ional˘a a problemelor geometrice ˆın contextul analizei algoritmilor [Lee &
Preparata, 1984]

Algoritmi avansat¸i - C8. Acoperiri convexe

2 / 30

AB▶ Complexitatea: memorie, timp, calcule

▶ Probleme abordate: acoperiri convexe, proximitate, intersect¸ii, c˘autare, etc.

▶ Tehnici utilizate: construct¸ii incrementale, divide et impera, plane-sweep,

transform˘ari geometrice, etc.

Introducere

Introducere

▶ Algoritmii geometrici sunt legat¸i de Geometria Computat¸ional˘a: complexitatea

computat¸ional˘a a problemelor geometrice ˆın contextul analizei algoritmilor [Lee &
Preparata, 1984]
▶ Problem˘a (exemplu):

Cum poate fi deplasat discul din A ˆın B f˘ar˘a a atinge obstacolele?

Algoritmi avansat¸i - C8. Acoperiri convexe

2 / 30

AB▶ Probleme abordate: acoperiri convexe, proximitate, intersect¸ii, c˘autare, etc.

▶ Tehnici utilizate: construct¸ii incrementale, divide et impera, plane-sweep,

transform˘ari geometrice, etc.

Introducere

Introducere

▶ Algoritmii geometrici sunt legat¸i de Geometria Computat¸ional˘a: complexitatea

computat¸ional˘a a problemelor geometrice ˆın contextul analizei algoritmilor [Lee &
Preparata, 1984]
▶ Problem˘a (exemplu):

Cum poate fi deplasat discul din A ˆın B f˘ar˘a a atinge obstacolele?

▶ Complexitatea: memorie, timp, calcule

Algoritmi avansat¸i - C8. Acoperiri convexe

2 / 30

AB▶ Tehnici utilizate: construct¸ii incrementale, divide et impera, plane-sweep,

transform˘ari geometrice, etc.

Introducere

Introducere

▶ Algoritmii geometrici sunt legat¸i de Geometria Computat¸ional˘a: complexitatea

computat¸ional˘a a problemelor geometrice ˆın contextul analizei algoritmilor [Lee &
Preparata, 1984]
▶ Problem˘a (exemplu):

Cum poate fi deplasat discul din A ˆın B f˘ar˘a a atinge obstacolele?

▶ Complexitatea: memorie, timp, calcule
▶ Probleme abordate: acoperiri convexe, proximitate, intersect¸ii, c˘autare, etc.

Algoritmi avansat¸i - C8. Acoperiri convexe

2 / 30

ABIntroducere

Introducere

▶ Algoritmii geometrici sunt legat¸i de Geometria Computat¸ional˘a: complexitatea

computat¸ional˘a a problemelor geometrice ˆın contextul analizei algoritmilor [Lee &
Preparata, 1984]
▶ Problem˘a (exemplu):

Cum poate fi deplasat discul din A ˆın B f˘ar˘a a atinge obstacolele?

▶ Complexitatea: memorie, timp, calcule
▶ Probleme abordate: acoperiri convexe, proximitate, intersect¸ii, c˘autare, etc.
▶ Tehnici utilizate: construct¸ii incrementale, divide et impera, plane-sweep,

transform˘ari geometrice, etc.

Algoritmi avansat¸i - C8. Acoperiri convexe

2 / 30

AB▶ Ideea de construct¸ie geometric˘a realizat˘a ˆıntr-un num˘ar finit de pa¸si:

Elementele lui Euclid

▶ Abordare numeric˘a - sistem de coordonate ˆın plan: Descartes (sec.

XVII)

▶ “Simplicitatea” construct¸iilor geometrice: Lemoine (∼ 1900)

▶ a doua jum˘atate a sec. XX: formularea / rezolvarea unor probleme de

GC; ˆın 1975 este folosit prima dat˘a termenul de Computational

Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM

Annual Symposium on Theory of Computing)

▶ Domenii de aplicabilitate: grafic˘a pe calculator, pattern recognition,

robotic˘a, statistic˘a, gestionarea bazelor de date numerice, cercet˘ari

operat¸ionale

Introducere

Introducere

▶ Note istorice:

Algoritmi avansat¸i - C8. Acoperiri convexe

3 / 30

▶ Abordare numeric˘a - sistem de coordonate ˆın plan: Descartes (sec.

XVII)

▶ “Simplicitatea” construct¸iilor geometrice: Lemoine (∼ 1900)

▶ a doua jum˘atate a sec. XX: formularea / rezolvarea unor probleme de

GC; ˆın 1975 este folosit prima dat˘a termenul de Computational

Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM

Annual Symposium on Theory of Computing)

▶ Domenii de aplicabilitate: grafic˘a pe calculator, pattern recognition,

robotic˘a, statistic˘a, gestionarea bazelor de date numerice, cercet˘ari

operat¸ionale

Introducere

Introducere

▶ Note istorice:

▶ Ideea de construct¸ie geometric˘a realizat˘a ˆıntr-un num˘ar finit de pa¸si:

Elementele lui Euclid

Algoritmi avansat¸i - C8. Acoperiri convexe

3 / 30

▶ “Simplicitatea” construct¸iilor geometrice: Lemoine (∼ 1900)

▶ a doua jum˘atate a sec. XX: formularea / rezolvarea unor probleme de

GC; ˆın 1975 este folosit prima dat˘a termenul de Computational

Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM

Annual Symposium on Theory of Computing)

▶ Domenii de aplicabilitate: grafic˘a pe calculator, pattern recognition,

robotic˘a, statistic˘a, gestionarea bazelor de date numerice, cercet˘ari

operat¸ionale

Introducere

Introducere

▶ Note istorice:

▶ Ideea de construct¸ie geometric˘a realizat˘a ˆıntr-un num˘ar finit de pa¸si:

Elementele lui Euclid

▶ Abordare numeric˘a - sistem de coordonate ˆın plan: Descartes (sec.

XVII)

Algoritmi avansat¸i - C8. Acoperiri convexe

3 / 30

▶ a doua jum˘atate a sec. XX: formularea / rezolvarea unor probleme de

GC; ˆın 1975 este folosit prima dat˘a termenul de Computational

Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM

Annual Symposium on Theory of Computing)

▶ Domenii de aplicabilitate: grafic˘a pe calculator, pattern recognition,

robotic˘a, statistic˘a, gestionarea bazelor de date numerice, cercet˘ari

operat¸ionale

Introducere

Introducere

▶ Note istorice:

▶ Ideea de construct¸ie geometric˘a realizat˘a ˆıntr-un num˘ar finit de pa¸si:

Elementele lui Euclid

▶ Abordare numeric˘a - sistem de coordonate ˆın plan: Descartes (sec.

XVII)

▶ “Simplicitatea” construct¸iilor geometrice: Lemoine (∼ 1900)

Algoritmi avansat¸i - C8. Acoperiri convexe

3 / 30

▶ Domenii de aplicabilitate: grafic˘a pe calculator, pattern recognition,

robotic˘a, statistic˘a, gestionarea bazelor de date numerice, cercet˘ari

operat¸ionale

Introducere

Introducere

▶ Note istorice:

▶ Ideea de construct¸ie geometric˘a realizat˘a ˆıntr-un num˘ar finit de pa¸si:

Elementele lui Euclid

▶ Abordare numeric˘a - sistem de coordonate ˆın plan: Descartes (sec.

XVII)

▶ “Simplicitatea” construct¸iilor geometrice: Lemoine (∼ 1900)
▶ a doua jum˘atate a sec. XX: formularea / rezolvarea unor probleme de

GC; ˆın 1975 este folosit prima dat˘a termenul de Computational
Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM
Annual Symposium on Theory of Computing)

Algoritmi avansat¸i - C8. Acoperiri convexe

3 / 30

Introducere

Introducere

▶ Note istorice:

▶ Ideea de construct¸ie geometric˘a realizat˘a ˆıntr-un num˘ar finit de pa¸si:

Elementele lui Euclid

▶ Abordare numeric˘a - sistem de coordonate ˆın plan: Descartes (sec.

XVII)

▶ “Simplicitatea” construct¸iilor geometrice: Lemoine (∼ 1900)
▶ a doua jum˘atate a sec. XX: formularea / rezolvarea unor probleme de

GC; ˆın 1975 este folosit prima dat˘a termenul de Computational
Geometry (M.I. Shamos, “Geometric Complexity”, Proc. 7th ACM
Annual Symposium on Theory of Computing)

▶ Domenii de aplicabilitate: grafic˘a pe calculator, pattern recognition,
robotic˘a, statistic˘a, gestionarea bazelor de date numerice, cercet˘ari
operat¸ionale

Algoritmi avansat¸i - C8. Acoperiri convexe

3 / 30

▶ D. Lee, F. Preparata, Computational Geometry - A Survey, IEEE

Transactions on Computers, 33 (1984), 1072-1101.

▶ B. G¨artner, M. Hoffmann, Computational Geometry. Lecture Notes,

ETH Z¨urich, 2013.

▶ J. Goodman, J. O’Rourke, C. T´oth (eds.) Handbook of Discrete and

Computational Geometry, 2017.

Bibliografie

Introducere

▶ M. de Berg, M. van Kreveld, M. Overmars si O. Schwarzkopf,

Computational Geometry, Algorithms and Applications, Springer,
2008.

▶ F. Preparata si M. Shamos, Computational Geometry: An

Introduction, Springer, 1985.

▶ S. Devadoss, J. O’Rourke, Discrete and Computational Geometry,

Princeton University Press, 2011.

(Site: http://cs.smith.edu/˜orourke/DCG/)

Algoritmi avansat¸i - C8. Acoperiri convexe

4 / 30

Bibliografie

Introducere

▶ M. de Berg, M. van Kreveld, M. Overmars si O. Schwarzkopf,

Computational Geometry, Algorithms and Applications, Springer,
2008.

▶ F. Preparata si M. Shamos, Computational Geometry: An

Introduction, Springer, 1985.

▶ S. Devadoss, J. O’Rourke, Discrete and Computational Geometry,

Princeton University Press, 2011.

(Site: http://cs.smith.edu/˜orourke/DCG/)

▶ D. Lee, F. Preparata, Computational Geometry - A Survey, IEEE

Transactions on Computers, 33 (1984), 1072-1101.

▶ B. G¨artner, M. Hoffmann, Computational Geometry. Lecture Notes,

ETH Z¨urich, 2013.

▶ J. Goodman, J. O’Rourke, C. T´oth (eds.) Handbook of Discrete and

Computational Geometry, 2017.

Algoritmi avansat¸i - C8. Acoperiri convexe

4 / 30

▶ ordonare (relativ la un sistem de coordonate)

▶ raport (independent de alegerea unui sistem de coordonate)

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

▶ Context 1D

▶ Context 2D

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

▶ ordonare (relativ la un sistem de coordonate)

▶ raport (independent de alegerea unui sistem de coordonate)

▶ Context 2D

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare
▶ Context 1D

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

▶ raport (independent de alegerea unui sistem de coordonate)

▶ Context 2D

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare
▶ Context 1D

▶ ordonare (relativ la un sistem de coordonate)

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

▶ Context 2D

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare
▶ Context 1D

▶ ordonare (relativ la un sistem de coordonate)
▶ raport (independent de alegerea unui sistem de coordonate)

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare
▶ Context 1D

▶ ordonare (relativ la un sistem de coordonate)
▶ raport (independent de alegerea unui sistem de coordonate)

▶ Context 2D

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare
▶ Context 1D

▶ ordonare (relativ la un sistem de coordonate)
▶ raport (independent de alegerea unui sistem de coordonate)

▶ Context 2D

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

Criterii numerice. Raport ¸si test de orientare

Criterii numerice − pozit¸ia relativ˘a a unor puncte

▶ Stabilirea unor relat¸ii ˆıntre puncte / ordonare
▶ Context 1D

▶ ordonare (relativ la un sistem de coordonate)
▶ raport (independent de alegerea unui sistem de coordonate)

▶ Context 2D

▶ ordonare (relativ la un sistem de coordonate − posibile alegeri:

coordonate carteziene, coordonate polare)

▶ testul de orientare (independent de alegerea unui sistem cartezian

de coordonate)

Algoritmi avansat¸i - C8. Acoperiri convexe

5 / 30

Criterii numerice. Raport ¸si test de orientare

Vectori ¸si puncte

y

O

y

A

v + w

v

w

1

2 A + 1

2 B

B

x

O

x

Combinat¸ii liniare
αv + βw (α, β ∈ R)

Combinat¸ii afine (baricentrice)
λA + µB (λ, µ ∈ R ¸si λ + µ = 1)

Algoritmi avansat¸i - C8. Acoperiri convexe

6 / 30

▶ Definit¸ie Scalarul r definit ˆın lema anterioar˘a se nume¸ste raportul

punctelor A, B, P (sau raportul ˆın care punctul P ˆımparte

segmentul [AB]) ¸si este notat cu r (A, P, B).

−−→

−−→

AP = r

PB , r > 0

−−→

−−→

AP = r

PB , r < 0

▶ Observat¸ie important˘a. ˆIn calcularea raportului, ordinea punctelor

este esent¸ial˘a. Modul ˆın care este definit˘a aceast˘a not¸iune (mai precis

ordinea ˆın care sunt considerate punctele) difer˘a de la autor la autor.

Criterii numerice. Raport ¸si test de orientare

Conceptul de raport

▶ Lem˘a Fie A ¸si B dou˘a puncte distincte ˆın Rn. Pentru orice punct
P ∈ AB, P ̸= B exist˘a un unic scalar r ∈ R \ {−1} astfel ca
−−→
AP = r
unic punct P ∈ AB.

−−→
PB . Reciproc, fiec˘arui scalar r ∈ R \ {−1}, ˆıi corespunde un

Algoritmi avansat¸i - C8. Acoperiri convexe

7 / 30

−−→

−−→

AP = r

PB , r > 0

−−→

−−→

AP = r

PB , r < 0

▶ Observat¸ie important˘a. ˆIn calcularea raportului, ordinea punctelor

este esent¸ial˘a. Modul ˆın care este definit˘a aceast˘a not¸iune (mai precis

ordinea ˆın care sunt considerate punctele) difer˘a de la autor la autor.

Criterii numerice. Raport ¸si test de orientare

Conceptul de raport

▶ Lem˘a Fie A ¸si B dou˘a puncte distincte ˆın Rn. Pentru orice punct
P ∈ AB, P ̸= B exist˘a un unic scalar r ∈ R \ {−1} astfel ca
−−→
AP = r
unic punct P ∈ AB.

−−→
PB . Reciproc, fiec˘arui scalar r ∈ R \ {−1}, ˆıi corespunde un

▶ Definit¸ie Scalarul r definit ˆın lema anterioar˘a se nume¸ste raportul

punctelor A, B, P (sau raportul ˆın care punctul P ˆımparte
segmentul [AB]) ¸si este notat cu r (A, P, B).

Algoritmi avansat¸i - C8. Acoperiri convexe

7 / 30

▶ Observat¸ie important˘a. ˆIn calcularea raportului, ordinea punctelor

este esent¸ial˘a. Modul ˆın care este definit˘a aceast˘a not¸iune (mai precis

ordinea ˆın care sunt considerate punctele) difer˘a de la autor la autor.

Criterii numerice. Raport ¸si test de orientare

Conceptul de raport

▶ Lem˘a Fie A ¸si B dou˘a puncte distincte ˆın Rn. Pentru orice punct
P ∈ AB, P ̸= B exist˘a un unic scalar r ∈ R \ {−1} astfel ca
−−→
AP = r
unic punct P ∈ AB.

−−→
PB . Reciproc, fiec˘arui scalar r ∈ R \ {−1}, ˆıi corespunde un

▶ Definit¸ie Scalarul r definit ˆın lema anterioar˘a se nume¸ste raportul

punctelor A, B, P (sau raportul ˆın care punctul P ˆımparte
segmentul [AB]) ¸si este notat cu r (A, P, B).

−−→
AP = r

−−→
PB , r > 0

−−→
AP = r

−−→
PB , r < 0

Algoritmi avansat¸i - C8. Acoperiri convexe

7 / 30

Criterii numerice. Raport ¸si test de orientare

Conceptul de raport

▶ Lem˘a Fie A ¸si B dou˘a puncte distincte ˆın Rn. Pentru orice punct
P ∈ AB, P ̸= B exist˘a un unic scalar r ∈ R \ {−1} astfel ca
−−→
AP = r
unic punct P ∈ AB.

−−→
PB . Reciproc, fiec˘arui scalar r ∈ R \ {−1}, ˆıi corespunde un

▶ Definit¸ie Scalarul r definit ˆın lema anterioar˘a se nume¸ste raportul

punctelor A, B, P (sau raportul ˆın care punctul P ˆımparte
segmentul [AB]) ¸si este notat cu r (A, P, B).

−−→
AP = r

−−→
PB , r > 0

−−→
AP = r

−−→
PB , r < 0

▶ Observat¸ie important˘a. ˆIn calcularea raportului, ordinea punctelor

este esent¸ial˘a. Modul ˆın care este definit˘a aceast˘a not¸iune (mai precis
ordinea ˆın care sunt considerate punctele) difer˘a de la autor la autor.

Algoritmi avansat¸i - C8. Acoperiri convexe

7 / 30

Criterii numerice. Raport ¸si test de orientare

Raport- exemple

(i) ˆIn R2 consider˘am punctele A = (1, 1), B = (2, 2), C = (7, 7).

Determin˘am raportul r (A, B, C ).

r =? a.ˆı.

−−→
AB = r

−−→
BC .

−−→
AB = B − A = (xB − xA, yB − yA) = (1, 1)

−−→
BC = C − B = (xC − xB , yC − yB ) = (5, 5)

−−→
AB =

1
5

−−→
BC , deci r (A, B, C ) =

1
5

.

Algoritmi avansat¸i - C8. Acoperiri convexe

8 / 30

Criterii numerice. Raport ¸si test de orientare

Raport- exemple

(ii) ˆIn R3 consider˘am punctele A = (1, 2, 3), B = (2, 1, −1), C = (0, 3, 7).
Atunci punctele A, B, C sunt coliniare ¸si avem r (A, C , B) = − 1
2 ,
r (B, C , A) = −2, r (C , A, B) = 1, r (C , B, A) = −2.

(iii) Fie A, B dou˘a puncte din Rn ¸si M = 1
r (A, M, B) = 1, r (M, A, B) = − 1
2 .

2 A + 1

2 B. Atunci

Algoritmi avansat¸i - C8. Acoperiri convexe

9 / 30

Criterii numerice. Raport ¸si test de orientare

Testul de orientare - motivat¸ie

y

O

R1

Q

P

R2

x

Pozit¸ia relativ˘a a dou˘a puncte fat¸˘a de un vector / o muchie orientat˘a

Algoritmi avansat¸i - C8. Acoperiri convexe

10 / 30

▶ Obs. Testul de orientare se bazeaz˘a pe calculul unui polinom de

gradul II (∆(P, Q, R)).

Criterii numerice. Raport ¸si test de orientare

Enunt¸ principal

▶ Propozit¸ie. Fie P = (p1, p2), Q = (q1, q2) dou˘a puncte distincte din

planul R2, fie R = (r1, r2) un punct arbitrar ¸si

∆(P, Q, R) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
1
p1 q1
p2 q2

1
r1
r2

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

.

Atunci R este situat:
(i) pe dreapta PQ ⇔ ∆(P, Q, R) = 0 (”ecuat¸ia dreptei”);

(ii) ”ˆın dreapta” segmentului orientat

(iii) ”ˆın stˆanga” segmentului orientat

−→
PQ ⇔ ∆(P, Q, R) < 0;
−→
PQ ⇔ ∆(P, Q, R) > 0.

Algoritmi avansat¸i - C8. Acoperiri convexe

11 / 30

Criterii numerice. Raport ¸si test de orientare

Enunt¸ principal

▶ Propozit¸ie. Fie P = (p1, p2), Q = (q1, q2) dou˘a puncte distincte din

planul R2, fie R = (r1, r2) un punct arbitrar ¸si

∆(P, Q, R) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
1
p1 q1
p2 q2

1
r1
r2

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

.

Atunci R este situat:
(i) pe dreapta PQ ⇔ ∆(P, Q, R) = 0 (”ecuat¸ia dreptei”);

(ii) ”ˆın dreapta” segmentului orientat

(iii) ”ˆın stˆanga” segmentului orientat

−→
PQ ⇔ ∆(P, Q, R) < 0;
−→
PQ ⇔ ∆(P, Q, R) > 0.

▶ Obs. Testul de orientare se bazeaz˘a pe calculul unui polinom de

gradul II (∆(P, Q, R)).

Algoritmi avansat¸i - C8. Acoperiri convexe

11 / 30

Avem

∆(A, B, C ) =

= 1 > 0,

(cid:12)

(cid:12)

(cid:12)

(cid:12)

(cid:12)

(cid:12)

1 1 1

0 1 0

0 0 1

(cid:12)

(cid:12)

(cid:12)

(cid:12)

(cid:12)

(cid:12)

deci conform criteriului (testului de orientare) punctul C este ˆın

stˆanga segmentului orientat

−−→

AB .

Criterii numerice. Raport ¸si test de orientare

Testul de orientare - exemplu

Algoritmi avansat¸i - C8. Acoperiri convexe

12 / 30

Criterii numerice. Raport ¸si test de orientare

Testul de orientare - exemplu

Avem

∆(A, B, C ) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1 1 1
0 1 0
0 0 1

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

= 1 > 0,

deci conform criteriului (testului de orientare) punctul C este ˆın
−−→
AB .

stˆanga segmentului orientat

Algoritmi avansat¸i - C8. Acoperiri convexe

12 / 30

(c) natura unui viraj ˆın parcurgerea unei linii poligonale (la dreapta / la

stˆanga);

(d) natura unui poligon (convex / concav).

Criterii numerice. Raport ¸si test de orientare

Aplicat¸ii

(a) dac˘a un punct este ˆın dreapta / stˆanga unei muchii orientate;
(b) dac˘a dou˘a puncte sunt de o parte ¸si de alta a unui segment / a unei

drepte;

Algoritmi avansat¸i - C8. Acoperiri convexe

13 / 30

(d) natura unui poligon (convex / concav).

Criterii numerice. Raport ¸si test de orientare

Aplicat¸ii

(a) dac˘a un punct este ˆın dreapta / stˆanga unei muchii orientate;
(b) dac˘a dou˘a puncte sunt de o parte ¸si de alta a unui segment / a unei

drepte;

(c) natura unui viraj ˆın parcurgerea unei linii poligonale (la dreapta / la

stˆanga);

Algoritmi avansat¸i - C8. Acoperiri convexe

13 / 30

Criterii numerice. Raport ¸si test de orientare

Aplicat¸ii

(a) dac˘a un punct este ˆın dreapta / stˆanga unei muchii orientate;
(b) dac˘a dou˘a puncte sunt de o parte ¸si de alta a unui segment / a unei

drepte;

(c) natura unui viraj ˆın parcurgerea unei linii poligonale (la dreapta / la

stˆanga);

(d) natura unui poligon (convex / concav).

Algoritmi avansat¸i - C8. Acoperiri convexe

13 / 30

Criterii numerice. Raport ¸si test de orientare

Limit˘ari - robustet¸e ¸si erori de rotunjire

Sursa: Kettner et al, Classroom examples of robustness problems in geometric computations, 2008

Algoritmi avansat¸i - C8. Acoperiri convexe

14 / 30

Mult¸imea din stˆanga nu este convex˘a, ˆıntrucˆat exist˘a dou˘a puncte, pentru care

segmentul determinat nu este inclus ˆın mult¸ime (punctele cu aceast˘a proprietate

nu sunt unice!).

▶ Problematizare:

Mult¸imile finite cu cel put¸in dou˘a elemente nu sunt convexe −→

necesar˘a acoperirea convex˘a.

Acoperiri convexe

Mult¸imi convexe: generalit˘at¸i

▶ Conceptul de mult¸ime convex˘a:

O mult¸ime M ⊂ Rm este convex˘a dac˘a oricare ar fi p, q ∈ M,
segmentul [pq] este inclus ˆın M.

Algoritmi avansat¸i - C8. Acoperiri convexe

15 / 30

▶ Problematizare:

Mult¸imile finite cu cel put¸in dou˘a elemente nu sunt convexe −→

necesar˘a acoperirea convex˘a.

Acoperiri convexe

Mult¸imi convexe: generalit˘at¸i

▶ Conceptul de mult¸ime convex˘a:

O mult¸ime M ⊂ Rm este convex˘a dac˘a oricare ar fi p, q ∈ M,
segmentul [pq] este inclus ˆın M.

Mult¸imea din stˆanga nu este convex˘a, ˆıntrucˆat exist˘a dou˘a puncte, pentru care

segmentul determinat nu este inclus ˆın mult¸ime (punctele cu aceast˘a proprietate

nu sunt unice!).

Algoritmi avansat¸i - C8. Acoperiri convexe

15 / 30

Acoperiri convexe

Mult¸imi convexe: generalit˘at¸i

▶ Conceptul de mult¸ime convex˘a:

O mult¸ime M ⊂ Rm este convex˘a dac˘a oricare ar fi p, q ∈ M,
segmentul [pq] este inclus ˆın M.

Mult¸imea din stˆanga nu este convex˘a, ˆıntrucˆat exist˘a dou˘a puncte, pentru care

segmentul determinat nu este inclus ˆın mult¸ime (punctele cu aceast˘a proprietate

nu sunt unice!).
▶ Problematizare:

Mult¸imile finite cu cel put¸in dou˘a elemente nu sunt convexe −→
necesar˘a acoperirea convex˘a.

Algoritmi avansat¸i - C8. Acoperiri convexe

15 / 30

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi (finite) P: concept

Algoritmi avansat¸i - C8. Acoperiri convexe

16 / 30

▶ Cea mai ”mic˘a” (ˆın sensul incluziunii) mult¸ime convex˘a care cont¸ine P.

▶ Intersect¸ia tuturor mult¸imilor convexe care cont¸in P.

▶ Mult¸imea tuturor combinat¸iilor convexe ale punctelor din P. O

combinat¸ie convex˘a a punctelor P1, P2, . . . , Pn este un punct P de

forma

P = α1P1 + . . . + αnPn, α1, . . . , αn ∈ [0, 1], α1 + . . . + αn = 1.

▶ Problematizare: Aceste caracteriz˘ari echivalente nu conduc la un

algoritm de determinare a acoperirii convexe.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: concept

▶ Caracteriz˘ari echivalente:

Algoritmi avansat¸i - C8. Acoperiri convexe

17 / 30

▶ Intersect¸ia tuturor mult¸imilor convexe care cont¸in P.

▶ Mult¸imea tuturor combinat¸iilor convexe ale punctelor din P. O

combinat¸ie convex˘a a punctelor P1, P2, . . . , Pn este un punct P de

forma

P = α1P1 + . . . + αnPn, α1, . . . , αn ∈ [0, 1], α1 + . . . + αn = 1.

▶ Problematizare: Aceste caracteriz˘ari echivalente nu conduc la un

algoritm de determinare a acoperirii convexe.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: concept

▶ Caracteriz˘ari echivalente:

▶ Cea mai ”mic˘a” (ˆın sensul incluziunii) mult¸ime convex˘a care cont¸ine P.

Algoritmi avansat¸i - C8. Acoperiri convexe

17 / 30

▶ Mult¸imea tuturor combinat¸iilor convexe ale punctelor din P. O

combinat¸ie convex˘a a punctelor P1, P2, . . . , Pn este un punct P de

forma

P = α1P1 + . . . + αnPn, α1, . . . , αn ∈ [0, 1], α1 + . . . + αn = 1.

▶ Problematizare: Aceste caracteriz˘ari echivalente nu conduc la un

algoritm de determinare a acoperirii convexe.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: concept

▶ Caracteriz˘ari echivalente:

▶ Cea mai ”mic˘a” (ˆın sensul incluziunii) mult¸ime convex˘a care cont¸ine P.
▶ Intersect¸ia tuturor mult¸imilor convexe care cont¸in P.

Algoritmi avansat¸i - C8. Acoperiri convexe

17 / 30

▶ Problematizare: Aceste caracteriz˘ari echivalente nu conduc la un

algoritm de determinare a acoperirii convexe.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: concept

▶ Caracteriz˘ari echivalente:

▶ Cea mai ”mic˘a” (ˆın sensul incluziunii) mult¸ime convex˘a care cont¸ine P.
▶ Intersect¸ia tuturor mult¸imilor convexe care cont¸in P.
▶ Mult¸imea tuturor combinat¸iilor convexe ale punctelor din P. O

combinat¸ie convex˘a a punctelor P1, P2, . . . , Pn este un punct P de
forma

P = α1P1 + . . . + αnPn, α1, . . . , αn ∈ [0, 1], α1 + . . . + αn = 1.

Algoritmi avansat¸i - C8. Acoperiri convexe

17 / 30

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: concept

▶ Caracteriz˘ari echivalente:

▶ Cea mai ”mic˘a” (ˆın sensul incluziunii) mult¸ime convex˘a care cont¸ine P.
▶ Intersect¸ia tuturor mult¸imilor convexe care cont¸in P.
▶ Mult¸imea tuturor combinat¸iilor convexe ale punctelor din P. O

combinat¸ie convex˘a a punctelor P1, P2, . . . , Pn este un punct P de
forma

P = α1P1 + . . . + αnPn, α1, . . . , αn ∈ [0, 1], α1 + . . . + αn = 1.

▶ Problematizare: Aceste caracteriz˘ari echivalente nu conduc la un

algoritm de determinare a acoperirii convexe.

Algoritmi avansat¸i - C8. Acoperiri convexe

17 / 30

▶ Cazuri particulare: d = 1 (segment); d = 2 (poligon); d = 3

(poliedru).

▶ Cazul d = 1: acoperirea convex˘a este un segment; algoritmic:

parcurgere a punctelor (complexitate O(n)).

▶ ˆIn continuare: d = 2.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: problematizare

▶ Dac˘a P ⊂ Rd este finit˘a, acoperirea sa convex˘a, Conv(P) este un

politop convex.

Algoritmi avansat¸i - C8. Acoperiri convexe

18 / 30

▶ Cazul d = 1: acoperirea convex˘a este un segment; algoritmic:

parcurgere a punctelor (complexitate O(n)).

▶ ˆIn continuare: d = 2.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: problematizare

▶ Dac˘a P ⊂ Rd este finit˘a, acoperirea sa convex˘a, Conv(P) este un

politop convex.

▶ Cazuri particulare: d = 1 (segment); d = 2 (poligon); d = 3

(poliedru).

Algoritmi avansat¸i - C8. Acoperiri convexe

18 / 30

▶ ˆIn continuare: d = 2.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: problematizare

▶ Dac˘a P ⊂ Rd este finit˘a, acoperirea sa convex˘a, Conv(P) este un

politop convex.

▶ Cazuri particulare: d = 1 (segment); d = 2 (poligon); d = 3

(poliedru).

▶ Cazul d = 1: acoperirea convex˘a este un segment; algoritmic:

parcurgere a punctelor (complexitate O(n)).

Algoritmi avansat¸i - C8. Acoperiri convexe

18 / 30

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P: problematizare

▶ Dac˘a P ⊂ Rd este finit˘a, acoperirea sa convex˘a, Conv(P) este un

politop convex.

▶ Cazuri particulare: d = 1 (segment); d = 2 (poligon); d = 3

(poliedru).

▶ Cazul d = 1: acoperirea convex˘a este un segment; algoritmic:

parcurgere a punctelor (complexitate O(n)).

▶ ˆIn continuare: d = 2.

Algoritmi avansat¸i - C8. Acoperiri convexe

18 / 30

▶ Problem˘a:

Cum determin˘am, algoritmic, vˆarfurile acestui poligon?

▶ Convent¸ie: Sensul de parcurgere a frontierei este cel trigonometric.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P (practic)

▶ De fapt, dac˘a P este finit˘a, acoperirea sa convex˘a, Conv(P) este un

poligon convex.

Algoritmi avansat¸i - C8. Acoperiri convexe

19 / 30

▶ Convent¸ie: Sensul de parcurgere a frontierei este cel trigonometric.

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P (practic)

▶ De fapt, dac˘a P este finit˘a, acoperirea sa convex˘a, Conv(P) este un

poligon convex.

▶ Problem˘a:

Cum determin˘am, algoritmic, vˆarfurile acestui poligon?

Algoritmi avansat¸i - C8. Acoperiri convexe

19 / 30

Acoperiri convexe

Acoperire convex˘a a unei mult¸imi finite P (practic)

▶ De fapt, dac˘a P este finit˘a, acoperirea sa convex˘a, Conv(P) este un

poligon convex.

▶ Problem˘a:

Cum determin˘am, algoritmic, vˆarfurile acestui poligon?

▶ Convent¸ie: Sensul de parcurgere a frontierei este cel trigonometric.

Algoritmi avansat¸i - C8. Acoperiri convexe

19 / 30

Acoperiri convexe

Un algoritm ”lent”: idee de lucru

Sunt considerate muchiile orientate.

Algoritmi avansat¸i - C8. Acoperiri convexe

20 / 30

▶ Q: Cum se decide dac˘a o muchie orientat˘a fixat˘a este pe frontier˘a?

▶ A: Toate celelalte puncte sunt ”ˆın stanga” ei (v. “testul de

orientare”).

Acoperiri convexe

Un algoritm ”lent”: idee de lucru

Sunt considerate muchiile orientate.

Algoritmi avansat¸i - C8. Acoperiri convexe

21 / 30

Acoperiri convexe

Un algoritm ”lent”: idee de lucru

Sunt considerate muchiile orientate.

▶ Q: Cum se decide dac˘a o muchie orientat˘a fixat˘a este pe frontier˘a?
▶ A: Toate celelalte puncte sunt ”ˆın stanga” ei (v. “testul de

orientare”).

Algoritmi avansat¸i - C8. Acoperiri convexe

21 / 30

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

5.

6.

7.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→

PQ

then valid ← false

if valid=true then E = E ∪ {

PQ}

−→

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

3.

4.

5.

6.

7.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→

PQ

then valid ← false

if valid=true then E = E ∪ {

PQ}

−→

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

4.

5.

6.

7.

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→

PQ

then valid ← false

if valid=true then E = E ∪ {

PQ}

−→

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

do valid ← true

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

5.

6.

7.

do if R ”ˆın dreapta” lui

−→

PQ

then valid ← false

if valid=true then E = E ∪ {

PQ}

−→

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

do valid ← true

for R ∈ P \ {P, Q}

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

6.

7.

then valid ← false

if valid=true then E = E ∪ {

PQ}

−→

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

5.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→
PQ

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

7.

if valid=true then E = E ∪ {

PQ}

−→

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

5.

6.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→
PQ

then valid ← false

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

5.

6.

7.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→
PQ

then valid ← false

if valid=true then E = E ∪ {

−→
PQ}

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

Acoperiri convexe

Un algoritm lent

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sensul trigonometric.

1. E ← ∅, L ← ∅ /*E este lista muchiilor orientate*/

2. for (P, Q) ∈ P × P cu P ̸= Q

3.

4.

5.

6.

7.

do valid ← true

for R ∈ P \ {P, Q}

do if R ”ˆın dreapta” lui

−→
PQ

then valid ← false

if valid=true then E = E ∪ {

−→
PQ}

8. din E se construie¸ste lista L a vˆarfurilor acoperirii convexe /*este

necesar ca E s˘a fie coerent˘a*/

Algoritmi avansat¸i - C8. Acoperiri convexe

22 / 30

▶ Complexitate algebric˘a: polinoame de gradul II

▶ Tratarea cazurilor degenerate: poate fi adaptat.

▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

nu returneze o list˘a coerent˘a de muchii.

Acoperiri convexe

Algoritmul ”lent”: comentarii

▶ Complexitatea: O(n3)

Algoritmi avansat¸i - C8. Acoperiri convexe

23 / 30

▶ Tratarea cazurilor degenerate: poate fi adaptat.

▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

nu returneze o list˘a coerent˘a de muchii.

Acoperiri convexe

Algoritmul ”lent”: comentarii

▶ Complexitatea: O(n3)
▶ Complexitate algebric˘a: polinoame de gradul II

Algoritmi avansat¸i - C8. Acoperiri convexe

23 / 30

▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

nu returneze o list˘a coerent˘a de muchii.

Acoperiri convexe

Algoritmul ”lent”: comentarii

▶ Complexitatea: O(n3)
▶ Complexitate algebric˘a: polinoame de gradul II
▶ Tratarea cazurilor degenerate: poate fi adaptat.

Algoritmi avansat¸i - C8. Acoperiri convexe

23 / 30

Acoperiri convexe

Algoritmul ”lent”: comentarii

▶ Complexitatea: O(n3)
▶ Complexitate algebric˘a: polinoame de gradul II
▶ Tratarea cazurilor degenerate: poate fi adaptat.
▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

nu returneze o list˘a coerent˘a de muchii.

Algoritmi avansat¸i - C8. Acoperiri convexe

23 / 30

▶ Punctele sunt mai ˆıntˆai sortate ¸si renumerotate lexicografic.

▶ Algoritmul este de tip incremental, punctele fiind ad˘augate unul cˆate

unul, fiind apoi eliminate anumite puncte.

▶ Q: Cum se decide dac˘a trei puncte sunt vˆarfuri consecutive ale

acoperirii convexe?

▶ A: Se efectueaz˘a un ”viraj la stˆanga” ˆın punctul din mijloc.

Acoperiri convexe

Graham’s scan, varianta Andrew: idee de lucru

Algoritmi avansat¸i - C8. Acoperiri convexe

24 / 30

▶ Algoritmul este de tip incremental, punctele fiind ad˘augate unul cˆate

unul, fiind apoi eliminate anumite puncte.

▶ Q: Cum se decide dac˘a trei puncte sunt vˆarfuri consecutive ale

acoperirii convexe?

▶ A: Se efectueaz˘a un ”viraj la stˆanga” ˆın punctul din mijloc.

Acoperiri convexe

Graham’s scan, varianta Andrew: idee de lucru

▶ Punctele sunt mai ˆıntˆai sortate ¸si renumerotate lexicografic.

Algoritmi avansat¸i - C8. Acoperiri convexe

24 / 30

▶ Q: Cum se decide dac˘a trei puncte sunt vˆarfuri consecutive ale

acoperirii convexe?

▶ A: Se efectueaz˘a un ”viraj la stˆanga” ˆın punctul din mijloc.

Acoperiri convexe

Graham’s scan, varianta Andrew: idee de lucru

▶ Punctele sunt mai ˆıntˆai sortate ¸si renumerotate lexicografic.
▶ Algoritmul este de tip incremental, punctele fiind ad˘augate unul cˆate

unul, fiind apoi eliminate anumite puncte.

Algoritmi avansat¸i - C8. Acoperiri convexe

24 / 30

▶ A: Se efectueaz˘a un ”viraj la stˆanga” ˆın punctul din mijloc.

Acoperiri convexe

Graham’s scan, varianta Andrew: idee de lucru

▶ Punctele sunt mai ˆıntˆai sortate ¸si renumerotate lexicografic.
▶ Algoritmul este de tip incremental, punctele fiind ad˘augate unul cˆate

unul, fiind apoi eliminate anumite puncte.

▶ Q: Cum se decide dac˘a trei puncte sunt vˆarfuri consecutive ale

acoperirii convexe?

Algoritmi avansat¸i - C8. Acoperiri convexe

24 / 30

Acoperiri convexe

Graham’s scan, varianta Andrew: idee de lucru

▶ Punctele sunt mai ˆıntˆai sortate ¸si renumerotate lexicografic.
▶ Algoritmul este de tip incremental, punctele fiind ad˘augate unul cˆate

unul, fiind apoi eliminate anumite puncte.

▶ Q: Cum se decide dac˘a trei puncte sunt vˆarfuri consecutive ale

acoperirii convexe?

▶ A: Se efectueaz˘a un ”viraj la stˆanga” ˆın punctul din mijloc.

Algoritmi avansat¸i - C8. Acoperiri convexe

24 / 30

Acoperiri convexe

Exemplu: evolut¸ia Li pe parcursul Graham’s scan - varianta Andrew

Algoritmi avansat¸i - C8. Acoperiri convexe

25 / 30

2. L ← (P1, P2)

3. for i ← 3 to n

4.

5.

6.

do adaug˘a Pi la sfˆar¸situl lui L

while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

do ¸sterge penultimul punct

7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

3. for i ← 3 to n

4.

5.

6.

do adaug˘a Pi la sfˆar¸situl lui L

while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

do ¸sterge penultimul punct

7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

do adaug˘a Pi la sfˆar¸situl lui L

while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

4.

5.

6.

do ¸sterge penultimul punct

7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

5.

6.

do ¸sterge penultimul punct

7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n
4.

do adaug˘a Pi la sfˆar¸situl lui L

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

6.

do ¸sterge penultimul punct

7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n
4.
5.

do adaug˘a Pi la sfˆar¸situl lui L
while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n
4.
5.

do adaug˘a Pi la sfˆar¸situl lui L
while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

6.

do ¸sterge penultimul punct

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n
4.
5.

do adaug˘a Pi la sfˆar¸situl lui L
while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

do ¸sterge penultimul punct

6.
7. return Li

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

9. Concateneaz˘a Li ¸si Ls

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n
4.
5.

do adaug˘a Pi la sfˆar¸situl lui L
while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

do ¸sterge penultimul punct

6.
7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

Acoperiri convexe

Graham’s scan, varianta Andrew (algoritm)

Input: O mult¸ime de puncte P din R2.
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii
convexe, parcurs˘a ˆın sens trigonometric.

1. Sortare lexicografic˘a, renumerotare P1, P2, . . . , Pn conform ordon˘arii
2. L ← (P1, P2)
3. for i ← 3 to n
4.
5.

do adaug˘a Pi la sfˆar¸situl lui L
while L are mai mult de dou˘a puncte

and ultimele trei nu determin˘a un viraj la stˆanga

do ¸sterge penultimul punct

6.
7. return Li

8. Parcurge pa¸si analogi pentru a determina Ls

9. Concateneaz˘a Li ¸si Ls

Algoritmi avansat¸i - C8. Acoperiri convexe

26 / 30

▶ Tratarea cazurilor degenerate: corect.

▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

returneze o list˘a eronat˘a (dar coerent˘a) de muchii.

Acoperiri convexe

Graham’s scan, varianta Andrew: comentarii

▶ Complexitatea: O(n log n).

Algoritmi avansat¸i - C8. Acoperiri convexe

27 / 30

▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

returneze o list˘a eronat˘a (dar coerent˘a) de muchii.

Acoperiri convexe

Graham’s scan, varianta Andrew: comentarii

▶ Complexitatea: O(n log n).
▶ Tratarea cazurilor degenerate: corect.

Algoritmi avansat¸i - C8. Acoperiri convexe

27 / 30

Acoperiri convexe

Graham’s scan, varianta Andrew: comentarii

▶ Complexitatea: O(n log n).
▶ Tratarea cazurilor degenerate: corect.
▶ Robustet¸ea: datorit˘a erorilor de rotunjire este posibil ca algoritmul s˘a

returneze o list˘a eronat˘a (dar coerent˘a) de muchii.

Algoritmi avansat¸i - C8. Acoperiri convexe

27 / 30

▶ Init¸ializare: un punct care este sigur un vˆarf al acoperirii convexe (e.g.

punctul cel mai de jos / din stˆanga / stˆanga jos).

▶ Lista se actualizeaz˘a prin determinarea succesorului: ”cel mai la

▶ Implementare: dou˘a abord˘ari (i) ordonare; (ii) testul de orientare.

▶ Complexitate: O(hn), unde h este num˘arul punctelor de pe frontiera

dreapta” punct.

acoperirii convexe.

▶ Algoritmul lui Chan “combin˘a” ideile celor doi algoritmi, ajungˆand la

complexitatea-timp O(n log h).

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

▶ Algoritm de tip incremental. Nu necesit˘a sortare prealabil˘a.

Algoritmi avansat¸i - C8. Acoperiri convexe

28 / 30

▶ Lista se actualizeaz˘a prin determinarea succesorului: ”cel mai la

▶ Implementare: dou˘a abord˘ari (i) ordonare; (ii) testul de orientare.

▶ Complexitate: O(hn), unde h este num˘arul punctelor de pe frontiera

dreapta” punct.

acoperirii convexe.

▶ Algoritmul lui Chan “combin˘a” ideile celor doi algoritmi, ajungˆand la

complexitatea-timp O(n log h).

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

▶ Algoritm de tip incremental. Nu necesit˘a sortare prealabil˘a.
▶ Init¸ializare: un punct care este sigur un vˆarf al acoperirii convexe (e.g.

punctul cel mai de jos / din stˆanga / stˆanga jos).

Algoritmi avansat¸i - C8. Acoperiri convexe

28 / 30

▶ Implementare: dou˘a abord˘ari (i) ordonare; (ii) testul de orientare.

▶ Complexitate: O(hn), unde h este num˘arul punctelor de pe frontiera

acoperirii convexe.

▶ Algoritmul lui Chan “combin˘a” ideile celor doi algoritmi, ajungˆand la

complexitatea-timp O(n log h).

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

▶ Algoritm de tip incremental. Nu necesit˘a sortare prealabil˘a.
▶ Init¸ializare: un punct care este sigur un vˆarf al acoperirii convexe (e.g.

punctul cel mai de jos / din stˆanga / stˆanga jos).

▶ Lista se actualizeaz˘a prin determinarea succesorului: ”cel mai la

dreapta” punct.

Algoritmi avansat¸i - C8. Acoperiri convexe

28 / 30

▶ Complexitate: O(hn), unde h este num˘arul punctelor de pe frontiera

acoperirii convexe.

▶ Algoritmul lui Chan “combin˘a” ideile celor doi algoritmi, ajungˆand la

complexitatea-timp O(n log h).

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

▶ Algoritm de tip incremental. Nu necesit˘a sortare prealabil˘a.
▶ Init¸ializare: un punct care este sigur un vˆarf al acoperirii convexe (e.g.

punctul cel mai de jos / din stˆanga / stˆanga jos).

▶ Lista se actualizeaz˘a prin determinarea succesorului: ”cel mai la

dreapta” punct.

▶ Implementare: dou˘a abord˘ari (i) ordonare; (ii) testul de orientare.

Algoritmi avansat¸i - C8. Acoperiri convexe

28 / 30

▶ Algoritmul lui Chan “combin˘a” ideile celor doi algoritmi, ajungˆand la

complexitatea-timp O(n log h).

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

▶ Algoritm de tip incremental. Nu necesit˘a sortare prealabil˘a.
▶ Init¸ializare: un punct care este sigur un vˆarf al acoperirii convexe (e.g.

punctul cel mai de jos / din stˆanga / stˆanga jos).

▶ Lista se actualizeaz˘a prin determinarea succesorului: ”cel mai la

dreapta” punct.

▶ Implementare: dou˘a abord˘ari (i) ordonare; (ii) testul de orientare.
▶ Complexitate: O(hn), unde h este num˘arul punctelor de pe frontiera

acoperirii convexe.

Algoritmi avansat¸i - C8. Acoperiri convexe

28 / 30

Acoperiri convexe

Jarvis’ march / Jarvis’ wrap [1973]

▶ Algoritm de tip incremental. Nu necesit˘a sortare prealabil˘a.
▶ Init¸ializare: un punct care este sigur un vˆarf al acoperirii convexe (e.g.

punctul cel mai de jos / din stˆanga / stˆanga jos).

▶ Lista se actualizeaz˘a prin determinarea succesorului: ”cel mai la

dreapta” punct.

▶ Implementare: dou˘a abord˘ari (i) ordonare; (ii) testul de orientare.
▶ Complexitate: O(hn), unde h este num˘arul punctelor de pe frontiera

acoperirii convexe.

▶ Algoritmul lui Chan “combin˘a” ideile celor doi algoritmi, ajungˆand la

complexitatea-timp O(n log h).

Algoritmi avansat¸i - C8. Acoperiri convexe

28 / 30

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

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

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

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

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

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true
3. while valid= true

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

do if Pi este la dreapta muchiei orientate Ak S

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

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.

do alege un pivot arbitrar S ∈ P, diferit de Ak

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

do if Pi este la dreapta muchiei orientate Ak S

6.

7.

8.

9.

then S ← Pi

if S ̸= A1

then k ← k + 1;

Ak = S

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

7.

8.

9.

then S ← Pi

if S ̸= A1

then k ← k + 1;

Ak = S

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.
6.

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

do if Pi este la dreapta muchiei orientate Ak S

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

8.

9.

if S ̸= A1

then k ← k + 1;

Ak = S

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.
6.
7.

then S ← Pi

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

do if Pi este la dreapta muchiei orientate Ak S

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

9.

then k ← k + 1;

Ak = S

adaug˘a Ak la L

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.
6.
7.
8.

then S ← Pi

if S ̸= A1

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

do if Pi este la dreapta muchiei orientate Ak S

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

10.

else valid ← false

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

do if Pi este la dreapta muchiei orientate Ak S

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.
6.
7.
8.
9.

then S ← Pi

if S ̸= A1

then k ← k + 1;
Ak = S
adaug˘a Ak la L

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

11. return L

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

do if Pi este la dreapta muchiei orientate Ak S

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.
6.
7.
8.
9.

then S ← Pi

if S ̸= A1

then k ← k + 1;
Ak = S
adaug˘a Ak la L

10.

else valid ← false

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

Acoperiri convexe

Jarvis’ march (algoritm)

Input: O mult¸ime de puncte necoliniare P = {P1, P2, . . . , Pn} din R2 (n ≥ 3).
Output: O list˘a L care cont¸ine vˆarfurile ce determin˘a frontiera acoperirii convexe,
parcurs˘a ˆın sens trigonometric.

1. Determinarea unui punct din P care apart¸ine frontierei (de exemplu cel mai mic,

folosind ordinea lexicografic˘a); acest punct este notat cu A1.

do alege un pivot arbitrar S ∈ P, diferit de Ak
for i ← 1 to n

do if Pi este la dreapta muchiei orientate Ak S

2. k ← 1; L ← (A1); valid ← true
3. while valid= true
4.
5.
6.
7.
8.
9.

then S ← Pi

if S ̸= A1

then k ← k + 1;
Ak = S
adaug˘a Ak la L

10.
11. return L

else valid ← false

Algoritmi avansat¸i - C8. Acoperiri convexe

29 / 30

▶ Pot fi stabilite leg˘aturi cu algoritmi studiat¸i ˆın alt context. De

exemplu: Traveling Salesman Problem, ˆın context euclidian (costurile

sunt date de distant¸ele dintre puncte). ˆIn acest caz, ordinea ˆın care

nodurile de pe frontier˘a apar ˆın traseul optim coincide cu ordinea ˆın

care acestea apar ˆın parcurgerea frontierei acoperirii convexe -

exemplu.

▶ Algoritmi pentru spat¸ii euclidiene de dimensiune m ≥ 3.

▶ Algoritmi eficient¸i pentru determinarea acoperirii convexe pentru

vˆarfurile unui poligon arbitrar.

▶ Algoritmi dinamici (on-line, real-time, convex hull maintenance).

Acoperiri convexe

Alte direct¸ii de lucru

▶ Aplicat¸ii: grafic˘a pe calculator, robotic˘a, GIS, recunoa¸sterea
formelor, gestionarea bazelor de date multi-dimensionale, etc.

Algoritmi avansat¸i - C8. Acoperiri convexe

30 / 30

▶ Algoritmi pentru spat¸ii euclidiene de dimensiune m ≥ 3.

▶ Algoritmi eficient¸i pentru determinarea acoperirii convexe pentru

vˆarfurile unui poligon arbitrar.

▶ Algoritmi dinamici (on-line, real-time, convex hull maintenance).

Acoperiri convexe

Alte direct¸ii de lucru

▶ Aplicat¸ii: grafic˘a pe calculator, robotic˘a, GIS, recunoa¸sterea
formelor, gestionarea bazelor de date multi-dimensionale, etc.
▶ Pot fi stabilite leg˘aturi cu algoritmi studiat¸i ˆın alt context. De

exemplu: Traveling Salesman Problem, ˆın context euclidian (costurile
sunt date de distant¸ele dintre puncte). ˆIn acest caz, ordinea ˆın care
nodurile de pe frontier˘a apar ˆın traseul optim coincide cu ordinea ˆın
care acestea apar ˆın parcurgerea frontierei acoperirii convexe -
exemplu.

Algoritmi avansat¸i - C8. Acoperiri convexe

30 / 30

▶ Algoritmi eficient¸i pentru determinarea acoperirii convexe pentru

vˆarfurile unui poligon arbitrar.

▶ Algoritmi dinamici (on-line, real-time, convex hull maintenance).

Acoperiri convexe

Alte direct¸ii de lucru

▶ Aplicat¸ii: grafic˘a pe calculator, robotic˘a, GIS, recunoa¸sterea
formelor, gestionarea bazelor de date multi-dimensionale, etc.
▶ Pot fi stabilite leg˘aturi cu algoritmi studiat¸i ˆın alt context. De

exemplu: Traveling Salesman Problem, ˆın context euclidian (costurile
sunt date de distant¸ele dintre puncte). ˆIn acest caz, ordinea ˆın care
nodurile de pe frontier˘a apar ˆın traseul optim coincide cu ordinea ˆın
care acestea apar ˆın parcurgerea frontierei acoperirii convexe -
exemplu.

▶ Algoritmi pentru spat¸ii euclidiene de dimensiune m ≥ 3.

Algoritmi avansat¸i - C8. Acoperiri convexe

30 / 30

▶ Algoritmi dinamici (on-line, real-time, convex hull maintenance).

Acoperiri convexe

Alte direct¸ii de lucru

▶ Aplicat¸ii: grafic˘a pe calculator, robotic˘a, GIS, recunoa¸sterea
formelor, gestionarea bazelor de date multi-dimensionale, etc.
▶ Pot fi stabilite leg˘aturi cu algoritmi studiat¸i ˆın alt context. De

exemplu: Traveling Salesman Problem, ˆın context euclidian (costurile
sunt date de distant¸ele dintre puncte). ˆIn acest caz, ordinea ˆın care
nodurile de pe frontier˘a apar ˆın traseul optim coincide cu ordinea ˆın
care acestea apar ˆın parcurgerea frontierei acoperirii convexe -
exemplu.

▶ Algoritmi pentru spat¸ii euclidiene de dimensiune m ≥ 3.
▶ Algoritmi eficient¸i pentru determinarea acoperirii convexe pentru

vˆarfurile unui poligon arbitrar.

Algoritmi avansat¸i - C8. Acoperiri convexe

30 / 30

Acoperiri convexe

Alte direct¸ii de lucru

▶ Aplicat¸ii: grafic˘a pe calculator, robotic˘a, GIS, recunoa¸sterea
formelor, gestionarea bazelor de date multi-dimensionale, etc.
▶ Pot fi stabilite leg˘aturi cu algoritmi studiat¸i ˆın alt context. De

exemplu: Traveling Salesman Problem, ˆın context euclidian (costurile
sunt date de distant¸ele dintre puncte). ˆIn acest caz, ordinea ˆın care
nodurile de pe frontier˘a apar ˆın traseul optim coincide cu ordinea ˆın
care acestea apar ˆın parcurgerea frontierei acoperirii convexe -
exemplu.

▶ Algoritmi pentru spat¸ii euclidiene de dimensiune m ≥ 3.
▶ Algoritmi eficient¸i pentru determinarea acoperirii convexe pentru

vˆarfurile unui poligon arbitrar.

▶ Algoritmi dinamici (on-line, real-time, convex hull maintenance).

Algoritmi avansat¸i - C8. Acoperiri convexe

30 / 30


