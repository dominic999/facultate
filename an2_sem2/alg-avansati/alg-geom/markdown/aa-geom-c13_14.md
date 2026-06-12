Algoritmi avansat¸i

C13, 14 - Elemente de programare liniar˘a

Mihai-Sorin Stupariu

Sem. al II-lea, 2025-2026

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

1 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - abordare cantitativ˘a

Dualitate

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

2 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Turnarea pieselor ˆın matrit¸e

Matrit¸˘a M

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

3 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Turnarea pieselor ˆın matrit¸e

Piesa turnat˘a P

Matrit¸˘a M

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

4 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Turnarea pieselor ˆın matrit¸e

Fat¸a superioar˘a a lui P

Piesa turnat˘a P

Matrit¸˘a M

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

5 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Turnarea pieselor ˆın matrit¸e

Fet¸e standard

Fat¸a superioar˘a a lui P

Piesa turnat˘a P

Matrit¸˘a M

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

6 / 45

▶ Neajunsuri: unele obiecte pot r˘amˆane blocate; exist˘a obiecte pentru

care nu exist˘a o matrit¸˘a adecvat˘a.

▶ Problema studiat˘a. Dat un obiect, exist˘a o matrit¸˘a din care s˘a

poat˘a fi extras (¸si dac˘a da, cu un algoritm eficient?)

Sursa: https://www.graphics.rwth-aachen.de/publication/03149/

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Problematizare

▶ Turnarea pieselor ˆın matrit¸e ¸si extragerea lor f˘ar˘a distrugerea matrit¸ei.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

7 / 45

▶ Problema studiat˘a. Dat un obiect, exist˘a o matrit¸˘a din care s˘a

poat˘a fi extras (¸si dac˘a da, cu un algoritm eficient?)

Sursa: https://www.graphics.rwth-aachen.de/publication/03149/

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Problematizare

▶ Turnarea pieselor ˆın matrit¸e ¸si extragerea lor f˘ar˘a distrugerea matrit¸ei.
▶ Neajunsuri: unele obiecte pot r˘amˆane blocate; exist˘a obiecte pentru

care nu exist˘a o matrit¸˘a adecvat˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

7 / 45

▶ Problema studiat˘a. Dat un obiect, exist˘a o matrit¸˘a din care s˘a

poat˘a fi extras (¸si dac˘a da, cu un algoritm eficient?)

Sursa: https://www.graphics.rwth-aachen.de/publication/03149/

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Problematizare

▶ Turnarea pieselor ˆın matrit¸e ¸si extragerea lor f˘ar˘a distrugerea matrit¸ei.
▶ Neajunsuri: unele obiecte pot r˘amˆane blocate; exist˘a obiecte pentru

care nu exist˘a o matrit¸˘a adecvat˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

7 / 45

Sursa: https://www.graphics.rwth-aachen.de/publication/03149/

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Problematizare

▶ Turnarea pieselor ˆın matrit¸e ¸si extragerea lor f˘ar˘a distrugerea matrit¸ei.
▶ Neajunsuri: unele obiecte pot r˘amˆane blocate; exist˘a obiecte pentru

care nu exist˘a o matrit¸˘a adecvat˘a.

▶ Problema studiat˘a. Dat un obiect, exist˘a o matrit¸˘a din care s˘a

poat˘a fi extras (¸si dac˘a da, cu un algoritm eficient?)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

7 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Problematizare

▶ Turnarea pieselor ˆın matrit¸e ¸si extragerea lor f˘ar˘a distrugerea matrit¸ei.
▶ Neajunsuri: unele obiecte pot r˘amˆane blocate; exist˘a obiecte pentru

care nu exist˘a o matrit¸˘a adecvat˘a.

▶ Problema studiat˘a. Dat un obiect, exist˘a o matrit¸˘a din care s˘a

poat˘a fi extras (¸si dac˘a da, cu un algoritm eficient?)

Sursa: https://www.graphics.rwth-aachen.de/publication/03149/

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

7 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Convent¸ii

▶ Obiectele: poliedrale. Matrit¸ele: formate dintr-o singur˘a pies˘a;

fiec˘arui obiect P ˆıi este asociat˘a o matrit¸˘a MP

▶ Obiectul: extras printr-o singur˘a translat¸ie (sau o succesiune de

translat¸ii)

▶ Alegerea orient˘arii: diverse orient˘ari ale obiectului pot genera

diverse matrit¸e, astfel ˆıncˆat doar ˆın unele configurat¸ii este posibil˘a
extragerea obiectului

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

8 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Convent¸ii

▶ Obiectele: poliedrale. Matrit¸ele: formate dintr-o singur˘a pies˘a;

fiec˘arui obiect P ˆıi este asociat˘a o matrit¸˘a MP

▶ Obiectul: extras printr-o singur˘a translat¸ie (sau o succesiune de

translat¸ii)

▶ Alegerea orient˘arii: diverse orient˘ari ale obiectului pot genera

diverse matrit¸e, astfel ˆıncˆat doar ˆın unele configurat¸ii este posibil˘a
extragerea obiectului

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

8 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Terminologie ¸si convent¸ii (I)

Fat¸a superioar˘a: prin
convent¸ie, obiectele au
(cel put¸in) o fat¸˘a
superioar˘a (este
orizontal˘a, este singura
care nu este adiacent˘a cu
matrit¸a).
Celelalte fet¸e: standard;
orice fat¸˘a standard f a
obiectului corespunde unei
fet¸e standard ˆf a matrit¸ei.

Fet¸e standard

Fat¸a superioar˘a a lui P

Piesa turnat˘a P

Matrit¸˘a M

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

9 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Terminologie ¸si convent¸ii (II)

Obiect care poate fi turnat
(castable): exist˘a o orientare pentru
care acesta poate fi turnat ¸si apoi
extras printr-o translat¸ie (succesiune
de translat¸ii): direct¸ie admisibil˘a.
Convent¸ii: Matrit¸a este
paralelipipedic˘a ¸si are o cavitate
corespunz˘atoare obiectului; fat¸a
superioar˘a a obiectului (¸si a matrit¸ei)
este perpendicular˘a cu planul Oxy .

Obiectul din figur˘a (ˆın form˘a de T) poate fi turnat.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

10 / 45

ˆIn figura din stˆanga fat¸a ˆf1 a matrit¸ei (corespunz˘atoare fet¸ei f1 a piesei) blocheaz˘a

extragerea ˆın direct¸ia

d . Acest fapt este echivalent cu

−→

