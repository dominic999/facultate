Algoritmi avansat¸i - Seminar 5 (s˘apt. 9 ¸si 10)

Mihai-Sorin Stupariu

1. Fie punctele A = (1, 2, 3), B = (4, 5, 6) ∈ R3.

a) Fie C = (a, 7, 8). Ar˘atat¸i c˘a exist˘a a astfel ca punctele A, B, C s˘a fie

coliniare ¸si pentru a astfel determinat calculat¸i raportul r(A, B, C).

b) Determinat¸i punctul P astfel ca raportul r(A, P, B) = 1.

c) Dat¸i exemplu de punct Q astfel ca r(A, B, Q) < 0 ¸si r(A, Q, B) < 0.

Solut¸ie.

a) Condit¸ia de coliniaritate a punctelor A, B, C este echivalent˘a cu colinia-

ritatea vectorilor

−→
AB ¸si

−→
BC. Au loc relat¸iile:

−→
AB= B − A = (3, 3, 3),

−→
BC= (a − 4, 2, 2).

Vectorii dat¸i sunt proport¸ionali dac˘a ¸si numai dac˘a a − 4 = 2, deci a = 6.
De fapt, dreapta AB este direct¸ionat˘a de vectorul (1, 1, 1) (¸si de orice vector
proport¸ional cu acesta).
ˆIn acest caz, avem

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

adic˘a r(A, B, C) = 3

relat¸ia

−→
AB= r

−→
BC).

2 (raportul r(A, B, C) este acel scalar r pentru care are loc

b) Condit¸ia r(A, P, B) = 1 este echivalent˘a cu

2 ).

verific˘a aceast˘a condit¸ie este mijlocul segmentului [AB], deci P = 1
2 , 7
( 5

2 , 9
c) Semnele rapoartelor indic˘a faptul c˘a (i) B nu este ˆıntre A ¸si Q; (ii) Q nu
este ˆıntre A ¸si B. Trebuie deci ca A s˘a fie situat ˆıntre Q ¸si B. Un astfel de
punct este Q = (0, 1, 2) (l-am ales ca fiind A − (1, 1, 1)). Au loc relat¸iile

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

deci sunt verificate cerint¸ele din enunt¸.

1

2. Fie punctele P = (1, −1), Q = (3, 3).

a) Calculat¸i valoarea determinantului care apare ˆın testul de orientare pentru

muchia orientat˘a

−→
P Q ¸si punctul de testare O = (0, 0).

b) Fie Rα = (α, −α), unde α ∈ R. Determinat¸i valorile lui α pentru care

−→
P Q.

punctul Rα este situat ˆın dreapta muchiei orientate

Solut¸ie.

a) Conform teoriei,

∆(P, Q, R) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
p1
p2

1
q1
q2

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

ˆIn exemplu avem:

∆(P, Q, R) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
1
−1

1
3
3

1
0
0

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

= 6 (dezvoltare dup˘a ultima coloan˘a).

Se poate verifica ¸si pe un desen c˘a O este la stˆanga muchiei orientate

−→
P Q.

b) Calcul˘am, pentru un α, valoarea ∆(P, Q, Rα):

∆(P, Q, Rα) =

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
1
−1

1
1
3
α
3 −α

(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)
(cid:12)

= 6(1 − α).

−→
Punctul Rα este situat ˆın dreapta muchiei orientate
P Q ⇔ ∆(P, Q, Rα) < 0
⇔ α > 1. Acest lucru poate fi verificat ¸si pe desen, punctul Rα este variabil pe
cea de-a doua bisectoare (de ecuat¸ie x + y = 0), iar pentru α > 1 acest punct

−→
P Q.

este situat ˆın dreapta muchiei orientate

2

3. Fie M = {P1, P2, . . . , P9}, unde P1 = (−5, 0), P2 = (−4, −3), P3 =
(−3, −3), P4 = (−1, −3), P5 = (1, −1), P6 = (2, 1), P7 = (3, 5), P8 = (5, 0).
Detaliat¸i cum evolueaz˘a lista Li a vˆarfurilor care determin˘a marginea inferioar˘a
a frontierei acoperirii convexe a lui M, obt¸inut˘a pe parcursul Graham’s scan,
varianta Andrew.

Solut¸ie.

P7

P6

P5

P8

P1

P2

P3

P4

Lista Li evolueaz˘a astfel:
P1P2
P1P2P3
P1P2P3P4 // este eliminat P3, deoarece P2, P3, P4 coliniare (nu viraj la stˆanga)
P1P2P4
P1P2P4P5
P1P2P4P5P6
P1P2P4P5P6P7
P1P2P4P5P6P7P8 // punctele P7, P6, P5 sunt eliminate ˆın aceast˘a ordine
P1P2P4P8 // lista final˘a (Li) a vˆarfurilor care determin˘a marginea inferioar˘a

3

4. Dat¸i un exemplu de mult¸ime M din planul R2 pentru care, la final, Li are
3 elemente, dar, pe parcursul algoritmului, num˘arul maxim de elemente al lui
Li este egal cu 6 (Li este lista vˆarfurilor care determin˘a marginea inferioar˘a
a frontierei acoperirii convexe a lui M, obt¸inut˘a pe parcursul Graham’s scan,
varianta Andrew). Justificat¸i!

Solut¸ie.

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
Num˘arul maxim de elemente este 6: P1P4P5P6P7P8 (la ad˘augarea lui P8 ˆın

list˘a).

Obs. Num˘arul maxim de elemente dup˘a verific˘ari ale virajelor este 5:

P1P4P5P6P7.

4

5. Discutat¸i un algoritm bazat pe paradigma Divide et impera pentru determi-
narea acoperirii convexe. Analizat¸i complexitatea-timp.

Solut¸ie. Complexitatea-timp este O(n log n). O descriere a algoritmului ¸si

a analizei complexit˘at¸ii poate fi g˘asit˘a ˆın survey-ul [Lee & Preparata, 1984].

5


