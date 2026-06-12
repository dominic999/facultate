Algoritmi avansat¸i

C10 - Triangularea mult¸imilor de puncte

Mihai-Sorin Stupariu

Sem. al II-lea, 2025 - 2026

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

1 / 22

Triangularea unei mult¸imi arbitrare de puncte

Triangularea unei mult¸imi arbitrare de puncte

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

2 / 22

▶ Are sens s˘a vorbim de triangulare pentru mult¸imea {P1, P2, . . . , Pn}?

▶ Exemplu:

▶ ˆIn cele ce urmeaz˘a vom considera doar mult¸imi de puncte din

planul R2.

Triangularea unei mult¸imi arbitrare de puncte

Problematizare

▶ Tema anterioar˘a: triangularea unui poligon (list˘a ordonat˘a de puncte

(P1, P2, . . . , Pn)).

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

2 / 22

▶ Exemplu:

▶ ˆIn cele ce urmeaz˘a vom considera doar mult¸imi de puncte din

planul R2.

Triangularea unei mult¸imi arbitrare de puncte

Problematizare

▶ Tema anterioar˘a: triangularea unui poligon (list˘a ordonat˘a de puncte

(P1, P2, . . . , Pn)).

▶ Are sens s˘a vorbim de triangulare pentru mult¸imea {P1, P2, . . . , Pn}?

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

2 / 22

Triangularea unei mult¸imi arbitrare de puncte

Problematizare

▶ Tema anterioar˘a: triangularea unui poligon (list˘a ordonat˘a de puncte

(P1, P2, . . . , Pn)).

▶ Are sens s˘a vorbim de triangulare pentru mult¸imea {P1, P2, . . . , Pn}?
▶ Exemplu:

▶ ˆIn cele ce urmeaz˘a vom considera doar mult¸imi de puncte din

planul R2.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

2 / 22

▶ Trebuie f˘acut˘a distinct¸ie ˆıntre triangulare a unui poligon

(P1, P2, . . . , Pn) ¸si triangulare a mult¸imii subdiacente

{P1, P2, . . . , Pn} (coincid dac˘a poligonul este convex!)

▶ Comentariu: Triangul˘arile mult¸imilor de puncte sunt esent¸iale ˆın

grafica pe calculator.

Triangularea unei mult¸imi arbitrare de puncte

Problematizare

▶ Definit¸ie. O triangulare a unei mult¸imi P este o subdivizare

maximal˘a a acoperirii convexe Conv(P) a lui P cu triunghiuri ale
c˘aror vˆarfuri sunt elemente ale lui P (f˘ar˘a autointersect¸ii!)

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

3 / 22

▶ Comentariu: Triangul˘arile mult¸imilor de puncte sunt esent¸iale ˆın

grafica pe calculator.

Triangularea unei mult¸imi arbitrare de puncte

Problematizare

▶ Definit¸ie. O triangulare a unei mult¸imi P este o subdivizare

maximal˘a a acoperirii convexe Conv(P) a lui P cu triunghiuri ale
c˘aror vˆarfuri sunt elemente ale lui P (f˘ar˘a autointersect¸ii!)

▶ Trebuie f˘acut˘a distinct¸ie ˆıntre triangulare a unui poligon
(P1, P2, . . . , Pn) ¸si triangulare a mult¸imii subdiacente
{P1, P2, . . . , Pn} (coincid dac˘a poligonul este convex!)

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

3 / 22

Triangularea unei mult¸imi arbitrare de puncte

Problematizare

▶ Definit¸ie. O triangulare a unei mult¸imi P este o subdivizare

maximal˘a a acoperirii convexe Conv(P) a lui P cu triunghiuri ale
c˘aror vˆarfuri sunt elemente ale lui P (f˘ar˘a autointersect¸ii!)

▶ Trebuie f˘acut˘a distinct¸ie ˆıntre triangulare a unui poligon
(P1, P2, . . . , Pn) ¸si triangulare a mult¸imii subdiacente
{P1, P2, . . . , Pn} (coincid dac˘a poligonul este convex!)

▶ Comentariu: Triangul˘arile mult¸imilor de puncte sunt esent¸iale ˆın

grafica pe calculator.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

3 / 22

Triangularea unei mult¸imi arbitrare de puncte

Exemple

(i) 3 puncte necoliniare

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

4 / 22

Triangularea unei mult¸imi arbitrare de puncte