m(∠(

−→

ν (f1),

−→

d )) < 90◦ ⇔ cos(∠(

−→

ν (f1),

−→

d ) > 0.

ˆIn figura din dreapta fat¸a ˆf2 a matrit¸ei (corespunz˘atoare fet¸ei f2 a piesei) nu

blocheaz˘a extragerea ˆın direct¸ia

d . Acest fapt este echivalent cu

m(∠(

−→

ν (f2),

−→

d )) ≥ 90◦ ⇔ cos(∠(

−→

ν (f2),

−→

d ) ≤ 0.

−→

Am notat cu

−→

ν (f1),

−→

ν (f2) normalele exterioare la fet¸ele f1, respectiv f2.

Condit¸iile referitoare la unghiuri indicate mai sus trebuie verificate pentru toate

fet¸ele!

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Descrierea propriet˘at¸ii de a putea extrage o pies˘a ˆıntr-o
direct¸ie dat˘a

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

11 / 45

Condit¸iile referitoare la unghiuri indicate mai sus trebuie verificate pentru toate

fet¸ele!

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Descrierea propriet˘at¸ii de a putea extrage o pies˘a ˆıntr-o
direct¸ie dat˘a

ˆIn figura din stˆanga fat¸a ˆf1 a matrit¸ei (corespunz˘atoare fet¸ei f1 a piesei) blocheaz˘a

extragerea ˆın direct¸ia
m(∠(

−→
d . Acest fapt este echivalent cu
−→
−→
d )) < 90◦ ⇔ cos(∠(
ν (f1),

−→
ν (f1),

−→
d ) > 0.

ˆIn figura din dreapta fat¸a ˆf2 a matrit¸ei (corespunz˘atoare fet¸ei f2 a piesei) nu

blocheaz˘a extragerea ˆın direct¸ia
−→
d )) ≥ 90◦ ⇔ cos(∠(

−→
ν (f2),

m(∠(

−→
ν (f2),

−→
d ) ≤ 0.

−→
d . Acest fapt este echivalent cu

Am notat cu

−→
ν (f1),

−→
ν (f2) normalele exterioare la fet¸ele f1, respectiv f2.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

11 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Descrierea propriet˘at¸ii de a putea extrage o pies˘a ˆıntr-o
direct¸ie dat˘a

ˆIn figura din stˆanga fat¸a ˆf1 a matrit¸ei (corespunz˘atoare fet¸ei f1 a piesei) blocheaz˘a

extragerea ˆın direct¸ia
m(∠(

−→
d . Acest fapt este echivalent cu
−→
−→
d )) < 90◦ ⇔ cos(∠(
ν (f1),

−→
ν (f1),

−→
d ) > 0.

ˆIn figura din dreapta fat¸a ˆf2 a matrit¸ei (corespunz˘atoare fet¸ei f2 a piesei) nu

blocheaz˘a extragerea ˆın direct¸ia
−→
d )) ≥ 90◦ ⇔ cos(∠(

−→
ν (f2),

m(∠(

−→
ν (f2),

−→
d ) ≤ 0.

−→
d . Acest fapt este echivalent cu

Am notat cu

−→
ν (f1),

−→
ν (f2) normalele exterioare la fet¸ele f1, respectiv f2.

Condit¸iile referitoare la unghiuri indicate mai sus trebuie verificate pentru toate

fet¸ele!

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

11 / 45

▶ Fie f o fat¸˘a a obiectului,

−→

ν (f ) = (νx , νy , νz ). Faptul c˘a fat¸a

corespunz˘atoare ˆf a matrit¸ei nu blocheaz˘a extragerea ˆın direct¸ia

revine la

−→

⟨

ν (f ),

−→

d ⟩ ≤ 0 ⇔

νx · dx + νy · dy + νz ≤ 0.

−→

d

(1)

▶ Fixat˘a o fat¸˘a f (informat¸ia relevant˘a fiind νx , νy , νz ) c˘aut˘am

−→

d = (dx , dy ) astfel ˆıncˆat s˘a fie verificat˘a relat¸ia (1). Aceasta este o

inegalitate care descrie un hiperplan.

▶ Condit¸iile indicate mai sus trebuie verificate pentru toate fet¸ele!

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Detaliere (scriere ˆın coordonate)

▶ Cum vrem s˘a extragem obiectul din matrit¸˘a “ˆın sus”, putem

presupune f.r.g. c˘a

−→
d = (dx , dy , 1) (de ce?).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

12 / 45

▶ Fixat˘a o fat¸˘a f (informat¸ia relevant˘a fiind νx , νy , νz ) c˘aut˘am

−→

d = (dx , dy ) astfel ˆıncˆat s˘a fie verificat˘a relat¸ia (1). Aceasta este o

inegalitate care descrie un hiperplan.

▶ Condit¸iile indicate mai sus trebuie verificate pentru toate fet¸ele!

−→
d

(1)

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Detaliere (scriere ˆın coordonate)

▶ Cum vrem s˘a extragem obiectul din matrit¸˘a “ˆın sus”, putem

presupune f.r.g. c˘a
▶ Fie f o fat¸˘a a obiectului,

−→
d = (dx , dy , 1) (de ce?).

−→
ν (f ) = (νx , νy , νz ). Faptul c˘a fat¸a

corespunz˘atoare ˆf a matrit¸ei nu blocheaz˘a extragerea ˆın direct¸ia
revine la

−→
ν (f ),

⟨

−→
d ⟩ ≤ 0 ⇔

νx · dx + νy · dy + νz ≤ 0.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

12 / 45

▶ Condit¸iile indicate mai sus trebuie verificate pentru toate fet¸ele!

−→
d

(1)

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Detaliere (scriere ˆın coordonate)

▶ Cum vrem s˘a extragem obiectul din matrit¸˘a “ˆın sus”, putem

presupune f.r.g. c˘a
▶ Fie f o fat¸˘a a obiectului,

−→
d = (dx , dy , 1) (de ce?).

−→
ν (f ) = (νx , νy , νz ). Faptul c˘a fat¸a

corespunz˘atoare ˆf a matrit¸ei nu blocheaz˘a extragerea ˆın direct¸ia
revine la

−→
ν (f ),

⟨

−→
d ⟩ ≤ 0 ⇔

νx · dx + νy · dy + νz ≤ 0.

▶ Fixat˘a o fat¸˘a f (informat¸ia relevant˘a fiind νx , νy , νz ) c˘aut˘am

−→
d = (dx , dy ) astfel ˆıncˆat s˘a fie verificat˘a relat¸ia (1). Aceasta este o
inegalitate care descrie un hiperplan.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

12 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Detaliere (scriere ˆın coordonate)

▶ Cum vrem s˘a extragem obiectul din matrit¸˘a “ˆın sus”, putem

presupune f.r.g. c˘a
▶ Fie f o fat¸˘a a obiectului,

−→
d = (dx , dy , 1) (de ce?).

−→
ν (f ) = (νx , νy , νz ). Faptul c˘a fat¸a

corespunz˘atoare ˆf a matrit¸ei nu blocheaz˘a extragerea ˆın direct¸ia
revine la

−→
ν (f ),

⟨

−→
d ⟩ ≤ 0 ⇔

νx · dx + νy · dy + νz ≤ 0.

−→
d

(1)

▶ Fixat˘a o fat¸˘a f (informat¸ia relevant˘a fiind νx , νy , νz ) c˘aut˘am

−→
d = (dx , dy ) astfel ˆıncˆat s˘a fie verificat˘a relat¸ia (1). Aceasta este o
inegalitate care descrie un hiperplan.

▶ Condit¸iile indicate mai sus trebuie verificate pentru toate fet¸ele!

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

12 / 45

▶ Propozit¸ie. Un poliedru P poate fi extras din matrit¸a sa MP prin translat¸ie ˆın

direct¸ia ⃗d dac˘a ¸si numai dac˘a ⃗d face un unghi de cel put¸in 90◦ cu normala

exterioar˘a a fiec˘arei fet¸e standard a lui P.

▶ Reformulare. Dat P, trebuie g˘asit˘a o direct¸ie ⃗d astfel ˆıncˆat, pentru fiecare fat¸˘a

standard f , unghiul dintre ⃗d ¸si ⃗ν(f ) s˘a fie cel put¸in 90◦.

▶ Analitic - pentru o fat¸˘a: fiecare fat¸˘a define¸ste un semiplan, i.e. dat˘a o fat¸˘a

standard f a poliedrului / matrit¸ei, a g˘asi o direct¸ie admisibil˘a revine la a rezolva o

inecuat¸ie de tipul (1), care corespunde unui semiplan.

▶ Analitic - toate fet¸ele: Fie P un poliedru; fat¸a superioar˘a fixat˘a, paralel˘a cu

planul Oxy . Consider˘am matrit¸a asociat˘a ¸si toate fet¸ele matrit¸ei (i.e. toate fet¸ele

standard ale poliedrului). A determina o direct¸ie admisibil˘a revine la a determina o

direct¸ie care verific˘a toate inegalit˘at¸ile de tip (1), deci un sistem de inecuat¸ii.

▶ Concluzie: Pentru a stabili dac˘a exist˘a o direct¸ie admisibil˘a, trebuie stabilit dac˘a o

intersect¸ie de semiplane este nevid˘a.

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Sintez˘a - fundamente geometrice

▶ Context: direct¸ia de extragere ⃗d are componenta z pozitiv˘a.
▶ ˆIn general: o fat¸˘a standard ˆf a matrit¸ei (corespunz˘atoare unei fet¸e f a piesei)

pentru care unghiul dintre normala exterioar˘a ⃗ν(f ) la fat¸˘a f ¸si ⃗d este mai mic de
90◦ ˆımpiedic˘a translat¸ia ˆın direct¸ia ⃗d.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

13 / 45

▶ Analitic - pentru o fat¸˘a: fiecare fat¸˘a define¸ste un semiplan, i.e. dat˘a o fat¸˘a

standard f a poliedrului / matrit¸ei, a g˘asi o direct¸ie admisibil˘a revine la a rezolva o

inecuat¸ie de tipul (1), care corespunde unui semiplan.

▶ Analitic - toate fet¸ele: Fie P un poliedru; fat¸a superioar˘a fixat˘a, paralel˘a cu

planul Oxy . Consider˘am matrit¸a asociat˘a ¸si toate fet¸ele matrit¸ei (i.e. toate fet¸ele

standard ale poliedrului). A determina o direct¸ie admisibil˘a revine la a determina o

direct¸ie care verific˘a toate inegalit˘at¸ile de tip (1), deci un sistem de inecuat¸ii.

▶ Concluzie: Pentru a stabili dac˘a exist˘a o direct¸ie admisibil˘a, trebuie stabilit dac˘a o

intersect¸ie de semiplane este nevid˘a.

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Sintez˘a - fundamente geometrice

▶ Context: direct¸ia de extragere ⃗d are componenta z pozitiv˘a.
▶ ˆIn general: o fat¸˘a standard ˆf a matrit¸ei (corespunz˘atoare unei fet¸e f a piesei)

pentru care unghiul dintre normala exterioar˘a ⃗ν(f ) la fat¸˘a f ¸si ⃗d este mai mic de
90◦ ˆımpiedic˘a translat¸ia ˆın direct¸ia ⃗d.

▶ Propozit¸ie. Un poliedru P poate fi extras din matrit¸a sa MP prin translat¸ie ˆın
direct¸ia ⃗d dac˘a ¸si numai dac˘a ⃗d face un unghi de cel put¸in 90◦ cu normala
exterioar˘a a fiec˘arei fet¸e standard a lui P.

▶ Reformulare. Dat P, trebuie g˘asit˘a o direct¸ie ⃗d astfel ˆıncˆat, pentru fiecare fat¸˘a

standard f , unghiul dintre ⃗d ¸si ⃗ν(f ) s˘a fie cel put¸in 90◦.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

13 / 45

▶ Analitic - toate fet¸ele: Fie P un poliedru; fat¸a superioar˘a fixat˘a, paralel˘a cu

planul Oxy . Consider˘am matrit¸a asociat˘a ¸si toate fet¸ele matrit¸ei (i.e. toate fet¸ele

standard ale poliedrului). A determina o direct¸ie admisibil˘a revine la a determina o

direct¸ie care verific˘a toate inegalit˘at¸ile de tip (1), deci un sistem de inecuat¸ii.

▶ Concluzie: Pentru a stabili dac˘a exist˘a o direct¸ie admisibil˘a, trebuie stabilit dac˘a o

intersect¸ie de semiplane este nevid˘a.

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Sintez˘a - fundamente geometrice

▶ Context: direct¸ia de extragere ⃗d are componenta z pozitiv˘a.
▶ ˆIn general: o fat¸˘a standard ˆf a matrit¸ei (corespunz˘atoare unei fet¸e f a piesei)

pentru care unghiul dintre normala exterioar˘a ⃗ν(f ) la fat¸˘a f ¸si ⃗d este mai mic de
90◦ ˆımpiedic˘a translat¸ia ˆın direct¸ia ⃗d.

▶ Propozit¸ie. Un poliedru P poate fi extras din matrit¸a sa MP prin translat¸ie ˆın
direct¸ia ⃗d dac˘a ¸si numai dac˘a ⃗d face un unghi de cel put¸in 90◦ cu normala
exterioar˘a a fiec˘arei fet¸e standard a lui P.

▶ Reformulare. Dat P, trebuie g˘asit˘a o direct¸ie ⃗d astfel ˆıncˆat, pentru fiecare fat¸˘a

standard f , unghiul dintre ⃗d ¸si ⃗ν(f ) s˘a fie cel put¸in 90◦.

▶ Analitic - pentru o fat¸˘a: fiecare fat¸˘a define¸ste un semiplan, i.e. dat˘a o fat¸˘a

standard f a poliedrului / matrit¸ei, a g˘asi o direct¸ie admisibil˘a revine la a rezolva o
inecuat¸ie de tipul (1), care corespunde unui semiplan.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

13 / 45

▶ Concluzie: Pentru a stabili dac˘a exist˘a o direct¸ie admisibil˘a, trebuie stabilit dac˘a o

intersect¸ie de semiplane este nevid˘a.

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Sintez˘a - fundamente geometrice

▶ Context: direct¸ia de extragere ⃗d are componenta z pozitiv˘a.
▶ ˆIn general: o fat¸˘a standard ˆf a matrit¸ei (corespunz˘atoare unei fet¸e f a piesei)

pentru care unghiul dintre normala exterioar˘a ⃗ν(f ) la fat¸˘a f ¸si ⃗d este mai mic de
90◦ ˆımpiedic˘a translat¸ia ˆın direct¸ia ⃗d.

▶ Propozit¸ie. Un poliedru P poate fi extras din matrit¸a sa MP prin translat¸ie ˆın
direct¸ia ⃗d dac˘a ¸si numai dac˘a ⃗d face un unghi de cel put¸in 90◦ cu normala
exterioar˘a a fiec˘arei fet¸e standard a lui P.

▶ Reformulare. Dat P, trebuie g˘asit˘a o direct¸ie ⃗d astfel ˆıncˆat, pentru fiecare fat¸˘a

standard f , unghiul dintre ⃗d ¸si ⃗ν(f ) s˘a fie cel put¸in 90◦.

▶ Analitic - pentru o fat¸˘a: fiecare fat¸˘a define¸ste un semiplan, i.e. dat˘a o fat¸˘a

standard f a poliedrului / matrit¸ei, a g˘asi o direct¸ie admisibil˘a revine la a rezolva o
inecuat¸ie de tipul (1), care corespunde unui semiplan.

▶ Analitic - toate fet¸ele: Fie P un poliedru; fat¸a superioar˘a fixat˘a, paralel˘a cu

planul Oxy . Consider˘am matrit¸a asociat˘a ¸si toate fet¸ele matrit¸ei (i.e. toate fet¸ele
standard ale poliedrului). A determina o direct¸ie admisibil˘a revine la a determina o
direct¸ie care verific˘a toate inegalit˘at¸ile de tip (1), deci un sistem de inecuat¸ii.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

13 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Sintez˘a - fundamente geometrice

▶ Context: direct¸ia de extragere ⃗d are componenta z pozitiv˘a.
▶ ˆIn general: o fat¸˘a standard ˆf a matrit¸ei (corespunz˘atoare unei fet¸e f a piesei)

pentru care unghiul dintre normala exterioar˘a ⃗ν(f ) la fat¸˘a f ¸si ⃗d este mai mic de
90◦ ˆımpiedic˘a translat¸ia ˆın direct¸ia ⃗d.

▶ Propozit¸ie. Un poliedru P poate fi extras din matrit¸a sa MP prin translat¸ie ˆın
direct¸ia ⃗d dac˘a ¸si numai dac˘a ⃗d face un unghi de cel put¸in 90◦ cu normala
exterioar˘a a fiec˘arei fet¸e standard a lui P.

▶ Reformulare. Dat P, trebuie g˘asit˘a o direct¸ie ⃗d astfel ˆıncˆat, pentru fiecare fat¸˘a

standard f , unghiul dintre ⃗d ¸si ⃗ν(f ) s˘a fie cel put¸in 90◦.

▶ Analitic - pentru o fat¸˘a: fiecare fat¸˘a define¸ste un semiplan, i.e. dat˘a o fat¸˘a

standard f a poliedrului / matrit¸ei, a g˘asi o direct¸ie admisibil˘a revine la a rezolva o
inecuat¸ie de tipul (1), care corespunde unui semiplan.

▶ Analitic - toate fet¸ele: Fie P un poliedru; fat¸a superioar˘a fixat˘a, paralel˘a cu

planul Oxy . Consider˘am matrit¸a asociat˘a ¸si toate fet¸ele matrit¸ei (i.e. toate fet¸ele
standard ale poliedrului). A determina o direct¸ie admisibil˘a revine la a determina o
direct¸ie care verific˘a toate inegalit˘at¸ile de tip (1), deci un sistem de inecuat¸ii.
▶ Concluzie: Pentru a stabili dac˘a exist˘a o direct¸ie admisibil˘a, trebuie stabilit dac˘a o

intersect¸ie de semiplane este nevid˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

13 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Exemple
1. Intersect¸ia semiplanelor

−x + y + 1 ≤ 0; −y − 3 ≤ 0;

2x + 3y − 5 ≤ 0.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

14 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Exemple

2 (a). Normalele exterioare ale fet¸elor standard, parcurse ˆın sens orar, sunt
coliniare cu vectorii

(0, 1, 1), (0, 1, 0), (0, 0, −1), (0, −1, 0), (0, −1, 1).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

15 / 45

(i) Intersect¸ia unei mult¸imi de n semiplane poate fi determinat˘a cu

complexitate-timp O(n log n) ¸si folosind O(n) memorie.

(ii) Se poate stabili cu complexitate-timp medie O(n) dac˘a o intersect¸ie de

semiplane este nevid˘a.

(ii)’ Fie P un poliedru cu n fet¸e. Se poate decide dac˘a P reprezint˘a un

obiect care poate fi turnat cu complexitate-timp medie O(n2) ¸si

folosind O(n) spat¸iu. ˆIn caz afirmativ, o matrit¸˘a ¸si o direct¸ie admisibil˘a

ˆın care poate fi extras P este determinat˘a cu aceea¸si complexitate-timp.

(i) Caracterizare explicit˘a: S˘a se determine care sunt elementele

(vˆarfuri, muchii, etc.) care determin˘a o intersect¸ie de semiplane.

(ii) Calitativ: S˘a se stabileasc˘a dac˘a o intersect¸ie de semiplane este nevid˘a.

▶ Rezultate: (descrise ˆın detaliu ulterior)

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - probleme studiate, rezultate

▶ Probleme studiate:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

16 / 45

(i) Intersect¸ia unei mult¸imi de n semiplane poate fi determinat˘a cu

complexitate-timp O(n log n) ¸si folosind O(n) memorie.

(ii) Se poate stabili cu complexitate-timp medie O(n) dac˘a o intersect¸ie de

semiplane este nevid˘a.

(ii)’ Fie P un poliedru cu n fet¸e. Se poate decide dac˘a P reprezint˘a un

obiect care poate fi turnat cu complexitate-timp medie O(n2) ¸si

folosind O(n) spat¸iu. ˆIn caz afirmativ, o matrit¸˘a ¸si o direct¸ie admisibil˘a

ˆın care poate fi extras P este determinat˘a cu aceea¸si complexitate-timp.

(ii) Calitativ: S˘a se stabileasc˘a dac˘a o intersect¸ie de semiplane este nevid˘a.

▶ Rezultate: (descrise ˆın detaliu ulterior)

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - probleme studiate, rezultate

▶ Probleme studiate:

(i) Caracterizare explicit˘a: S˘a se determine care sunt elementele

(vˆarfuri, muchii, etc.) care determin˘a o intersect¸ie de semiplane.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

16 / 45

(i) Intersect¸ia unei mult¸imi de n semiplane poate fi determinat˘a cu

complexitate-timp O(n log n) ¸si folosind O(n) memorie.

(ii) Se poate stabili cu complexitate-timp medie O(n) dac˘a o intersect¸ie de

semiplane este nevid˘a.

(ii)’ Fie P un poliedru cu n fet¸e. Se poate decide dac˘a P reprezint˘a un

obiect care poate fi turnat cu complexitate-timp medie O(n2) ¸si

folosind O(n) spat¸iu. ˆIn caz afirmativ, o matrit¸˘a ¸si o direct¸ie admisibil˘a

ˆın care poate fi extras P este determinat˘a cu aceea¸si complexitate-timp.

▶ Rezultate: (descrise ˆın detaliu ulterior)

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - probleme studiate, rezultate

▶ Probleme studiate:

(i) Caracterizare explicit˘a: S˘a se determine care sunt elementele

(vˆarfuri, muchii, etc.) care determin˘a o intersect¸ie de semiplane.

(ii) Calitativ: S˘a se stabileasc˘a dac˘a o intersect¸ie de semiplane este nevid˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

16 / 45

(i) Intersect¸ia unei mult¸imi de n semiplane poate fi determinat˘a cu

complexitate-timp O(n log n) ¸si folosind O(n) memorie.

(ii) Se poate stabili cu complexitate-timp medie O(n) dac˘a o intersect¸ie de

semiplane este nevid˘a.

(ii)’ Fie P un poliedru cu n fet¸e. Se poate decide dac˘a P reprezint˘a un

obiect care poate fi turnat cu complexitate-timp medie O(n2) ¸si

folosind O(n) spat¸iu. ˆIn caz afirmativ, o matrit¸˘a ¸si o direct¸ie admisibil˘a

ˆın care poate fi extras P este determinat˘a cu aceea¸si complexitate-timp.

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - probleme studiate, rezultate

▶ Probleme studiate:

(i) Caracterizare explicit˘a: S˘a se determine care sunt elementele

(vˆarfuri, muchii, etc.) care determin˘a o intersect¸ie de semiplane.

(ii) Calitativ: S˘a se stabileasc˘a dac˘a o intersect¸ie de semiplane este nevid˘a.

▶ Rezultate: (descrise ˆın detaliu ulterior)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

16 / 45

(ii) Se poate stabili cu complexitate-timp medie O(n) dac˘a o intersect¸ie de

semiplane este nevid˘a.

(ii)’ Fie P un poliedru cu n fet¸e. Se poate decide dac˘a P reprezint˘a un

obiect care poate fi turnat cu complexitate-timp medie O(n2) ¸si

folosind O(n) spat¸iu. ˆIn caz afirmativ, o matrit¸˘a ¸si o direct¸ie admisibil˘a

ˆın care poate fi extras P este determinat˘a cu aceea¸si complexitate-timp.

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - probleme studiate, rezultate

▶ Probleme studiate:

(i) Caracterizare explicit˘a: S˘a se determine care sunt elementele

(vˆarfuri, muchii, etc.) care determin˘a o intersect¸ie de semiplane.

(ii) Calitativ: S˘a se stabileasc˘a dac˘a o intersect¸ie de semiplane este nevid˘a.

▶ Rezultate: (descrise ˆın detaliu ulterior)

(i) Intersect¸ia unei mult¸imi de n semiplane poate fi determinat˘a cu

complexitate-timp O(n log n) ¸si folosind O(n) memorie.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

16 / 45

Motivat¸ie: turnarea pieselor ˆın matrit¸e

Intersect¸ii de semiplane - probleme studiate, rezultate

▶ Probleme studiate:

(i) Caracterizare explicit˘a: S˘a se determine care sunt elementele

(vˆarfuri, muchii, etc.) care determin˘a o intersect¸ie de semiplane.

(ii) Calitativ: S˘a se stabileasc˘a dac˘a o intersect¸ie de semiplane este nevid˘a.

▶ Rezultate: (descrise ˆın detaliu ulterior)

(i) Intersect¸ia unei mult¸imi de n semiplane poate fi determinat˘a cu

complexitate-timp O(n log n) ¸si folosind O(n) memorie.

(ii) Se poate stabili cu complexitate-timp medie O(n) dac˘a o intersect¸ie de

semiplane este nevid˘a.

(ii)’ Fie P un poliedru cu n fet¸e. Se poate decide dac˘a P reprezint˘a un
obiect care poate fi turnat cu complexitate-timp medie O(n2) ¸si
folosind O(n) spat¸iu. ˆIn caz afirmativ, o matrit¸˘a ¸si o direct¸ie admisibil˘a
ˆın care poate fi extras P este determinat˘a cu aceea¸si complexitate-timp.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

16 / 45

▶ Intersect¸ia H1 ∩ H2 ∩ . . . ∩ Hn este dat˘a de un sistem de inecuat¸ii;

este o mult¸ime poligonal˘a convex˘a, m˘arginit˘a de cel mult n muchii

(poate fi vid˘a, m˘arginit˘a, nem˘arginit˘a,...). Se poate aplica ¸un

algoritm de complexitate O(n log(n)) bazat pe paradigma divide et

impera ¸si pe algoritmul de suprapunere a straturilor tematice (cf. curs

12) pentru a determina aceast˘a intersect¸ie.

▶ ˆIn cele ce urmeaz˘a va fi prezentat˘a o tehnic˘a bazat˘a pe o paradigm˘a

complet diferit˘a.

Intersect¸ii de semiplane - abordare cantitativ˘a

(i) Caracterizare explicit˘a - Formularea problemei

▶ Fie H = {H1, H2, . . . , Hn} o mult¸ime de semiplane din R2; semiplanul

Hi dat de o relat¸ie de forma

ai x + bi y + ci ≤ 0

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

17 / 45

▶ ˆIn cele ce urmeaz˘a va fi prezentat˘a o tehnic˘a bazat˘a pe o paradigm˘a

complet diferit˘a.

Intersect¸ii de semiplane - abordare cantitativ˘a

(i) Caracterizare explicit˘a - Formularea problemei

▶ Fie H = {H1, H2, . . . , Hn} o mult¸ime de semiplane din R2; semiplanul

Hi dat de o relat¸ie de forma

ai x + bi y + ci ≤ 0

▶ Intersect¸ia H1 ∩ H2 ∩ . . . ∩ Hn este dat˘a de un sistem de inecuat¸ii;
este o mult¸ime poligonal˘a convex˘a, m˘arginit˘a de cel mult n muchii
(poate fi vid˘a, m˘arginit˘a, nem˘arginit˘a,...). Se poate aplica ¸un
algoritm de complexitate O(n log(n)) bazat pe paradigma divide et
impera ¸si pe algoritmul de suprapunere a straturilor tematice (cf. curs
12) pentru a determina aceast˘a intersect¸ie.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

17 / 45

Intersect¸ii de semiplane - abordare cantitativ˘a

(i) Caracterizare explicit˘a - Formularea problemei

▶ Fie H = {H1, H2, . . . , Hn} o mult¸ime de semiplane din R2; semiplanul

Hi dat de o relat¸ie de forma

ai x + bi y + ci ≤ 0

▶ Intersect¸ia H1 ∩ H2 ∩ . . . ∩ Hn este dat˘a de un sistem de inecuat¸ii;
este o mult¸ime poligonal˘a convex˘a, m˘arginit˘a de cel mult n muchii
(poate fi vid˘a, m˘arginit˘a, nem˘arginit˘a,...). Se poate aplica ¸un
algoritm de complexitate O(n log(n)) bazat pe paradigma divide et
impera ¸si pe algoritmul de suprapunere a straturilor tematice (cf. curs
12) pentru a determina aceast˘a intersect¸ie.

▶ ˆIn cele ce urmeaz˘a va fi prezentat˘a o tehnic˘a bazat˘a pe o paradigm˘a

complet diferit˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

17 / 45

Intersect¸ii de semiplane - abordare cantitativ˘a

Semiplane - intersect¸ii

Cˆand determin˘am o intersect¸ie de n semiplane, nu sunt neap˘arat
relevante toate semiplanele pentru determinarea intersect¸iei acestora.
Altfel spus, date n semiplane, ne intereseaz˘a care sunt cele care
contribuie efectiv la determinarea intersect¸iei acestora?
ˆIn figura de mai jos (sursa Geogebra) sunt considerate cinci semiplane
s1, s2, s3, s4, s5 dintre care relevante pentru intersect¸ie sunt doar s2 ¸si
s4.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

18 / 45

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

▶ 2

▶ 2

¸si drepte?

▶ DA: dualitate

▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

▶ 2

¸si drepte?

▶ DA: dualitate

▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

▶ 2

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

▶ 2

¸si drepte?

▶ DA: dualitate

▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

▶ 2
▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

¸si drepte?

▶ DA: dualitate

▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

▶ 2
▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

▶ 2

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

▶ DA: dualitate

▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

▶ 2
▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

▶ 2
▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

¸si drepte?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

▶ 2
▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

▶ 2
▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

¸si drepte?
▶ DA: dualitate

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

Dualitate − motivat¸ie intuitiv˘a

Dualitate

▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica un punct

ˆın plan?

▶ 2
▶ De cˆate informat¸ii (numerice) este nevoie pentru a indica o dreapt˘a

nevertical˘a ˆın plan?

▶ 2
▶ Exist˘a o modalitate natural˘a de a stabili o corespondent¸˘a ˆıntre puncte

¸si drepte?
▶ DA: dualitate
▶ Cum se reflect˘a / respect˘a diferite propriet˘at¸i geometrice (de exemplu

incident¸a) prin dualitate?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

19 / 45

▶ Unei drepte neverticale d : (y = md x + nd ) din planul primal i se

asociaz˘a un punct din planul dual, notat d ∗:

d ∗ = (md , −nd ) dualul lui d.

▶ Obs. Aceast˘a transformare este polaritatea fat¸˘a de parabola y = x 2

2 .

Dualitate − definit¸ii

Dualitate

▶ Unui punct p = (px , py ) din planul R2 (plan primal) i se asociaz˘a o

dreapt˘a din planul dual, notat˘a p∗:

p∗ : (y = px x − py ) duala lui p.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

20 / 45

▶ Obs. Aceast˘a transformare este polaritatea fat¸˘a de parabola y = x 2

2 .

Dualitate − definit¸ii

Dualitate

▶ Unui punct p = (px , py ) din planul R2 (plan primal) i se asociaz˘a o

dreapt˘a din planul dual, notat˘a p∗:

p∗ : (y = px x − py ) duala lui p.

▶ Unei drepte neverticale d : (y = md x + nd ) din planul primal i se

asociaz˘a un punct din planul dual, notat d ∗:

d ∗ = (md , −nd ) dualul lui d.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

20 / 45

Dualitate − definit¸ii

Dualitate

▶ Unui punct p = (px , py ) din planul R2 (plan primal) i se asociaz˘a o

dreapt˘a din planul dual, notat˘a p∗:

p∗ : (y = px x − py ) duala lui p.

▶ Unei drepte neverticale d : (y = md x + nd ) din planul primal i se

asociaz˘a un punct din planul dual, notat d ∗:

d ∗ = (md , −nd ) dualul lui d.

▶ Obs. Aceast˘a transformare este polaritatea fat¸˘a de parabola y = x 2
2 .

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

20 / 45

Dualitate − propriet˘at¸i elementare

Dualitate

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

21 / 45

Dualitate − propriet˘at¸i elementare

Dualitate

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

22 / 45

Dualitate − “dict¸ionar” concepte ¸si configurat¸ii

Dualitate

Plan primal

Plan dual

Punct p

Dreapt˘a nevertical˘a d

Dreapt˘a determinat˘a
de dou˘a puncte

Dreapt˘a nevertical˘a p∗
Punct d ∗

Punct de intersect¸ie
a dou˘a drepte

Punctul p deasupra dreptei d Punctul d ∗ deasupra dreptei p∗

Segment

Fascicul de drepte (wedge)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

23 / 45

Exemplu

Dualitate

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

24 / 45

semiplan inferior

semiplan superior

▶ Dat un semiplan delimitat de o dreapt˘a nevertical˘a

ax + by + c ≤ 0

(b ̸= 0)

cum se decide dac˘a este semiplan inferior sau semiplan superior? (R:

semnul lui b). Exemple:

−x + y + 3 ≤ 0

semiplan inferior

x − y − 3 ≤ 0

semiplan superior

Dualitate

Semiplane inferioare ¸si semiplane superioare

▶ Exemple.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

25 / 45

▶ Dat un semiplan delimitat de o dreapt˘a nevertical˘a

ax + by + c ≤ 0

(b ̸= 0)

cum se decide dac˘a este semiplan inferior sau semiplan superior? (R:

semnul lui b). Exemple:

−x + y + 3 ≤ 0

semiplan inferior

x − y − 3 ≤ 0

semiplan superior

Dualitate

Semiplane inferioare ¸si semiplane superioare

▶ Exemple.

semiplan inferior

semiplan superior

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

25 / 45

Dualitate

Semiplane inferioare ¸si semiplane superioare

▶ Exemple.

semiplan inferior

semiplan superior

▶ Dat un semiplan delimitat de o dreapt˘a nevertical˘a

ax + by + c ≤ 0

(b ̸= 0)

cum se decide dac˘a este semiplan inferior sau semiplan superior? (R:
semnul lui b). Exemple:

−x + y + 3 ≤ 0

semiplan inferior

x − y − 3 ≤ 0

semiplan superior

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

25 / 45

Semiplane inferioare ¸si semiplane superioare

Dualitate

Cˆand determin˘am o intersect¸ie de semiplane inferioare / superioare,
nu sunt neap˘arat relevante toate semiplanele. ˆIn figura de mai jos
(link Geogebra) sunt considerate cinci semiplane inferioare
s1, s2, s3, s4, s5 dintre care relevante pentru intersect¸ie sunt doar s2 ¸si
s4.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

26 / 45

Observat¸ia fundamental˘a

Dualitate

Fie p, q cu p ̸= q ¸si dreapta d = pq nevertical˘a. Fie r un punct situat
dedesubtul dreptei d = pq. Care este configurat¸ia dual˘a?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

27 / 45

▶ Q: Ce ˆınseamn˘a c˘a un segment [pq] (p, q ∈ P) particip˘a la frontiera

superioar˘a a acoperirii convexe a lui P?

▶ A: Toate celelalte puncte sunt dedesubtul dreptei d = pq.

▶ Configurat¸ia dual˘a: Punctul d ∗ este situat dedesubtul dreptelor

corespunz˘atoare celorlalte puncte ¸si, prin trecere la semiplane

inferioare, “conteaz˘a” semiplanele inferioare determinate de p∗ ¸si q∗.

Observat¸ia fundamental˘a

Dualitate

▶ Fie P o mult¸ime de puncte.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

28 / 45

▶ A: Toate celelalte puncte sunt dedesubtul dreptei d = pq.

▶ Configurat¸ia dual˘a: Punctul d ∗ este situat dedesubtul dreptelor

corespunz˘atoare celorlalte puncte ¸si, prin trecere la semiplane

inferioare, “conteaz˘a” semiplanele inferioare determinate de p∗ ¸si q∗.

Observat¸ia fundamental˘a

Dualitate

▶ Fie P o mult¸ime de puncte.
▶ Q: Ce ˆınseamn˘a c˘a un segment [pq] (p, q ∈ P) particip˘a la frontiera

superioar˘a a acoperirii convexe a lui P?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

28 / 45

▶ Configurat¸ia dual˘a: Punctul d ∗ este situat dedesubtul dreptelor

corespunz˘atoare celorlalte puncte ¸si, prin trecere la semiplane

inferioare, “conteaz˘a” semiplanele inferioare determinate de p∗ ¸si q∗.

Observat¸ia fundamental˘a

Dualitate

▶ Fie P o mult¸ime de puncte.
▶ Q: Ce ˆınseamn˘a c˘a un segment [pq] (p, q ∈ P) particip˘a la frontiera

superioar˘a a acoperirii convexe a lui P?

▶ A: Toate celelalte puncte sunt dedesubtul dreptei d = pq.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

28 / 45

Observat¸ia fundamental˘a

Dualitate

▶ Fie P o mult¸ime de puncte.
▶ Q: Ce ˆınseamn˘a c˘a un segment [pq] (p, q ∈ P) particip˘a la frontiera

superioar˘a a acoperirii convexe a lui P?

▶ A: Toate celelalte puncte sunt dedesubtul dreptei d = pq.
▶ Configurat¸ia dual˘a: Punctul d ∗ este situat dedesubtul dreptelor
corespunz˘atoare celorlalte puncte ¸si, prin trecere la semiplane
inferioare, “conteaz˘a” semiplanele inferioare determinate de p∗ ¸si q∗.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

28 / 45

Dualitate

Exemplu - link Geogebra
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
d ∗
2 = (−1, −5)
d ∗
3 = (0, −8)
d ∗
4 = (2, −8)
d ∗
5 = (3, 1)
d ∗
6 = (2, −3)
d ∗
7 = (−2, −1)

Intersect¸ia semiplanelor inferioare h1, . . . , h7 este determinat˘a de intersect¸ia dintre h5 ¸si
h7. ˆIn mod corespunz˘ator, frontiera superioar˘a a acoperirii convexe a punctelor
5 = (3, 1) ¸si d ∗
1 , . . . , d ∗
d ∗
Semiplane superioare:

7 este determinat˘a de d ∗

7 = (−2, −1).

Inec. semiplan
h8 : y ≥ −10
h9 : y ≥ −15
h10 : y ≥ −x − 10
h11 : y ≥ x − 12

Ec. dr . suport
d8 : y = −10
d9 : y = −15
d10 : y = −x − 10
d11 : y = x − 12

Pct. pl. dual
d ∗
8 = (0, 10)
d ∗
9 = (0, 15)
d ∗
10 = (−1, 10)
d ∗
11 = (1, 12)

Intersect¸ia semiplanelor superioare h8, . . . , h11 este determinat˘a de intersect¸ia dintre h8,
h10 ¸si h11. ˆIn mod corespunz˘ator, frontiera inferioar˘a a acoperirii convexe a punctelor
8 = (0, 10), d ∗
8 , . . . , d ∗
d ∗

11 este determinat˘a de d ∗

10 = (−1, 10) ¸si d ∗

11 = (1, 12).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

29 / 45

▶ Teorem˘a Intersect¸ia a n semiplane poate fi descris˘a cu un algoritm de

complexitate O(n log n).

▶ De fapt, aplicarea dualit˘at¸ii combinat˘a cu sortarea lexicografic˘a poate

fi interpretat˘a ca fiind ordonare a dreptelor dup˘a panta dreptei suport

¸si apoi utilizarea unui mecanism incremental, cu eliminarea

semiplanelor redundante. Aceast˘a abordare direct˘a este descris˘a de Z.

Zhu ˆın 2006, ˆın New Algorithm for Half-plane Intersection and its

Practical Value (v. ¸si aceast˘a referint¸˘a).

Concluzie pentru (i) - abordarea cantitativ˘a

Dualitate

▶ Pentru a determina o intersect¸ie de semiplane inferioare se
consider˘a mult¸imea de puncte din planul dual ¸si se determin˘a
frontiera superioar˘a a acoperirii convexe a mult¸imii respective. Un
rezultat analog are loc pentru intersect¸ii de semiplane superioare ¸si
frontiera inferioar˘a a acoperirii convexe a mult¸imii de puncte duale.
ˆIn consecint¸˘a:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

30 / 45

▶ De fapt, aplicarea dualit˘at¸ii combinat˘a cu sortarea lexicografic˘a poate

fi interpretat˘a ca fiind ordonare a dreptelor dup˘a panta dreptei suport

¸si apoi utilizarea unui mecanism incremental, cu eliminarea

semiplanelor redundante. Aceast˘a abordare direct˘a este descris˘a de Z.

Zhu ˆın 2006, ˆın New Algorithm for Half-plane Intersection and its

Practical Value (v. ¸si aceast˘a referint¸˘a).

Concluzie pentru (i) - abordarea cantitativ˘a

Dualitate

▶ Pentru a determina o intersect¸ie de semiplane inferioare se
consider˘a mult¸imea de puncte din planul dual ¸si se determin˘a
frontiera superioar˘a a acoperirii convexe a mult¸imii respective. Un
rezultat analog are loc pentru intersect¸ii de semiplane superioare ¸si
frontiera inferioar˘a a acoperirii convexe a mult¸imii de puncte duale.
ˆIn consecint¸˘a:

▶ Teorem˘a Intersect¸ia a n semiplane poate fi descris˘a cu un algoritm de

complexitate O(n log n).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

30 / 45

Concluzie pentru (i) - abordarea cantitativ˘a

Dualitate

▶ Pentru a determina o intersect¸ie de semiplane inferioare se
consider˘a mult¸imea de puncte din planul dual ¸si se determin˘a
frontiera superioar˘a a acoperirii convexe a mult¸imii respective. Un
rezultat analog are loc pentru intersect¸ii de semiplane superioare ¸si
frontiera inferioar˘a a acoperirii convexe a mult¸imii de puncte duale.
ˆIn consecint¸˘a:

▶ Teorem˘a Intersect¸ia a n semiplane poate fi descris˘a cu un algoritm de

complexitate O(n log n).

▶ De fapt, aplicarea dualit˘at¸ii combinat˘a cu sortarea lexicografic˘a poate
fi interpretat˘a ca fiind ordonare a dreptelor dup˘a panta dreptei suport
¸si apoi utilizarea unui mecanism incremental, cu eliminarea
semiplanelor redundante. Aceast˘a abordare direct˘a este descris˘a de Z.
Zhu ˆın 2006, ˆın New Algorithm for Half-plane Intersection and its
Practical Value (v. ¸si aceast˘a referint¸˘a).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

30 / 45

▶ Ciclul de product¸ie este s˘apt˘amˆanal (40h de lucru). Timpul de product¸ie (ˆın

minute) pentru produs este indicat ˆın tabel.

X

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

ˆın paralel, simultan

ˆın paralel, simultan

x2, respectiv y2

x3, respectiv y3

Spat¸iu

0.1m2

0.2m2

0.05m2

Profit

10

13

9

▶ Aparatele X ¸si Y au un interval de mentenant¸˘a de 5%, respectiv 7% din timpul de

lucru. Spat¸iul total de depozitare este de 50m2.

▶ Modelul matematic:

Constrˆangeri:

0.1x1 + 0.2(x2 + y2) + 0.05(x3 + y3) ≤ 50 Spat¸iu de depozitare

10x1 + 12x2 + 8x3 ≤ 0.95 · 40 · 60

27x1 + 19y2 + 24y3 ≤ 0.93 · 40 · 60

Timp aparatul X

Timp aparatul Y

Cerint¸a:

maximizeaz˘a(10x1 + 13(x2 + y2) + 9(x3 + y3))

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

(ii) Abordarea calitativ˘a. Motivat¸ie

▶ Sunt realizate 3 produse (notate 1, 2 ¸si 3) pe 2 aparate (notate X ¸si Y ).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

31 / 45

▶ Aparatele X ¸si Y au un interval de mentenant¸˘a de 5%, respectiv 7% din timpul de

lucru. Spat¸iul total de depozitare este de 50m2.

▶ Modelul matematic:

Constrˆangeri:

0.1x1 + 0.2(x2 + y2) + 0.05(x3 + y3) ≤ 50 Spat¸iu de depozitare

10x1 + 12x2 + 8x3 ≤ 0.95 · 40 · 60

27x1 + 19y2 + 24y3 ≤ 0.93 · 40 · 60

Timp aparatul X

Timp aparatul Y

Cerint¸a:

maximizeaz˘a(10x1 + 13(x2 + y2) + 9(x3 + y3))

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

(ii) Abordarea calitativ˘a. Motivat¸ie

▶ Sunt realizate 3 produse (notate 1, 2 ¸si 3) pe 2 aparate (notate X ¸si Y ).
▶ Ciclul de product¸ie este s˘apt˘amˆanal (40h de lucru). Timpul de product¸ie (ˆın

minute) pentru produs este indicat ˆın tabel.

X
10
12
8

Y
27
19
24

Obs.
pe ambele
ˆın paralel, simultan
ˆın paralel, simultan

1
2
3

Nr. prod.
x1
x2, respectiv y2
x3, respectiv y3

Spat¸iu
0.1m2
0.2m2
0.05m2

Profit
10
13
9

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

31 / 45

▶ Modelul matematic:

Constrˆangeri:

0.1x1 + 0.2(x2 + y2) + 0.05(x3 + y3) ≤ 50 Spat¸iu de depozitare

10x1 + 12x2 + 8x3 ≤ 0.95 · 40 · 60

27x1 + 19y2 + 24y3 ≤ 0.93 · 40 · 60

Timp aparatul X

Timp aparatul Y

Cerint¸a:

maximizeaz˘a(10x1 + 13(x2 + y2) + 9(x3 + y3))

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

(ii) Abordarea calitativ˘a. Motivat¸ie

▶ Sunt realizate 3 produse (notate 1, 2 ¸si 3) pe 2 aparate (notate X ¸si Y ).
▶ Ciclul de product¸ie este s˘apt˘amˆanal (40h de lucru). Timpul de product¸ie (ˆın

minute) pentru produs este indicat ˆın tabel.

X
10
12
8

Y
27
19
24

Obs.
pe ambele
ˆın paralel, simultan
ˆın paralel, simultan

1
2
3

Nr. prod.
x1
x2, respectiv y2
x3, respectiv y3

Spat¸iu
0.1m2
0.2m2
0.05m2

Profit
10
13
9

▶ Aparatele X ¸si Y au un interval de mentenant¸˘a de 5%, respectiv 7% din timpul de

lucru. Spat¸iul total de depozitare este de 50m2.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

31 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

(ii) Abordarea calitativ˘a. Motivat¸ie

▶ Sunt realizate 3 produse (notate 1, 2 ¸si 3) pe 2 aparate (notate X ¸si Y ).
▶ Ciclul de product¸ie este s˘apt˘amˆanal (40h de lucru). Timpul de product¸ie (ˆın

minute) pentru produs este indicat ˆın tabel.

X
10
12
8

Y
27
19
24

Obs.
pe ambele
ˆın paralel, simultan
ˆın paralel, simultan

1
2
3

Nr. prod.
x1
x2, respectiv y2
x3, respectiv y3

Spat¸iu
0.1m2
0.2m2
0.05m2

Profit
10
13
9

▶ Aparatele X ¸si Y au un interval de mentenant¸˘a de 5%, respectiv 7% din timpul de

lucru. Spat¸iul total de depozitare este de 50m2.

▶ Modelul matematic:
Constrˆangeri:

0.1x1 + 0.2(x2 + y2) + 0.05(x3 + y3) ≤ 50 Spat¸iu de depozitare
10x1 + 12x2 + 8x3 ≤ 0.95 · 40 · 60
27x1 + 19y2 + 24y3 ≤ 0.93 · 40 · 60

Timp aparatul X
Timp aparatul Y

Cerint¸a:

maximizeaz˘a(10x1 + 13(x2 + y2) + 9(x3 + y3))

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

31 / 45

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d

▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )

▶ constrˆangeri: inegalit˘at¸ile (2)

▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

▶ Denumiri:

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine

la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia

dat˘a de vectorul

c = (c1, c2, . . . , cd ).

→

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d

▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )

▶ constrˆangeri: inegalit˘at¸ile (2)

▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine

la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia

dat˘a de vectorul

c = (c1, c2, . . . , cd ).

→

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

▶ Denumiri:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )

▶ constrˆangeri: inegalit˘at¸ile (2)

▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine

la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia

dat˘a de vectorul

c = (c1, c2, . . . , cd ).

→

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

▶ Denumiri:

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

▶ constrˆangeri: inegalit˘at¸ile (2)

▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine

la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia

dat˘a de vectorul

c = (c1, c2, . . . , cd ).

→

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

▶ Denumiri:

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d
▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine

la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia

dat˘a de vectorul

c = (c1, c2, . . . , cd ).

→

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

▶ Denumiri:

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d
▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )
▶ constrˆangeri: inegalit˘at¸ile (2)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine

la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia

dat˘a de vectorul

c = (c1, c2, . . . , cd ).

→

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

▶ Denumiri:

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d
▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )
▶ constrˆangeri: inegalit˘at¸ile (2)
▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Problematizare, terminologie

▶ Formulare general˘a (ˆın spat¸iul d-dimensional):

maximizeaz˘a(c1x1 + c2x2 + . . . + cd xd )

date constrˆangerile liniare (inegalit˘at¸i)






a11x1 + a12x2 + . . . a1d xd ≤ b1
a21x1 + a22x2 + . . . a2d xd ≤ b2
. . .
an1x1 + an2x2 + . . . and xd ≤ bn

(2)

▶ Denumiri:

▶ date de intrare: (aij )i=1,n, j=1,d , (bi )i=1,n, (cj )j=1,d
▶ funct¸ie obiectiv: (c1x1 + c2x2 + . . . + cd xd )
▶ constrˆangeri: inegalit˘at¸ile (2)
▶ regiune realizabil˘a (fezabil˘a): intersect¸ia semispat¸iilor care definesc

constrˆangerile problemei

▶ Obs. Interpretare a cerint¸ei de maximizare: Maximizarea funct¸iei obiectiv revine
la a determina un punct al c˘arui vector de pozit¸ie are proiect¸ia maxim˘a de direct¸ia
dat˘a de vectorul

→
c = (c1, c2, . . . , cd ).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

32 / 45

Lem˘a. (Pentru d = 1) Un program liniar 1-dimensional poate fi

rezolvat ˆın timp liniar.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Exemplu - cazul 1D (d = 1)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

33 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Exemplu - cazul 1D (d = 1)

Lem˘a. (Pentru d = 1) Un program liniar 1-dimensional poate fi
rezolvat ˆın timp liniar.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

33 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Exemplu - cazul 2D (d = 2)

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

34 / 45

• Coordonatele: x ¸si y

• Funct¸ia obiectiv: f→

c (p) = cx x + cy y , unde

• Constrˆangerile: h1, h2, . . . , hn (semiplane); se noteaz˘a

→

c = (cx , cy ).

H = {h1, h2, . . . , hn}

• Regiunea fezabil˘a este C = h1 ∩ h2 ∩ . . . ∩ hn.

▶ Program liniar: (H,

→

c ).

▶ Scop: Se caut˘a p ∈ C astfel ca f→

c (p) s˘a fie maxim˘a.

▶ Pentru o problem˘a de programare liniar˘a ˆın plan pot fi distinse patru

situat¸ii: (i) o solut¸ie unic˘a; (ii) toate punctele de pe o muchie sunt

solut¸ii; (iii) regiunea fezabil˘a este nem˘arginit˘a ¸si pot fi g˘asite solut¸ii

de-a lungul unei semidrepte; (iv) regiunea fezabil˘a este vid˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Probleme de programare liniar˘a ˆın plan (d = 2)

▶ Convent¸ii ¸si terminologie:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

35 / 45

• Funct¸ia obiectiv: f→

c (p) = cx x + cy y , unde

• Constrˆangerile: h1, h2, . . . , hn (semiplane); se noteaz˘a

→

c = (cx , cy ).

H = {h1, h2, . . . , hn}

• Regiunea fezabil˘a este C = h1 ∩ h2 ∩ . . . ∩ hn.

▶ Program liniar: (H,

→

c ).

▶ Scop: Se caut˘a p ∈ C astfel ca f→

c (p) s˘a fie maxim˘a.

▶ Pentru o problem˘a de programare liniar˘a ˆın plan pot fi distinse patru

situat¸ii: (i) o solut¸ie unic˘a; (ii) toate punctele de pe o muchie sunt

solut¸ii; (iii) regiunea fezabil˘a este nem˘arginit˘a ¸si pot fi g˘asite solut¸ii

de-a lungul unei semidrepte; (iv) regiunea fezabil˘a este vid˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Probleme de programare liniar˘a ˆın plan (d = 2)

▶ Convent¸ii ¸si terminologie:
• Coordonatele: x ¸si y

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

35 / 45

• Constrˆangerile: h1, h2, . . . , hn (semiplane); se noteaz˘a

H = {h1, h2, . . . , hn}

• Regiunea fezabil˘a este C = h1 ∩ h2 ∩ . . . ∩ hn.

▶ Program liniar: (H,

→

c ).

▶ Scop: Se caut˘a p ∈ C astfel ca f→

c (p) s˘a fie maxim˘a.

▶ Pentru o problem˘a de programare liniar˘a ˆın plan pot fi distinse patru

situat¸ii: (i) o solut¸ie unic˘a; (ii) toate punctele de pe o muchie sunt

solut¸ii; (iii) regiunea fezabil˘a este nem˘arginit˘a ¸si pot fi g˘asite solut¸ii

de-a lungul unei semidrepte; (iv) regiunea fezabil˘a este vid˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Probleme de programare liniar˘a ˆın plan (d = 2)

▶ Convent¸ii ¸si terminologie:
• Coordonatele: x ¸si y
• Funct¸ia obiectiv: f→

c (p) = cx x + cy y , unde

→
c = (cx , cy ).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

35 / 45

▶ Program liniar: (H,

→

c ).

▶ Scop: Se caut˘a p ∈ C astfel ca f→

c (p) s˘a fie maxim˘a.

▶ Pentru o problem˘a de programare liniar˘a ˆın plan pot fi distinse patru

situat¸ii: (i) o solut¸ie unic˘a; (ii) toate punctele de pe o muchie sunt

solut¸ii; (iii) regiunea fezabil˘a este nem˘arginit˘a ¸si pot fi g˘asite solut¸ii

de-a lungul unei semidrepte; (iv) regiunea fezabil˘a este vid˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Probleme de programare liniar˘a ˆın plan (d = 2)

▶ Convent¸ii ¸si terminologie:
• Coordonatele: x ¸si y
• Funct¸ia obiectiv: f→
• Constrˆangerile: h1, h2, . . . , hn (semiplane); se noteaz˘a

c (p) = cx x + cy y , unde

→
c = (cx , cy ).

H = {h1, h2, . . . , hn}

• Regiunea fezabil˘a este C = h1 ∩ h2 ∩ . . . ∩ hn.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

35 / 45

▶ Pentru o problem˘a de programare liniar˘a ˆın plan pot fi distinse patru

situat¸ii: (i) o solut¸ie unic˘a; (ii) toate punctele de pe o muchie sunt

solut¸ii; (iii) regiunea fezabil˘a este nem˘arginit˘a ¸si pot fi g˘asite solut¸ii

de-a lungul unei semidrepte; (iv) regiunea fezabil˘a este vid˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Probleme de programare liniar˘a ˆın plan (d = 2)

▶ Convent¸ii ¸si terminologie:
• Coordonatele: x ¸si y
• Funct¸ia obiectiv: f→
• Constrˆangerile: h1, h2, . . . , hn (semiplane); se noteaz˘a

c (p) = cx x + cy y , unde

→
c = (cx , cy ).

H = {h1, h2, . . . , hn}

• Regiunea fezabil˘a este C = h1 ∩ h2 ∩ . . . ∩ hn.
→
▶ Program liniar: (H,
c ).
▶ Scop: Se caut˘a p ∈ C astfel ca f→

c (p) s˘a fie maxim˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

35 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Probleme de programare liniar˘a ˆın plan (d = 2)

▶ Convent¸ii ¸si terminologie:
• Coordonatele: x ¸si y
• Funct¸ia obiectiv: f→
• Constrˆangerile: h1, h2, . . . , hn (semiplane); se noteaz˘a

c (p) = cx x + cy y , unde

→
c = (cx , cy ).

H = {h1, h2, . . . , hn}

• Regiunea fezabil˘a este C = h1 ∩ h2 ∩ . . . ∩ hn.
→
▶ Program liniar: (H,
c ).
▶ Scop: Se caut˘a p ∈ C astfel ca f→

c (p) s˘a fie maxim˘a.

▶ Pentru o problem˘a de programare liniar˘a ˆın plan pot fi distinse patru
situat¸ii: (i) o solut¸ie unic˘a; (ii) toate punctele de pe o muchie sunt
solut¸ii; (iii) regiunea fezabil˘a este nem˘arginit˘a ¸si pot fi g˘asite solut¸ii
de-a lungul unei semidrepte; (iv) regiunea fezabil˘a este vid˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

35 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Cazul 2D (d = 2) - exemple de regiuni fezabile

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

36 / 45

▶ constrˆangerile sunt ad˘augate una cˆate una;

▶ presupunem c˘a la fiecare pas solut¸ia (punctul de maxim) exist˘a, apoi

actualizeaz˘a;

▶ sunt ad˘augate la ˆınceput constrˆangeri care garanteaz˘a m˘arginirea

programului liniar, definite astfel: se alege M >> 0 ¸si se definesc noi

constrˆangeri convenabile;

▶ se lucreaz˘a cu convent¸ia de ordonare lexicografic˘a, astfel ˆıncˆat exist˘a o

unic˘a solut¸ie optim˘a.

▶ Vom considera ˆın continuare

→

c = (0, −1), iar noile constrˆangeri vor fi:

m1 : x ≥ −M,

m2 : y ≥ −M.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm incremental pentru rezolvarea unei probleme de
programare liniar˘a 2D

▶ Principii:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

37 / 45

▶ presupunem c˘a la fiecare pas solut¸ia (punctul de maxim) exist˘a, apoi

actualizeaz˘a;

▶ sunt ad˘augate la ˆınceput constrˆangeri care garanteaz˘a m˘arginirea

programului liniar, definite astfel: se alege M >> 0 ¸si se definesc noi

constrˆangeri convenabile;

▶ se lucreaz˘a cu convent¸ia de ordonare lexicografic˘a, astfel ˆıncˆat exist˘a o

unic˘a solut¸ie optim˘a.

▶ Vom considera ˆın continuare

→

c = (0, −1), iar noile constrˆangeri vor fi:

m1 : x ≥ −M,

m2 : y ≥ −M.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm incremental pentru rezolvarea unei probleme de
programare liniar˘a 2D

▶ Principii:

▶ constrˆangerile sunt ad˘augate una cˆate una;

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

37 / 45

▶ se lucreaz˘a cu convent¸ia de ordonare lexicografic˘a, astfel ˆıncˆat exist˘a o

unic˘a solut¸ie optim˘a.

▶ Vom considera ˆın continuare

→

c = (0, −1), iar noile constrˆangeri vor fi:

m1 : x ≥ −M,

m2 : y ≥ −M.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm incremental pentru rezolvarea unei probleme de
programare liniar˘a 2D

▶ Principii:

▶ constrˆangerile sunt ad˘augate una cˆate una;
▶ presupunem c˘a la fiecare pas solut¸ia (punctul de maxim) exist˘a, apoi

actualizeaz˘a;

▶ sunt ad˘augate la ˆınceput constrˆangeri care garanteaz˘a m˘arginirea

programului liniar, definite astfel: se alege M >> 0 ¸si se definesc noi
constrˆangeri convenabile;

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

37 / 45

▶ Vom considera ˆın continuare

→

c = (0, −1), iar noile constrˆangeri vor fi:

m1 : x ≥ −M,

m2 : y ≥ −M.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm incremental pentru rezolvarea unei probleme de
programare liniar˘a 2D

▶ Principii:

▶ constrˆangerile sunt ad˘augate una cˆate una;
▶ presupunem c˘a la fiecare pas solut¸ia (punctul de maxim) exist˘a, apoi

actualizeaz˘a;

▶ sunt ad˘augate la ˆınceput constrˆangeri care garanteaz˘a m˘arginirea

programului liniar, definite astfel: se alege M >> 0 ¸si se definesc noi
constrˆangeri convenabile;

▶ se lucreaz˘a cu convent¸ia de ordonare lexicografic˘a, astfel ˆıncˆat exist˘a o

unic˘a solut¸ie optim˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

37 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm incremental pentru rezolvarea unei probleme de
programare liniar˘a 2D

▶ Principii:

▶ constrˆangerile sunt ad˘augate una cˆate una;
▶ presupunem c˘a la fiecare pas solut¸ia (punctul de maxim) exist˘a, apoi

actualizeaz˘a;

▶ sunt ad˘augate la ˆınceput constrˆangeri care garanteaz˘a m˘arginirea

programului liniar, definite astfel: se alege M >> 0 ¸si se definesc noi
constrˆangeri convenabile;

▶ se lucreaz˘a cu convent¸ia de ordonare lexicografic˘a, astfel ˆıncˆat exist˘a o

unic˘a solut¸ie optim˘a.

▶ Vom considera ˆın continuare

→
c = (0, −1), iar noile constrˆangeri vor fi:

m1 : x ≥ −M,

m2 : y ≥ −M.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

37 / 45

(i) C0 ⊇ C1 ⊇ C2 ⊇ . . . ⊇ Cn = C .

(ii) Pentru fiecare i, regiunea fezabil˘a Ci , dac˘a este nevid˘a, are un vˆarf care

reprezint˘a o solut¸ie optim˘a a problemei (Hi ,

c ). Punctul este notat cu

→

vi (depinde de alegerea lui m1 ¸si m2).

▶ Observat¸ii:

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Notat¸ii

▶ Fie (H,
noteaz˘a:

→
c ) un program liniar cu constrˆangerile h1, h2, . . . , hn. Se

Hi = {m1, m2, h1, h2, . . . , hi }, mult¸ime de semiplane

Ci = m1 ∩ m2 ∩ h1 ∩ h2 ∩ . . . ∩ hi , regiune fezabil˘a.

Notat¸ia este pentru i = 0, . . . , n, ˆın particular

H0 = {m1, m2}

C0 = m1 ∩ m2.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

38 / 45

(i) C0 ⊇ C1 ⊇ C2 ⊇ . . . ⊇ Cn = C .

(ii) Pentru fiecare i, regiunea fezabil˘a Ci , dac˘a este nevid˘a, are un vˆarf care

reprezint˘a o solut¸ie optim˘a a problemei (Hi ,

c ). Punctul este notat cu

→

vi (depinde de alegerea lui m1 ¸si m2).

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Notat¸ii

▶ Fie (H,
noteaz˘a:

→
c ) un program liniar cu constrˆangerile h1, h2, . . . , hn. Se

Hi = {m1, m2, h1, h2, . . . , hi }, mult¸ime de semiplane

Ci = m1 ∩ m2 ∩ h1 ∩ h2 ∩ . . . ∩ hi , regiune fezabil˘a.

Notat¸ia este pentru i = 0, . . . , n, ˆın particular

H0 = {m1, m2}

C0 = m1 ∩ m2.

▶ Observat¸ii:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

38 / 45

(ii) Pentru fiecare i, regiunea fezabil˘a Ci , dac˘a este nevid˘a, are un vˆarf care

reprezint˘a o solut¸ie optim˘a a problemei (Hi ,

c ). Punctul este notat cu

→

vi (depinde de alegerea lui m1 ¸si m2).

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Notat¸ii

▶ Fie (H,
noteaz˘a:

→
c ) un program liniar cu constrˆangerile h1, h2, . . . , hn. Se

Hi = {m1, m2, h1, h2, . . . , hi }, mult¸ime de semiplane

Ci = m1 ∩ m2 ∩ h1 ∩ h2 ∩ . . . ∩ hi , regiune fezabil˘a.

Notat¸ia este pentru i = 0, . . . , n, ˆın particular

H0 = {m1, m2}

C0 = m1 ∩ m2.

▶ Observat¸ii:

(i) C0 ⊇ C1 ⊇ C2 ⊇ . . . ⊇ Cn = C .

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

38 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Notat¸ii

▶ Fie (H,
noteaz˘a:

→
c ) un program liniar cu constrˆangerile h1, h2, . . . , hn. Se

Hi = {m1, m2, h1, h2, . . . , hi }, mult¸ime de semiplane

Ci = m1 ∩ m2 ∩ h1 ∩ h2 ∩ . . . ∩ hi , regiune fezabil˘a.

Notat¸ia este pentru i = 0, . . . , n, ˆın particular

H0 = {m1, m2}

C0 = m1 ∩ m2.

▶ Observat¸ii:

(i) C0 ⊇ C1 ⊇ C2 ⊇ . . . ⊇ Cn = C .
(ii) Pentru fiecare i, regiunea fezabil˘a Ci , dac˘a este nevid˘a, are un vˆarf care
→
c ). Punctul este notat cu

