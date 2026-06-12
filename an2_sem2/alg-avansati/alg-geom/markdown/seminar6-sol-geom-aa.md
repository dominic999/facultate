Algoritmi avansat¸i - Seminar 6 (s˘apt. 11 ¸si 12)

Mihai-Sorin Stupariu

1. Fie mult¸imea P = {P1, P2, . . . , P7, P8}, unde P1 = (0, 0), P2 = (1, 2),
P3 = (2, 1), P4 = (3, 0), P5 = (5, 0), P6 = (2, −3), P7 = (5, −2), P8 = (3.5, −2).
Indicat¸i testele care trebuie f˘acute pentru a g˘asi succesorul lui P1 atunci cˆand
aplic˘am Jarvis’ march pentru a determina marginea inferioar˘a a acoperirii con-
vexe a lui P, parcurs˘a ˆın sens trigonometric (drept pivot init¸ial va fi considerat
P2).

Solut¸ie.

P2

P3

P1

P4

P5

P8

P7

P6

Pentru a g˘asi succesorul lui P1 este ad˘augat pivotul P2 (S cu notat¸ia din

1

suportul de curs). Punctele sunt apoi testate, iar dac˘a un punct P este la
dreapta muchiei orientate P1S, punctul P devine noul pivot.
Punctul P3: este ˆın dreapta muchiei P1P2, deci pivotul P2 este ˆınlocuit cu P3.
Punctul P4: este ˆın dreapta muchiei P1P3, deci pivotul P3 este ˆınlocuit cu P4.
Punctul P5: nu este ˆın dreapta muchiei P1P4, deci pivotul P4 r˘amˆane.
Punctul P6: este ˆın dreapta muchiei P1P4, deci pivotul P4 este ˆınlocuit cu P6.
Punctul P7: nu este ˆın dreapta muchiei P1P6, deci pivotul P6 r˘amˆane.
Punctul P8: nu este ˆın dreapta muchiei P1P6, deci pivotul P6 r˘amˆane.

Au fost parcurse toate punctele. Ultimul pivot (P6) este succesorul lui P1 ˆın
parcurgerea frontierei acoperirii convexe a mult¸imii date ˆın sens trigonometric.

2. Aplicat¸i metoda din demonstrat¸ia teoremei galeriei de art˘a, indicˆand o posi-
bil˘a amplasare a camerelor de supraveghere ˆın cazul poligonului P0P1P2 . . . P12,
unde P0 = (0, −4), P1 = (5, −6), P2 = (7, −4), P3 = (5, −2), P4 = (5, 2), P5 =
(7, 4), P6 = (7, 6) iar punctele P7, . . . , P12 sunt respectiv simetricele punctelor
P6, . . . , P1 fat¸˘a de axa Oy.

Solut¸ie. ˆIn figur˘a sunt reprezentate o posibil˘a triangulare ¸si 3-colorarea asociat˘a
- exist˘a ¸si alte variante corecte.

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
(−1, 2), P4 = (−3, 0), P5 = (−1, −2), P6 = (3, −2). Ar˘atat¸i c˘a Teorema Gale-
riei de Art˘a poate fi aplicat˘a ˆın dou˘a moduri diferite, a¸sa ˆıncˆat, aplicˆand metoda
din teorem˘a ¸si mecanismul de 3-colorare, ˆın prima variant˘a s˘a fie suficient˘a o
singur˘a camer˘a, iar ˆın cea de-a doua variant˘a s˘a fie necesare ¸si suficiente dou˘a
camere pentru supravegeherea unei galerii avˆand forma poligonului P.

Solut¸ie. Poligonul este un hexagon convex, deci pentru triangularea sa vor fi
folosite 3·6−6−3 = 9 muchii. Aceasta ˆınseamn˘a c˘a vom trasa 3 diagonale. Sunt
posibile dou˘a situat¸ii: (a) cele trei diagonale au un vˆarf comun; (b) nu exist˘a
un vˆarf comun al celor trei diagonale (acest lucru se poate demonstra trasˆand
una dintre diagonale ¸si apoi rat¸ionˆand inductiv - este esent¸ial c˘a poligonul este
un hexagon convex). ˆIn cazul (a) este suficient˘a o camer˘a, iar ˆın cazul (b)
3-colorarea indic˘a utilizarea a dou˘a camere.

(a)

(b)

4. Dat¸i exemplu de poligon cu 6 vˆarfuri care s˘a aib˘a atˆat vˆarfuri convexe, cˆat
¸si concave ¸si toate s˘a fie principale.

Solut¸ie. ˆIn figur˘a este desenat un poligon cu 4 vˆarfuri convexe ¸si 2 vˆarfuri
concave. Pot fi luate ˆın considerare ¸si alte variante (de exemplu cu un singur
vˆarf concav, cu doar 3 vˆarfuri convexe, etc.).