Exemple
(ii) 4 puncte necoliniare, nesituate toate pe o aceea¸si dreapt˘a

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

5 / 22

▶ Leg˘atur˘a cantitativ˘a ˆıntre aceste elemente?

▶ Propozit¸ie. Fie P o mult¸ime de n puncte din plan nesituate toate pe

o aceea¸si dreapt˘a. Not˘am cu k num˘arul de puncte de pe frontiera

acoperirii convexe Conv(P). Orice triangulare a lui P are

(2n − k − 2) triunghiuri ¸si (3n − k − 3) muchii.

▶ Exemplu: Cazul unui (unor puncte care formeaz˘a un) poligon

convex: un poligon convex cu n vˆarfuri poate fi triangulat cu (n − 2)

triunghiuri, avˆand (2n − 3) muchii.

Triangularea unei mult¸imi arbitrare de puncte

Elemente ale unei triangul˘ari

▶ Dat˘a o mult¸ime de puncte P ¸si o triangulare TP a sa:

vˆarfuri, muchii, triunghiuri.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

6 / 22

▶ Propozit¸ie. Fie P o mult¸ime de n puncte din plan nesituate toate pe

o aceea¸si dreapt˘a. Not˘am cu k num˘arul de puncte de pe frontiera

acoperirii convexe Conv(P). Orice triangulare a lui P are

(2n − k − 2) triunghiuri ¸si (3n − k − 3) muchii.

▶ Exemplu: Cazul unui (unor puncte care formeaz˘a un) poligon

convex: un poligon convex cu n vˆarfuri poate fi triangulat cu (n − 2)

triunghiuri, avˆand (2n − 3) muchii.

Triangularea unei mult¸imi arbitrare de puncte

Elemente ale unei triangul˘ari

▶ Dat˘a o mult¸ime de puncte P ¸si o triangulare TP a sa:

vˆarfuri, muchii, triunghiuri.

▶ Leg˘atur˘a cantitativ˘a ˆıntre aceste elemente?

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

6 / 22

▶ Exemplu: Cazul unui (unor puncte care formeaz˘a un) poligon

convex: un poligon convex cu n vˆarfuri poate fi triangulat cu (n − 2)

triunghiuri, avˆand (2n − 3) muchii.

Triangularea unei mult¸imi arbitrare de puncte

Elemente ale unei triangul˘ari

▶ Dat˘a o mult¸ime de puncte P ¸si o triangulare TP a sa:

vˆarfuri, muchii, triunghiuri.

▶ Leg˘atur˘a cantitativ˘a ˆıntre aceste elemente?
▶ Propozit¸ie. Fie P o mult¸ime de n puncte din plan nesituate toate pe
o aceea¸si dreapt˘a. Not˘am cu k num˘arul de puncte de pe frontiera
acoperirii convexe Conv(P). Orice triangulare a lui P are
(2n − k − 2) triunghiuri ¸si (3n − k − 3) muchii.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

6 / 22

Triangularea unei mult¸imi arbitrare de puncte

Elemente ale unei triangul˘ari

▶ Dat˘a o mult¸ime de puncte P ¸si o triangulare TP a sa:

vˆarfuri, muchii, triunghiuri.

▶ Leg˘atur˘a cantitativ˘a ˆıntre aceste elemente?
▶ Propozit¸ie. Fie P o mult¸ime de n puncte din plan nesituate toate pe
o aceea¸si dreapt˘a. Not˘am cu k num˘arul de puncte de pe frontiera
acoperirii convexe Conv(P). Orice triangulare a lui P are
(2n − k − 2) triunghiuri ¸si (3n − k − 3) muchii.

▶ Exemplu: Cazul unui (unor puncte care formeaz˘a un) poligon

convex: un poligon convex cu n vˆarfuri poate fi triangulat cu (n − 2)
triunghiuri, avˆand (2n − 3) muchii.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

6 / 22

Triangularea unei mult¸imi arbitrare de puncte

Elemente ale unei triangul˘ari

▶ Dat˘a o mult¸ime de puncte P ¸si o triangulare TP a sa:

vˆarfuri, muchii, triunghiuri.

▶ Leg˘atur˘a cantitativ˘a ˆıntre aceste elemente?
▶ Propozit¸ie. Fie P o mult¸ime de n puncte din plan nesituate toate pe
o aceea¸si dreapt˘a. Not˘am cu k num˘arul de puncte de pe frontiera
acoperirii convexe Conv(P). Orice triangulare a lui P are
(2n − k − 2) triunghiuri ¸si (3n − k − 3) muchii.