reprezint˘a o solut¸ie optim˘a a problemei (Hi ,
vi (depinde de alegerea lui m1 ¸si m2).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

38 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Exemplu

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

39 / 45

fie Ci = ∅

fie vi ∈ di , unde di este dreapta care m˘argine¸ste hi .

ˆIn acest caz, g˘asirea lui vi revine la g˘asirea lui p ∈ di care maximizeaz˘a

f→

(p), date constrˆangerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,

aceasta este o problem˘a pe programare liniar˘a 1-dimensional˘a, care

c

are complexitatea-timp liniar˘a, adic˘a O(i).

(i) dac˘a vi−1 ∈ hi , atunci vi = vi−1,

(ii) dac˘a vi−1 ̸∈ hi , atunci

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Observat¸ii

▶ Fie 1 ≤ i ≤ n, presupunem c˘a Ci−1 ¸si vi−1 sunt determinate.

Consider˘am hi . Sunt dou˘a situat¸ii:

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

40 / 45

fie Ci = ∅

fie vi ∈ di , unde di este dreapta care m˘argine¸ste hi .

ˆIn acest caz, g˘asirea lui vi revine la g˘asirea lui p ∈ di care maximizeaz˘a

f→

(p), date constrˆangerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,

aceasta este o problem˘a pe programare liniar˘a 1-dimensional˘a, care

c

are complexitatea-timp liniar˘a, adic˘a O(i).

(ii) dac˘a vi−1 ̸∈ hi , atunci

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Observat¸ii

▶ Fie 1 ≤ i ≤ n, presupunem c˘a Ci−1 ¸si vi−1 sunt determinate.

Consider˘am hi . Sunt dou˘a situat¸ii:
(i) dac˘a vi−1 ∈ hi , atunci vi = vi−1,

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

40 / 45

fie Ci = ∅

fie vi ∈ di , unde di este dreapta care m˘argine¸ste hi .

ˆIn acest caz, g˘asirea lui vi revine la g˘asirea lui p ∈ di care maximizeaz˘a

f→

(p), date constrˆangerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,

aceasta este o problem˘a pe programare liniar˘a 1-dimensional˘a, care

c

are complexitatea-timp liniar˘a, adic˘a O(i).

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Observat¸ii

▶ Fie 1 ≤ i ≤ n, presupunem c˘a Ci−1 ¸si vi−1 sunt determinate.

Consider˘am hi . Sunt dou˘a situat¸ii:
(i) dac˘a vi−1 ∈ hi , atunci vi = vi−1,
(ii) dac˘a vi−1 ̸∈ hi , atunci

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

40 / 45

fie vi ∈ di , unde di este dreapta care m˘argine¸ste hi .

ˆIn acest caz, g˘asirea lui vi revine la g˘asirea lui p ∈ di care maximizeaz˘a

f→

(p), date constrˆangerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,

aceasta este o problem˘a pe programare liniar˘a 1-dimensional˘a, care

c

are complexitatea-timp liniar˘a, adic˘a O(i).

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Observat¸ii

▶ Fie 1 ≤ i ≤ n, presupunem c˘a Ci−1 ¸si vi−1 sunt determinate.

Consider˘am hi . Sunt dou˘a situat¸ii:
(i) dac˘a vi−1 ∈ hi , atunci vi = vi−1,
(ii) dac˘a vi−1 ̸∈ hi , atunci
fie Ci = ∅

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

40 / 45

ˆIn acest caz, g˘asirea lui vi revine la g˘asirea lui p ∈ di care maximizeaz˘a

f→

(p), date constrˆangerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,

aceasta este o problem˘a pe programare liniar˘a 1-dimensional˘a, care

c

are complexitatea-timp liniar˘a, adic˘a O(i).

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Observat¸ii

▶ Fie 1 ≤ i ≤ n, presupunem c˘a Ci−1 ¸si vi−1 sunt determinate.

Consider˘am hi . Sunt dou˘a situat¸ii:
(i) dac˘a vi−1 ∈ hi , atunci vi = vi−1,
(ii) dac˘a vi−1 ̸∈ hi , atunci
fie Ci = ∅
fie vi ∈ di , unde di este dreapta care m˘argine¸ste hi .

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

40 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Observat¸ii

▶ Fie 1 ≤ i ≤ n, presupunem c˘a Ci−1 ¸si vi−1 sunt determinate.

Consider˘am hi . Sunt dou˘a situat¸ii:
(i) dac˘a vi−1 ∈ hi , atunci vi = vi−1,
(ii) dac˘a vi−1 ̸∈ hi , atunci
fie Ci = ∅
fie vi ∈ di , unde di este dreapta care m˘argine¸ste hi .
ˆIn acest caz, g˘asirea lui vi revine la g˘asirea lui p ∈ di care maximizeaz˘a
f→
(p), date constrˆangerile deja existente (p ∈ h, ∀h ∈ Hi ). De fapt,
c
aceasta este o problem˘a pe programare liniar˘a 1-dimensional˘a, care
are complexitatea-timp liniar˘a, adic˘a O(i).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

40 / 45

▶ Output. Dac˘a (H ∪ {m1, m2},

→

c ) nu e realizabil (fezabil),

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p

care maximizeaz˘a f→

(p).

c

1. v0 ← “colt¸ul” lui c0

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

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},