A

F

C

D

B

E

3

5. Fie M = {Ai | i = 0, . . . , 50} ∪ {Bi | i = 0, . . . , 40} ∪ {Ci | i = 0, . . . , 30}, dat˘a
de punctele Ai = (i + 10, 0), i = 0, 1, . . . , 50, Bi = (0, i + 30), i = 0, 1, . . . , 40,
Ci = (−i, −i), i = 0, 1, . . . , 30. Determinat¸i num˘arul de triunghiuri ¸si num˘arul
de muchii ale unei triangul˘ari a lui M.

Solut¸ie. Trebuie stabilite mai ˆıntˆai num˘arul de puncte n ¸si num˘arul de puncte
de pe frontiera acoperirii convexe k (atent¸ie la num˘ararea punctelor, nu trebuie
num˘arat un punct de dou˘a ori...). Pe o schit¸˘a se observ˘a c˘a sunt ˆın total
123 de puncte (punctele din mult¸imile {Ai | i = 0, . . . , 50}, {Bi | i = 0, . . . , 40},
respectiv {Ci | i = 0, . . . , 30} sunt diferite ˆıntre ele). Obt¸inem n = 123, k = 3,
apoi aplic˘am formulele pentru determinarea num˘arului de triunghiuri, respectiv
a num˘arului de muchii.

nt = 2n − k − 2 = 241,

nm = 3n − k − 3 = 343.

6. Dat¸i un exemplu de mult¸ime din R2 care s˘a admit˘a o triangulare avˆand 6
triunghiuri ¸si 11 muchii.

Solut¸ie. Fie n num˘arul de puncte ale unei astfel de mult¸imi ¸si k num˘arul de
puncte de pe frontiera acoperirii convexe. Au loc relat¸iile

(cid:26) 2n − k − 2 = 6
3n − k − 3 = 11

Rezolvˆand acest sistem obt¸inem n = 6, k = 4, deci o astfel de mult¸ime are 6
puncte, din care 4 sunt situate pe frontiera acoperirii convexe.
Un posibil exemplu: {(0, 0), (5, 0), (5, 3), (0, 3), (1, 1), (3, 1)}.

7. ˆIn R2 fie punctele P1 = (1, 7), P2 = (5, 7), P3 = (7, 5), P4 = (1, 3), P5 =
(5, 3), P6 = (α − 1, 5), cu α ∈ R. Discutat¸i, ˆın funct¸ie de α, num˘arul de muchii
ale unei triangul˘ari asociate mult¸imii {P1, P2, P3, P4, P5, P6}.

Solut¸ie. Trebuie analizat˘a configurat¸ia punctelor P1, P2, . . . P6 ¸si determinate
num˘arul n de puncte ¸si num˘arul k de puncte de pe frontiera acoperirii convexe.
Punctele P1P2P3P4P5 determin˘a un pentagon convex. Punctul P6 descrie o

dreapt˘a paralel˘a cu Ox care trece prin punctul P3.

• Pentru α − 1 ≤ 1, adic˘a α ∈ (−∞, 2] punctul P6 este situat ˆın exteriorul
sau pe laturile pentagonului P1P2P3P4P5. Avem n = 6, k = 6, deci 4 fet¸e
¸si 9 muchii.

• Pentru α − 1 > 1 ¸si α − 1 < 7, adic˘a α ∈ (2, 8) punctul P6 este situat ˆın
interiorul pentagonului P1P2P3P4P5. Avem n = 6, k = 5, deci 5 fet¸e ¸si 10
muchii.

• Pentru α − 1 = 7, adic˘a α ∈ {8} punctul P6 coincide cu P3. Avem

n = 5, k = 5, deci 3 fet¸e ¸si 7 muchii.

• Pentru α − 1 > 7, adic˘a α ∈ (8, ∞) punctul P6 este situat ˆın exteriorul
pentagonului P1P2P3P4P5. Avem n = 6, k = 6, deci 4 fet¸e ¸si 9 muchii.

4

8. Fie G un graf planar conex, v num˘arul de noduri, m num˘arul de muchii,
f num˘arul de fet¸e. Se presupune c˘a fiecare vˆarf are gradul ≥ 3. Demonstrat¸i
inegalit˘at¸ile

v ≤ 2

3 m,
m ≤ 3f − 6,

v ≤ 2f − 4,

m ≤ 3v − 6
f ≤ 2
3 m
f ≤ 2v − 4

Dat¸i exemplu de grafuri ˆın care au loc egalit˘at¸i ˆın relat¸iile de mai sus.

5