▶ Exemplu: Cazul unui (unor puncte care formeaz˘a un) poligon

convex: un poligon convex cu n vˆarfuri poate fi triangulat cu (n − 2)
triunghiuri, avˆand (2n − 3) muchii.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

6 / 22

Triangularea unei mult¸imi arbitrare de puncte

Demonstrat¸ie

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

7 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Problematizare

▶ Problem˘a. Se fac m˘asur˘atori ale altitidinii pentru un teren. Se

dore¸ste reprezentarea tridimensional˘a (cˆat mai sugestiv˘a) . Alternativ:
se dore¸ste generarea unui teren pentru o aplicat¸ie.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

8 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Problematizare

▶ Problem˘a. Se fac m˘asur˘atori ale altitidinii pentru un teren. Se

dore¸ste reprezentarea tridimensional˘a (cˆat mai sugestiv˘a) . Alternativ:
se dore¸ste generarea unui teren pentru o aplicat¸ie.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

8 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Problematizare

▶ Problem˘a. Se fac m˘asur˘atori ale altitidinii pentru un teren. Se

dore¸ste reprezentarea tridimensional˘a (cˆat mai sugestiv˘a) . Alternativ:
se dore¸ste generarea unui teren pentru o aplicat¸ie.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

8 / 22

▶ Exemplu. M˘asur˘atori ale altitudinii.

640

620

630

1000

980

990

1005

580

640

570

590

620

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

▶ ˆIntreb˘ari naturale: (i) Exist˘a o triangulare “convenabil˘a” a unei

mult¸imi de puncte? (ii) Cum poate fi determinat˘a eficient o astfel de

triangulare?

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Problematizare - continuare

▶ Problem˘a (reformulat˘a). Cum ”compar˘am triangul˘arile” unei

mult¸imi de puncte fixate?

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

9 / 22

▶ ˆIntreb˘ari naturale: (i) Exist˘a o triangulare “convenabil˘a” a unei

mult¸imi de puncte? (ii) Cum poate fi determinat˘a eficient o astfel de

triangulare?

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Problematizare - continuare

▶ Problem˘a (reformulat˘a). Cum ”compar˘am triangul˘arile” unei

mult¸imi de puncte fixate?

▶ Exemplu. M˘asur˘atori ale altitudinii.

640

620

630

1000

980

990

1005

580

640

570

590

620

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

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

9 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Problematizare - continuare

▶ Problem˘a (reformulat˘a). Cum ”compar˘am triangul˘arile” unei

mult¸imi de puncte fixate?

▶ Exemplu. M˘asur˘atori ale altitudinii.

640

620

630

1000

980

990

1005

580

640

570

590

620

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

▶ ˆIntreb˘ari naturale: (i) Exist˘a o triangulare “convenabil˘a” a unei

mult¸imi de puncte? (ii) Cum poate fi determinat˘a eficient o astfel de
triangulare?

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

9 / 22

▶ Fie T o triangulare a lui P cu m triunghiuri. Fie α1, α2, . . . , α3m

unghiurile lui T , ordonate cresc˘ator. Vectorul unghiurilor lui T este

A(T ) = (α1, α2, . . . , α3m).

▶ Relat¸ie de ordine pe mult¸imea triangul˘arilor lui P: ordinea

lexicografic˘a pentru vectorii unghiurilor. Fie T ¸si T ′ dou˘a triangul˘ari

ale lui P. Atunci A(T ) > A(T ′) dac˘a ∃i astfel ca αj = α′

j , ∀1 ≤ j < i

▶ Triangulare unghiular optim˘a: T astfel ca A(T ) ≥ A(T ′), pentru

¸si αi > α′

i .

orice triangulare T ′.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Terminologie, triangul˘ari legale

▶ Fixat˘a: o mult¸ime de puncte P. ˆIn cele ce urmeaz˘a vom

presupune c˘a P este o mult¸ime de puncte din planul R2.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

10 / 22

▶ Relat¸ie de ordine pe mult¸imea triangul˘arilor lui P: ordinea

lexicografic˘a pentru vectorii unghiurilor. Fie T ¸si T ′ dou˘a triangul˘ari

ale lui P. Atunci A(T ) > A(T ′) dac˘a ∃i astfel ca αj = α′

j , ∀1 ≤ j < i