→
c ) din R2

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

1. v0 ← “colt¸ul” lui c0

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

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c

(p).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

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

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0

(p).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

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

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H

(p).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

do if vi−1 ∈ hi

then vi ← vi−1

4.

5.

6.

7.

8.

9. return vn

else vi ← punctul p de pe di care

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

5.

6.

7.

8.

then vi ← vi−1

else vi ← punctul p de pe di care

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

9. return vn

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

4.

do if vi−1 ∈ hi

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

6.

7.

8.

else vi ← punctul p de pe di care

maximizeaz˘a f→

(p) date constrˆangerile din Hi

c

if p nu exist˘a

then raporteaz˘a “nefezabil” end

9. return vn

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

4.

5.

do if vi−1 ∈ hi

then vi ← vi−1

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

7.

8.

9. return vn

if p nu exist˘a

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

4.

5.

6.

do if vi−1 ∈ hi

then vi ← vi−1
else vi ← punctul p de pe di care

maximizeaz˘a f→
c

(p) date constrˆangerile din Hi

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

8.

9. return vn

then raporteaz˘a “nefezabil” end

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

4.

5.

6.

7.

do if vi−1 ∈ hi

then vi ← vi−1
else vi ← punctul p de pe di care

maximizeaz˘a f→
c

if p nu exist˘a

(p) date constrˆangerile din Hi

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

9. return vn

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

4.

5.

6.

7.

8.

do if vi−1 ∈ hi

then vi ← vi−1
else vi ← punctul p de pe di care

maximizeaz˘a f→
c

if p nu exist˘a

(p) date constrˆangerile din Hi

then raporteaz˘a “nefezabil” end

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm LPMARG2D (H,

→
c , m1, m2)

▶ Input. Un program liniar (H ∪ {m1, m2},
▶ Output. Dac˘a (H ∪ {m1, m2},

→
c ) nu e realizabil (fezabil),

→
c ) din R2

raporteaz˘a. ˆIn caz contrar, indic˘a punctul cel mai mic lexicografic p
care maximizeaz˘a f→
c
1. v0 ← “colt¸ul” lui c0
2. fie h1, h2, . . . , hn semiplanele din H
3. for i ← 1 to n

(p).

do if vi−1 ∈ hi

then vi ← vi−1
else vi ← punctul p de pe di care

4.

5.

6.

7.

8.
9. return vn

maximizeaz˘a f→
c

if p nu exist˘a

(p) date constrˆangerile din Hi

then raporteaz˘a “nefezabil” end

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

41 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Comentariu - ordinea conteaz˘a

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

42 / 45

▶ Algoritmul incremental LPMARG2D are complexitate-timp O(n2),