▶ Triangulare unghiular optim˘a: T astfel ca A(T ) ≥ A(T ′), pentru

¸si αi > α′

i .

orice triangulare T ′.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Terminologie, triangul˘ari legale

▶ Fixat˘a: o mult¸ime de puncte P. ˆIn cele ce urmeaz˘a vom

presupune c˘a P este o mult¸ime de puncte din planul R2.
▶ Fie T o triangulare a lui P cu m triunghiuri. Fie α1, α2, . . . , α3m

unghiurile lui T , ordonate cresc˘ator. Vectorul unghiurilor lui T este
A(T ) = (α1, α2, . . . , α3m).

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

10 / 22

▶ Triangulare unghiular optim˘a: T astfel ca A(T ) ≥ A(T ′), pentru

orice triangulare T ′.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Terminologie, triangul˘ari legale

▶ Fixat˘a: o mult¸ime de puncte P. ˆIn cele ce urmeaz˘a vom

presupune c˘a P este o mult¸ime de puncte din planul R2.
▶ Fie T o triangulare a lui P cu m triunghiuri. Fie α1, α2, . . . , α3m

unghiurile lui T , ordonate cresc˘ator. Vectorul unghiurilor lui T este
A(T ) = (α1, α2, . . . , α3m).

▶ Relat¸ie de ordine pe mult¸imea triangul˘arilor lui P: ordinea

lexicografic˘a pentru vectorii unghiurilor. Fie T ¸si T ′ dou˘a triangul˘ari
ale lui P. Atunci A(T ) > A(T ′) dac˘a ∃i astfel ca αj = α′
j , ∀1 ≤ j < i
¸si αi > α′
i .

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

10 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Terminologie, triangul˘ari legale

▶ Fixat˘a: o mult¸ime de puncte P. ˆIn cele ce urmeaz˘a vom

presupune c˘a P este o mult¸ime de puncte din planul R2.
▶ Fie T o triangulare a lui P cu m triunghiuri. Fie α1, α2, . . . , α3m

unghiurile lui T , ordonate cresc˘ator. Vectorul unghiurilor lui T este
A(T ) = (α1, α2, . . . , α3m).

▶ Relat¸ie de ordine pe mult¸imea triangul˘arilor lui P: ordinea

lexicografic˘a pentru vectorii unghiurilor. Fie T ¸si T ′ dou˘a triangul˘ari
ale lui P. Atunci A(T ) > A(T ′) dac˘a ∃i astfel ca αj = α′
j , ∀1 ≤ j < i
¸si αi > α′
i .

▶ Triangulare unghiular optim˘a: T astfel ca A(T ) ≥ A(T ′), pentru

orice triangulare T ′.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

10 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Exemplu - cazul unui patrulater convex

“Cel mai mic unghi care apare ˆın triangularea dat˘a de AC este mai mic
decˆat cel mai mic unghi care apare ˆın triangularea dat˘a de BD.”

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

11 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Exemplu - cazul unui patrulater inscriptibil

ˆIn acest caz triunghiurile formate de diagonale au “cele mai mici
unghiuri” congruente, deci nu putem distinge ˆıntre cele dou˘a
diagonale.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

12 / 22

▶ Criteriu geometric pentru a testa dac˘a o muchie este legal˘a: muchia

AC , adiacent˘a cu triunghiurile ∆ACB ¸si ∆ACD este ilegal˘a dac˘a ¸si

numai dac˘a punctul D este situat ˆın interiorul cercului circumscris

∆ABC .

A

B

D

C

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale

▶ Conceptul de muchie ilegal˘a. Fie A, B, C , D ∈ R2 fixate astfel ca
ABCD s˘a fie un patrulater convex; fie TAC , TBD triangul˘arile date de
diagonalele AC , respectiv BD. Muchia AC este ilegal˘a dac˘a

min A(TAC ) < min A(TBD).

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

13 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale

▶ Conceptul de muchie ilegal˘a. Fie A, B, C , D ∈ R2 fixate astfel ca
ABCD s˘a fie un patrulater convex; fie TAC , TBD triangul˘arile date de
diagonalele AC , respectiv BD. Muchia AC este ilegal˘a dac˘a

min A(TAC ) < min A(TBD).
▶ Criteriu geometric pentru a testa dac˘a o muchie este legal˘a: muchia
AC , adiacent˘a cu triunghiurile ∆ACB ¸si ∆ACD este ilegal˘a dac˘a ¸si
numai dac˘a punctul D este situat ˆın interiorul cercului circumscris
∆ABC .