iar varianta bazat˘a pe alegerea aleatorie a semiplanelor are

complexitate-timp medie O(n) (n este num˘arul semiplanelor).

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm aleatoriu

▶ Pasul 2. este ˆınlocuit cu:

2’. Calculeaz˘a o permutare arbitrar˘a a semiplanelor, folosind o procedur˘a

adecvat˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

43 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Algoritm aleatoriu

▶ Pasul 2. este ˆınlocuit cu:

2’. Calculeaz˘a o permutare arbitrar˘a a semiplanelor, folosind o procedur˘a

adecvat˘a.

▶ Algoritmul incremental LPMARG2D are complexitate-timp O(n2),

iar varianta bazat˘a pe alegerea aleatorie a semiplanelor are
complexitate-timp medie O(n) (n este num˘arul semiplanelor).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

43 / 45

ˆIn concluzie, timpul total de rulare este (cid:80)n

i=1 Xi O(i) + O(n).

Valoarea a¸steptat˘a (timpul mediu)

E [

Xi O(i)] = µ(

Xi O(i)) =

O(i)µ(Xi )≤

O(i) ·

= O(n).

n

(cid:88)

i=1

n

(cid:88)

i=1

n

(cid:88)

i=1

2

i

n

(cid:88)

i=1

Vom ar˘ata c˘a µ(Xi ) ≤ 2

i , de unde va rezulta inegalitatea dorit˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (I)

Fie (Xi )i=1,...,n variabil˘a aleatoare definit˘a astfel:

Xi =

(cid:26) 0,
1,

dac˘a vi−1 ∈ hi (adic˘a este ales pasul 5 la iterat¸ia i)
dac˘a vi−1 ̸∈ hi (adic˘a este ales pasul 6 la iterat¸ia i).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

44 / 45

Valoarea a¸steptat˘a (timpul mediu)

E [

Xi O(i)] = µ(

Xi O(i)) =

O(i)µ(Xi )≤

O(i) ·

= O(n).

n

(cid:88)

i=1

n

(cid:88)

i=1

n

(cid:88)

i=1

2

i

n

(cid:88)

i=1

Vom ar˘ata c˘a µ(Xi ) ≤ 2

i , de unde va rezulta inegalitatea dorit˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (I)

Fie (Xi )i=1,...,n variabil˘a aleatoare definit˘a astfel:

Xi =

(cid:26) 0,
1,

dac˘a vi−1 ∈ hi (adic˘a este ales pasul 5 la iterat¸ia i)
dac˘a vi−1 ̸∈ hi (adic˘a este ales pasul 6 la iterat¸ia i).

ˆIn concluzie, timpul total de rulare este (cid:80)n