A

B

D

C

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

13 / 22

▶ (i) Punctele A, B, C , D sunt conciclice ⇔ Θ(A, B, C , D) = 0.

(ii) Fie A, B, C astfel ca ABC s˘a fie un viraj la stˆanga. Un punct D este

situat ˆın interiorul cercului circumscris ∆ABC ⇔ Θ(A, B, C , D) > 0.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale

▶ Criteriu numeric / analitic pentru a testa dac˘a o muchie este

ilegal˘a.

▶ Pentru puncte A = (xA, yA), B = (xB , yB ), C = (xC , yC ), D = (xD , yD ):

Θ(A, B, C , D) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

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
x 2
B + y 2
B
x 2
C + y 2
C
D + y 2
x 2
D

1
1
1
1

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

14 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale

▶ Criteriu numeric / analitic pentru a testa dac˘a o muchie este

ilegal˘a.

▶ Pentru puncte A = (xA, yA), B = (xB , yB ), C = (xC , yC ), D = (xD , yD ):

Θ(A, B, C , D) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

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
x 2
B + y 2
B
x 2
C + y 2
C
D + y 2
x 2
D

1
1
1
1

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

▶ (i) Punctele A, B, C , D sunt conciclice ⇔ Θ(A, B, C , D) = 0.

(ii) Fie A, B, C astfel ca ABC s˘a fie un viraj la stˆanga. Un punct D este
situat ˆın interiorul cercului circumscris ∆ABC ⇔ Θ(A, B, C , D) > 0.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

14 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Exemplu

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

15 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei

cu BD), cel mai mic unghi poate fi m˘arit (local).

A1

A

B

D

C

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

16 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei

cu BD), cel mai mic unghi poate fi m˘arit (local).

A1

A

B

D

C

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

17 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei

cu BD), cel mai mic unghi poate fi m˘arit (local).

A1

A

B

D

C

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

18 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei

cu BD), cel mai mic unghi poate fi m˘arit (local).

A1

A

B

D

C

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

19 / 22

▶ Concluzie (reformulare): Fie T o triangulare cu o muchie ilegal˘a e,

fie T ′ triangularea obt¸inut˘a din T prin flip-ul muchiei e. Atunci

A(T ′) > A(T ).

▶ Triangulare legal˘a: nu are muchii ilegale. Fapt: O triangulare legal˘a

a unei mult¸imi cu n puncte poate fi determinat˘a printr-un algoritm

incremental randomizat, cu complexitate-timp medie O(n log n).

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei
cu BD), cel mai mic unghi poate fi m˘arit (local). Printr-un flip,
vectorul unghiurilor cre¸ste.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

20 / 22

▶ Triangulare legal˘a: nu are muchii ilegale. Fapt: O triangulare legal˘a

a unei mult¸imi cu n puncte poate fi determinat˘a printr-un algoritm

incremental randomizat, cu complexitate-timp medie O(n log n).

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei
cu BD), cel mai mic unghi poate fi m˘arit (local). Printr-un flip,
vectorul unghiurilor cre¸ste.

▶ Concluzie (reformulare): Fie T o triangulare cu o muchie ilegal˘a e,
fie T ′ triangularea obt¸inut˘a din T prin flip-ul muchiei e. Atunci
A(T ′) > A(T ).

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

20 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Muchii ilegale, triangul˘ari legale

▶ Concluzie: Dac˘a muchia AC este ilegal˘a, printr-un flip (ˆınlocuirea ei
cu BD), cel mai mic unghi poate fi m˘arit (local). Printr-un flip,
vectorul unghiurilor cre¸ste.

▶ Concluzie (reformulare): Fie T o triangulare cu o muchie ilegal˘a e,
fie T ′ triangularea obt¸inut˘a din T prin flip-ul muchiei e. Atunci
A(T ′) > A(T ).

▶ Triangulare legal˘a: nu are muchii ilegale. Fapt: O triangulare legal˘a
a unei mult¸imi cu n puncte poate fi determinat˘a printr-un algoritm
incremental randomizat, cu complexitate-timp medie O(n log n).

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

20 / 22

▶ Teorem˘a. Fie P o mult¸ime de n puncte din plan, ˆın pozit¸ie general˘a.

Triangularea unghiular optim˘a poate fi construit˘a, folosind un

algoritm incremental randomizat, ˆın timp mediu O(n log n), folosind