i=1 Xi O(i) + O(n).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

44 / 45

Vom ar˘ata c˘a µ(Xi ) ≤ 2

i , de unde va rezulta inegalitatea dorit˘a.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (I)

Fie (Xi )i=1,...,n variabil˘a aleatoare definit˘a astfel:

Xi =

(cid:26) 0,
1,

dac˘a vi−1 ∈ hi (adic˘a este ales pasul 5 la iterat¸ia i)
dac˘a vi−1 ̸∈ hi (adic˘a este ales pasul 6 la iterat¸ia i).

ˆIn concluzie, timpul total de rulare este (cid:80)n
Valoarea a¸steptat˘a (timpul mediu)

i=1 Xi O(i) + O(n).

n
(cid:88)

E [

i=1

Xi O(i)] = µ(

n
(cid:88)

i=1

Xi O(i)) =

n
(cid:88)

i=1

O(i)µ(Xi )≤

n
(cid:88)

i=1

O(i) ·

2
i

= O(n).

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

44 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (I)

Fie (Xi )i=1,...,n variabil˘a aleatoare definit˘a astfel:

Xi =

(cid:26) 0,
1,

dac˘a vi−1 ∈ hi (adic˘a este ales pasul 5 la iterat¸ia i)
dac˘a vi−1 ̸∈ hi (adic˘a este ales pasul 6 la iterat¸ia i).

ˆIn concluzie, timpul total de rulare este (cid:80)n
Valoarea a¸steptat˘a (timpul mediu)

i=1 Xi O(i) + O(n).

n
(cid:88)

E [

i=1

Xi O(i)] = µ(

n
(cid:88)

i=1

Xi O(i)) =

n
(cid:88)

i=1

O(i)µ(Xi )≤

n
(cid:88)

i=1

O(i) ·

2
i

= O(n).

Vom ar˘ata c˘a µ(Xi ) ≤ 2

i , de unde va rezulta inegalitatea dorit˘a.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

44 / 45

• Care este probabilitatea ca vn−1 ̸∈ hn, adic˘a la ad˘augarea lui hn, vˆarful

• Care este probabilitatea ca eliminˆand unul dintre semiplane s˘a fie

vn−1 s˘a fie modificat ˆın vn? ⇔

modificat vˆarful optim vn?

▶ Ar˘at˘am inegalitatea pentru i = n (cazul general, analog).

Presupunem algoritmul terminat, vn vˆarful optim.

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (II)

▶ Demonstr˘am c˘a µ(Xi ) ≤ 2

i , pentru orice i = 1, . . . , n, adic˘a

probabilitatea ca vi−1 ̸∈ hi este ≤ 2
i .

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

45 / 45

• Care este probabilitatea ca vn−1 ̸∈ hn, adic˘a la ad˘augarea lui hn, vˆarful

• Care este probabilitatea ca eliminˆand unul dintre semiplane s˘a fie

vn−1 s˘a fie modificat ˆın vn? ⇔

modificat vˆarful optim vn?

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (II)

▶ Demonstr˘am c˘a µ(Xi ) ≤ 2

i , pentru orice i = 1, . . . , n, adic˘a

probabilitatea ca vi−1 ̸∈ hi este ≤ 2
i .

▶ Ar˘at˘am inegalitatea pentru i = n (cazul general, analog).

Presupunem algoritmul terminat, vn vˆarful optim.

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

45 / 45

• Care este probabilitatea ca eliminˆand unul dintre semiplane s˘a fie

modificat vˆarful optim vn?

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (II)

▶ Demonstr˘am c˘a µ(Xi ) ≤ 2

i , pentru orice i = 1, . . . , n, adic˘a

probabilitatea ca vi−1 ̸∈ hi este ≤ 2
i .

▶ Ar˘at˘am inegalitatea pentru i = n (cazul general, analog).

Presupunem algoritmul terminat, vn vˆarful optim.

• Care este probabilitatea ca vn−1 ̸∈ hn, adic˘a la ad˘augarea lui hn, vˆarful

vn−1 s˘a fie modificat ˆın vn? ⇔

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

45 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (II)

▶ Demonstr˘am c˘a µ(Xi ) ≤ 2

i , pentru orice i = 1, . . . , n, adic˘a

probabilitatea ca vi−1 ̸∈ hi este ≤ 2
i .

▶ Ar˘at˘am inegalitatea pentru i = n (cazul general, analog).

Presupunem algoritmul terminat, vn vˆarful optim.

• Care este probabilitatea ca vn−1 ̸∈ hn, adic˘a la ad˘augarea lui hn, vˆarful

vn−1 s˘a fie modificat ˆın vn? ⇔

• Care este probabilitatea ca eliminˆand unul dintre semiplane s˘a fie

modificat vˆarful optim vn?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

45 / 45

Intersect¸ii de semiplane - abordare calitativ˘a. Programare liniar˘a

Analiza complexit˘at¸ii-timp - varianta algoritmului
probabilist (II)

▶ Demonstr˘am c˘a µ(Xi ) ≤ 2

i , pentru orice i = 1, . . . , n, adic˘a

probabilitatea ca vi−1 ̸∈ hi este ≤ 2
i .

▶ Ar˘at˘am inegalitatea pentru i = n (cazul general, analog).

Presupunem algoritmul terminat, vn vˆarful optim.

• Care este probabilitatea ca vn−1 ̸∈ hn, adic˘a la ad˘augarea lui hn, vˆarful

vn−1 s˘a fie modificat ˆın vn? ⇔

• Care este probabilitatea ca eliminˆand unul dintre semiplane s˘a fie

modificat vˆarful optim vn?

Algoritmi avansat¸i - C13, 14. Elemente de programare liniar˘a

45 / 45