O(n) memorie medie.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Triangul˘ari unghiular optime vs. triangul˘ari legale

▶ Propozit¸ie. Fie P o mult¸ime de puncte din plan.
(i) Orice triangulare unghiular optim˘a este legal˘a.
(ii) Dac˘a P este ˆın pozit¸ie general˘a (oricare patru puncte nu sunt

conciclice), atunci exist˘a o unic˘a triangulare legal˘a, iar aceasta este
unghiular optim˘a.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

21 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Triangul˘ari unghiular optime vs. triangul˘ari legale

▶ Propozit¸ie. Fie P o mult¸ime de puncte din plan.
(i) Orice triangulare unghiular optim˘a este legal˘a.
(ii) Dac˘a P este ˆın pozit¸ie general˘a (oricare patru puncte nu sunt

conciclice), atunci exist˘a o unic˘a triangulare legal˘a, iar aceasta este
unghiular optim˘a.

▶ Teorem˘a. Fie P o mult¸ime de n puncte din plan, ˆın pozit¸ie general˘a.

Triangularea unghiular optim˘a poate fi construit˘a, folosind un
algoritm incremental randomizat, ˆın timp mediu O(n log n), folosind
O(n) memorie medie.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

21 / 22

▶ Compararea triangul˘arilor - criteriu folosind unghiurile. Triangul˘ari

▶ Conceptul de muchie ilegal˘a. Criteriu numeric referitor la configurat¸ia

unghiular optime.

a patru puncte.

▶ Triangul˘ari legale.

▶ Leg˘atura dintre triangul˘arile unghiular optime ¸si triangul˘arile legale.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Scurt rezumat

▶ Triangulare a unei mult¸imi de puncte. Rezultat referitor la num˘arul de

triunghiuri ¸si muchii ale unei triangul˘ari (¸si la seminar).

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

22 / 22

▶ Conceptul de muchie ilegal˘a. Criteriu numeric referitor la configurat¸ia

a patru puncte.

▶ Triangul˘ari legale.

▶ Leg˘atura dintre triangul˘arile unghiular optime ¸si triangul˘arile legale.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Scurt rezumat

▶ Triangulare a unei mult¸imi de puncte. Rezultat referitor la num˘arul de

triunghiuri ¸si muchii ale unei triangul˘ari (¸si la seminar).

▶ Compararea triangul˘arilor - criteriu folosind unghiurile. Triangul˘ari

unghiular optime.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

22 / 22

▶ Triangul˘ari legale.

▶ Leg˘atura dintre triangul˘arile unghiular optime ¸si triangul˘arile legale.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Scurt rezumat

▶ Triangulare a unei mult¸imi de puncte. Rezultat referitor la num˘arul de

triunghiuri ¸si muchii ale unei triangul˘ari (¸si la seminar).

▶ Compararea triangul˘arilor - criteriu folosind unghiurile. Triangul˘ari

unghiular optime.

▶ Conceptul de muchie ilegal˘a. Criteriu numeric referitor la configurat¸ia

a patru puncte.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

22 / 22

▶ Leg˘atura dintre triangul˘arile unghiular optime ¸si triangul˘arile legale.

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Scurt rezumat

▶ Triangulare a unei mult¸imi de puncte. Rezultat referitor la num˘arul de

triunghiuri ¸si muchii ale unei triangul˘ari (¸si la seminar).

▶ Compararea triangul˘arilor - criteriu folosind unghiurile. Triangul˘ari

unghiular optime.

▶ Conceptul de muchie ilegal˘a. Criteriu numeric referitor la configurat¸ia

a patru puncte.
▶ Triangul˘ari legale.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

22 / 22

Triangul˘ari legale ¸si triangul˘ari unghiular optime

Scurt rezumat

▶ Triangulare a unei mult¸imi de puncte. Rezultat referitor la num˘arul de

triunghiuri ¸si muchii ale unei triangul˘ari (¸si la seminar).

▶ Compararea triangul˘arilor - criteriu folosind unghiurile. Triangul˘ari

unghiular optime.

▶ Conceptul de muchie ilegal˘a. Criteriu numeric referitor la configurat¸ia

a patru puncte.
▶ Triangul˘ari legale.
▶ Leg˘atura dintre triangul˘arile unghiular optime ¸si triangul˘arile legale.

Algoritmi avansat¸i - C10. Triangularea mult¸imilor de puncte

22 / 22


