Algoritmi avansat¸i

C12 - Intersect¸ii

Mihai-Sorin Stupariu

Sem. al II-lea, 2025 - 2026

Algoritmi avansat¸i - C12. Intersect¸ii

1 / 30

Intersect¸ia segmentelor (generalit˘at¸i)

Analiza complexit˘at¸ii algebrice

Algoritm - comentarii init¸iale

Metoda dreptei de baleiere

Alte rezultate

Suprapunerea straturilor tematice

Algoritmi avansat¸i - C12. Intersect¸ii

2 / 30

▶ Problema 2. Date dou˘a poligoane P ¸si Q, s˘a se stabileasc˘a dac˘a se

intersecteaz˘a (interioarele lor se intersecteaz˘a).

▶ Problema 3. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente ˆınchise

din plan, s˘a se determine toate perechile care se intersecteaz˘a.

▶ Problema 3’. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente

ˆınchise din plan, s˘a se determine toate punctele de intersect¸ie dintre

ele.

Intersect¸ia segmentelor (generalit˘at¸i)

Motivat¸ie (Probleme geometrice ˆın context 2D)

▶ Problema 1. Dat˘a o list˘a (mult¸ime ordonat˘a) de puncte

P = (P1, P2, . . . , Pm), s˘a se stabileasc˘a dac˘a ea reprezint˘a un poligon
(linie poligonal˘a f˘ar˘a autointersect¸ii).

Algoritmi avansat¸i - C12. Intersect¸ii

3 / 30

▶ Problema 3. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente ˆınchise

din plan, s˘a se determine toate perechile care se intersecteaz˘a.

▶ Problema 3’. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente

ˆınchise din plan, s˘a se determine toate punctele de intersect¸ie dintre

ele.

Intersect¸ia segmentelor (generalit˘at¸i)

Motivat¸ie (Probleme geometrice ˆın context 2D)

▶ Problema 1. Dat˘a o list˘a (mult¸ime ordonat˘a) de puncte

P = (P1, P2, . . . , Pm), s˘a se stabileasc˘a dac˘a ea reprezint˘a un poligon
(linie poligonal˘a f˘ar˘a autointersect¸ii).

▶ Problema 2. Date dou˘a poligoane P ¸si Q, s˘a se stabileasc˘a dac˘a se

intersecteaz˘a (interioarele lor se intersecteaz˘a).

Algoritmi avansat¸i - C12. Intersect¸ii

3 / 30

▶ Problema 3’. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente

ˆınchise din plan, s˘a se determine toate punctele de intersect¸ie dintre

ele.

Intersect¸ia segmentelor (generalit˘at¸i)

Motivat¸ie (Probleme geometrice ˆın context 2D)

▶ Problema 1. Dat˘a o list˘a (mult¸ime ordonat˘a) de puncte

P = (P1, P2, . . . , Pm), s˘a se stabileasc˘a dac˘a ea reprezint˘a un poligon
(linie poligonal˘a f˘ar˘a autointersect¸ii).

▶ Problema 2. Date dou˘a poligoane P ¸si Q, s˘a se stabileasc˘a dac˘a se

intersecteaz˘a (interioarele lor se intersecteaz˘a).

▶ Problema 3. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente ˆınchise

din plan, s˘a se determine toate perechile care se intersecteaz˘a.

Algoritmi avansat¸i - C12. Intersect¸ii

3 / 30

Intersect¸ia segmentelor (generalit˘at¸i)

Motivat¸ie (Probleme geometrice ˆın context 2D)

▶ Problema 1. Dat˘a o list˘a (mult¸ime ordonat˘a) de puncte

P = (P1, P2, . . . , Pm), s˘a se stabileasc˘a dac˘a ea reprezint˘a un poligon
(linie poligonal˘a f˘ar˘a autointersect¸ii).

▶ Problema 2. Date dou˘a poligoane P ¸si Q, s˘a se stabileasc˘a dac˘a se

intersecteaz˘a (interioarele lor se intersecteaz˘a).

▶ Problema 3. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente ˆınchise

din plan, s˘a se determine toate perechile care se intersecteaz˘a.
▶ Problema 3’. Dat˘a o mult¸ime S = {s1, . . . , sn} de n segmente

ˆınchise din plan, s˘a se determine toate punctele de intersect¸ie dintre
ele.

Algoritmi avansat¸i - C12. Intersect¸ii

3 / 30

▶ Dac˘a segmentele [AB] ¸si [CD] nu sunt incluse ˆın aceea¸si dreapt˘a,

atunci ele se intersecteaz˘a ⇔ A ¸si B sunt de o parte ¸si de alta a lui

CD ¸si ⇔ C ¸si D sunt de o parte ¸si de alta a lui AB. Aceasta revine la

a aplica testul de orientare −→ polinoame de gradul II.

▶ De stabilit cum se procedeaz˘a dac˘a segmentele sunt incluse ˆın acee¸si

dreapt˘a.

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (I)

▶ Determinarea complexit˘at¸ii algebrice revine la a stabili natura

calculelor care trebuie efectuate / a expresiilor care trebuie evaluate
pentru a rezolva o problem˘a (polinoame de un anumit grad, rapoarte
de polinoame, etc.). Nu intereseaz˘a de cˆate ori se repet˘a un anumit
tip de calcule, ci cˆat de complexe sunt acestea. Pentru problema
analizat˘a consider˘am dou˘a segmente [AB] ¸si [CD], cu coordonate
A = (xA, yA), B = (xB , yB ), C = (xC , yC ), D = (xD, yD).

Algoritmi avansat¸i - C12. Intersect¸ii

4 / 30

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (I)

▶ Determinarea complexit˘at¸ii algebrice revine la a stabili natura

calculelor care trebuie efectuate / a expresiilor care trebuie evaluate
pentru a rezolva o problem˘a (polinoame de un anumit grad, rapoarte
de polinoame, etc.). Nu intereseaz˘a de cˆate ori se repet˘a un anumit
tip de calcule, ci cˆat de complexe sunt acestea. Pentru problema
analizat˘a consider˘am dou˘a segmente [AB] ¸si [CD], cu coordonate
A = (xA, yA), B = (xB , yB ), C = (xC , yC ), D = (xD, yD).

▶ Dac˘a segmentele [AB] ¸si [CD] nu sunt incluse ˆın aceea¸si dreapt˘a,

atunci ele se intersecteaz˘a ⇔ A ¸si B sunt de o parte ¸si de alta a lui
CD ¸si ⇔ C ¸si D sunt de o parte ¸si de alta a lui AB. Aceasta revine la
a aplica testul de orientare −→ polinoame de gradul II.

▶ De stabilit cum se procedeaz˘a dac˘a segmentele sunt incluse ˆın acee¸si

dreapt˘a.

Algoritmi avansat¸i - C12. Intersect¸ii

4 / 30

▶ Ecuat¸ia (1) se scrie ˆın coordonate

(cid:26) xM = (1 − λ)xA + λxB = (1 − µ)xC + µxD

yM = (1 − λ)yA + λyB = (1 − µ)yC + µyD

Am obt¸inut sistemul (2) de dou˘a ecuat¸ii cu dou˘a necunoscute (λ, µ),

care poate fi rescris sub forma

(cid:26) (xB − xA)λ + (xD − xC )µ = xC − xA

(yB − yA)λ + (yD − yC )µ = yC − yA

(2)

(3)

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (IIa)

▶ Pentru a determina explicit punctul de intersect¸ie dintre dou˘a

segmente [AB] ¸si [CD]: un punct M este atˆat pe segmentul [AB], cˆat
¸si pe segmentul [CD] ⇔ exist˘a λ, µ ∈ [0, 1] astfel ca

M = (1 − λ)A + λB = (1 − µ)C + µD

(1)

(am scris punctul M ca fiind atˆat o combinat¸ie convex˘a a lui A ¸si B,
cˆat ¸si o combinat¸ie convex˘a a lui C ¸si D).

Algoritmi avansat¸i - C12. Intersect¸ii

5 / 30

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (IIa)

▶ Pentru a determina explicit punctul de intersect¸ie dintre dou˘a

segmente [AB] ¸si [CD]: un punct M este atˆat pe segmentul [AB], cˆat
¸si pe segmentul [CD] ⇔ exist˘a λ, µ ∈ [0, 1] astfel ca

M = (1 − λ)A + λB = (1 − µ)C + µD

(1)

(am scris punctul M ca fiind atˆat o combinat¸ie convex˘a a lui A ¸si B,
cˆat ¸si o combinat¸ie convex˘a a lui C ¸si D).

▶ Ecuat¸ia (1) se scrie ˆın coordonate

(cid:26) xM = (1 − λ)xA + λxB = (1 − µ)xC + µxD
yM = (1 − λ)yA + λyB = (1 − µ)yC + µyD

(2)

Am obt¸inut sistemul (2) de dou˘a ecuat¸ii cu dou˘a necunoscute (λ, µ),
care poate fi rescris sub forma

(cid:26) (xB − xA)λ + (xD − xC )µ = xC − xA
(yB − yA)λ + (yD − yC )µ = yC − yA

Algoritmi avansat¸i - C12. Intersect¸ii

(3)

5 / 30

▶ Dac˘a ∆ ̸= 0, atunci

λ =

1

∆

(cid:12)

(cid:12)

(cid:12)

(cid:12)

xC − xA xD − xC

yC − yA yD − yC

(cid:12)

(cid:12)

(cid:12)

(cid:12)

,

µ =

1

∆

(cid:12)

(cid:12)

(cid:12)

(cid:12)

xB − xA xC − xA

yB − yA yC − yA

(cid:12)

(cid:12)

(cid:12)

(cid:12)

,

deci calculul solut¸iilor λ ¸si µ ale sistemului (2) revine la evaluarea

unor rapoarte de forma polinom de gradul II

polinom de gradul II . Mai trebuie verificat faptul

c˘a λ, µ ∈ [0, 1].

▶ ˆIn final, prin ˆınlocuirea lui λ ¸si µ ˆın sistemul (2), se g˘asesc

coordonatele punctului de intersect¸ie −→ polinom de gradul III

polinom de gradul II .

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (IIa)

▶ Pentru sistemul (2), determinantul

∆ =

(cid:12)
(cid:12)
(cid:12)
(cid:12)

xB − xA xD − xC
yB − yA yD − yC

(cid:12)
(cid:12)
(cid:12)
(cid:12)

= (xB −xA)(yD −yC )−(yB −yA)(xD −xC )

este un polinom de gradul II. Dreptele AB ¸si CD se intersecteaz˘a
ˆıntr-un singur punct ⇔ ∆ ̸= 0.

Algoritmi avansat¸i - C12. Intersect¸ii

6 / 30

▶ ˆIn final, prin ˆınlocuirea lui λ ¸si µ ˆın sistemul (2), se g˘asesc

coordonatele punctului de intersect¸ie −→ polinom de gradul III

polinom de gradul II .

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (IIa)

▶ Pentru sistemul (2), determinantul

∆ =

(cid:12)
(cid:12)
(cid:12)
(cid:12)

xB − xA xD − xC
yB − yA yD − yC

(cid:12)
(cid:12)
(cid:12)
(cid:12)

= (xB −xA)(yD −yC )−(yB −yA)(xD −xC )

este un polinom de gradul II. Dreptele AB ¸si CD se intersecteaz˘a
ˆıntr-un singur punct ⇔ ∆ ̸= 0.

▶ Dac˘a ∆ ̸= 0, atunci
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
∆

λ =

xC − xA xD − xC
yC − yA yD − yC

(cid:12)
(cid:12)
(cid:12)
(cid:12)

,

µ =

1
∆

(cid:12)
(cid:12)
(cid:12)
(cid:12)

xB − xA xC − xA
yB − yA yC − yA

(cid:12)
(cid:12)
(cid:12)
(cid:12)

,

deci calculul solut¸iilor λ ¸si µ ale sistemului (2) revine la evaluarea
unor rapoarte de forma polinom de gradul II
c˘a λ, µ ∈ [0, 1].

polinom de gradul II . Mai trebuie verificat faptul

Algoritmi avansat¸i - C12. Intersect¸ii

6 / 30

Analiza complexit˘at¸ii algebrice

Determinarea complexit˘at¸ii algebrice (IIa)

▶ Pentru sistemul (2), determinantul

∆ =

(cid:12)
(cid:12)
(cid:12)
(cid:12)

xB − xA xD − xC
yB − yA yD − yC

(cid:12)
(cid:12)
(cid:12)
(cid:12)

= (xB −xA)(yD −yC )−(yB −yA)(xD −xC )

este un polinom de gradul II. Dreptele AB ¸si CD se intersecteaz˘a
ˆıntr-un singur punct ⇔ ∆ ̸= 0.

▶ Dac˘a ∆ ̸= 0, atunci
(cid:12)
(cid:12)
(cid:12)
(cid:12)

1
∆

λ =

xC − xA xD − xC
yC − yA yD − yC

(cid:12)
(cid:12)
(cid:12)
(cid:12)

,

µ =

1
∆

(cid:12)
(cid:12)
(cid:12)
(cid:12)

xB − xA xC − xA
yB − yA yC − yA

(cid:12)
(cid:12)
(cid:12)
(cid:12)

,

deci calculul solut¸iilor λ ¸si µ ale sistemului (2) revine la evaluarea
unor rapoarte de forma polinom de gradul II
c˘a λ, µ ∈ [0, 1].

polinom de gradul II . Mai trebuie verificat faptul

▶ ˆIn final, prin ˆınlocuirea lui λ ¸si µ ˆın sistemul (2), se g˘asesc
coordonatele punctului de intersect¸ie −→ polinom de gradul III
polinom de gradul II .

Algoritmi avansat¸i - C12. Intersect¸ii

6 / 30

▶ timp: O(n2)

▶ memorie: O(n)

(Problema 3’)

▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

▶ Complexitate:

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

intersecteaz˘a).

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

▶ timp: O(n2)

▶ memorie: O(n)

(Problema 3’)

intersecteaz˘a).

▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.
▶ Complexitate:

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

▶ memorie: O(n)

(Problema 3’)

intersecteaz˘a).

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.
▶ Complexitate:
▶ timp: O(n2)

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

(Problema 3’)

intersecteaz˘a).

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.
▶ Complexitate:
▶ timp: O(n2)
▶ memorie: O(n)

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

intersecteaz˘a).

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.
▶ Complexitate:
▶ timp: O(n2)
▶ memorie: O(n)
▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

(Problema 3’)

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.
▶ Complexitate:
▶ timp: O(n2)
▶ memorie: O(n)
▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

(Problema 3’)

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

intersecteaz˘a).

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

Algoritm - comentarii init¸iale

Algoritmul trivial

▶ Idee de lucru: Sunt considerate toate perechile de segmente ¸si se
determin˘a cele care se intersecteaz˘a / se calculeaz˘a punctele de
intersect¸ie.
▶ Complexitate:
▶ timp: O(n2)
▶ memorie: O(n)
▶ algebric: polinoame de gradul II (Problema 3), rapoarte de polinoame

(Problema 3’)

▶ Comentariu: ˆIn anumite cazuri: optim (dac˘a toate segmentele se

intersecteaz˘a).

▶ Algoritmi mai eficient¸i (output / intersection sensitive)?

Algoritmi avansat¸i - C12. Intersect¸ii

7 / 30

▶ dac˘a punctul curent este marginea din stˆanga a unui segment s, atunci

s este ad˘augat la list˘a L

▶ dac˘a punctul curent este marginea din dreapta a unui segment s,

atunci s este ¸sters din L ¸si se rapoarteaz˘a intersect¸ii ˆıntre s ¸si toate

segmentele din L

▶ Teorem˘a. Algoritmul are complexitate O(n log n + k) ¸si necesit˘a

O(n) memorie (k este num˘arul de perechi ce se intersecteaz˘a).

Algoritm - comentarii init¸iale

Rezolvarea problemei ˆın context 1D

▶ Se dau segmentele [li , ri ] (i = 1, . . . , n). Mai ˆıntˆai este realizat˘a
ordonarea lexicografic˘a a extremit˘at¸ilor segmentelor / intervalelor
ˆıntr-o list˘a P.

▶ Lista P este parcurs˘a (cresc˘ator); lista L a segmentelor care cont¸in

punctul curent din P este actualizat˘a:

Algoritmi avansat¸i - C12. Intersect¸ii

8 / 30

▶ Teorem˘a. Algoritmul are complexitate O(n log n + k) ¸si necesit˘a

O(n) memorie (k este num˘arul de perechi ce se intersecteaz˘a).

Algoritm - comentarii init¸iale

Rezolvarea problemei ˆın context 1D

▶ Se dau segmentele [li , ri ] (i = 1, . . . , n). Mai ˆıntˆai este realizat˘a
ordonarea lexicografic˘a a extremit˘at¸ilor segmentelor / intervalelor
ˆıntr-o list˘a P.

▶ Lista P este parcurs˘a (cresc˘ator); lista L a segmentelor care cont¸in

punctul curent din P este actualizat˘a:

▶ dac˘a punctul curent este marginea din stˆanga a unui segment s, atunci

s este ad˘augat la list˘a L

▶ dac˘a punctul curent este marginea din dreapta a unui segment s,

atunci s este ¸sters din L ¸si se rapoarteaz˘a intersect¸ii ˆıntre s ¸si toate
segmentele din L

Algoritmi avansat¸i - C12. Intersect¸ii

8 / 30

Algoritm - comentarii init¸iale

Rezolvarea problemei ˆın context 1D

▶ Se dau segmentele [li , ri ] (i = 1, . . . , n). Mai ˆıntˆai este realizat˘a
ordonarea lexicografic˘a a extremit˘at¸ilor segmentelor / intervalelor
ˆıntr-o list˘a P.

▶ Lista P este parcurs˘a (cresc˘ator); lista L a segmentelor care cont¸in

punctul curent din P este actualizat˘a:

▶ dac˘a punctul curent este marginea din stˆanga a unui segment s, atunci

s este ad˘augat la list˘a L

▶ dac˘a punctul curent este marginea din dreapta a unui segment s,

atunci s este ¸sters din L ¸si se rapoarteaz˘a intersect¸ii ˆıntre s ¸si toate
segmentele din L

▶ Teorem˘a. Algoritmul are complexitate O(n log n + k) ¸si necesit˘a
O(n) memorie (k este num˘arul de perechi ce se intersecteaz˘a).

Algoritmi avansat¸i - C12. Intersect¸ii

8 / 30

Metoda dreptei de baleiere

Un prim algoritm

Dreapta de baleiere d: orizontal˘a, astfel c˘a toate intersect¸iile situate
deasupra dreptei de baleiere au fost detectate. Statutul: mult¸imea
segmentelor care intersecteaz˘a d. Pentru aceste segmente se testeaz˘a
efectiv dac˘a se intersecteaz˘a sau nu. Evenimente : capetele
segmentelor −→ actualizarea statutului.

Statutul dreptelor din figur˘a. d1 : ∅;

d2 : s2;

d3 : s1, s2, s3;

d4 : ∅;

d5 : s4.

Algoritmi avansat¸i - C12. Intersect¸ii

9 / 30

Metoda dreptei de baleiere

Un prim algoritm

Obs. Sunt testate pentru intersect¸ie segmente care intersecteaz˘a, la
un moment dat, dreapta de baleiere d −→ (sunt testate segmentele
care sunt ”aproape” de-a lungul axei Oy ) −→ ˆınc˘a ineficient.

Algoritmi avansat¸i - C12. Intersect¸ii

10 / 30

Metoda dreptei de baleiere

Statut - posibile abord˘ari

Pentru segmentele s1, s2, s3 din figur˘a sunt prezentate dou˘a variante pentru statut.
Marginea superioar˘a a segmentului s este notat˘a cu us , iar cea inferioar˘a cu ds .ˆIn tabelul
din stˆanga statutul este o mult¸ime (nu se t¸ine cont de ordinea segmentelor), iar ˆın

tabelul din dreapta statutul este o list˘a (o mult¸ime ordonat˘a, ordinea elementelor fiind
relevant˘a). ˆIn varianta 2 (statutul=list˘a), punctele de intersect¸ie devin ¸si ele evenimente
¸si trebuie inserate ˆın coada de evenimente.

Algoritmi avansat¸i - C12. Intersect¸ii

11 / 30

▶ Segmentele: ordonate folosind extremit˘at¸ile superioare (lexicografic, x

apoi y ).

▶ Evenimente (puncte): (lexicografic, y apoi x).

▶ Statutul: list˘a (mult¸ime ordonat˘a)

▶ Avantaj: ˆın momentul modific˘arii statutului, sunt testate intersect¸iile

doar ˆın raport cu vecinii din list˘a (sunt testate segmentele care sunt

”aproape” de-a lungul axei Ox).

▶ Fundamental: Punctele de intersect¸ie devin, la rˆandul lor,

evenimente, deoarece schimb˘a ordinea segmenetelor care le determin˘a

−→ chiar dac˘a nu sunt determinate explicit, trebuie inserate ˆın lista

de evenimente (compararea coordonatelor poate necesita utilizarea

unor polinoame de gradul V)

Metoda dreptei de baleiere

Un algoritm eficient [Bentley ¸si Ottmann, 1979; Mehlhorn
¸si N¨aher, 1994]

▶ Idee de lucru: ordonare (segmente, evenimente).

Algoritmi avansat¸i - C12. Intersect¸ii

12 / 30

▶ Evenimente (puncte): (lexicografic, y apoi x).

▶ Statutul: list˘a (mult¸ime ordonat˘a)

▶ Avantaj: ˆın momentul modific˘arii statutului, sunt testate intersect¸iile

doar ˆın raport cu vecinii din list˘a (sunt testate segmentele care sunt

”aproape” de-a lungul axei Ox).

▶ Fundamental: Punctele de intersect¸ie devin, la rˆandul lor,

evenimente, deoarece schimb˘a ordinea segmenetelor care le determin˘a

−→ chiar dac˘a nu sunt determinate explicit, trebuie inserate ˆın lista

de evenimente (compararea coordonatelor poate necesita utilizarea

unor polinoame de gradul V)

Metoda dreptei de baleiere

Un algoritm eficient [Bentley ¸si Ottmann, 1979; Mehlhorn
¸si N¨aher, 1994]

▶ Idee de lucru: ordonare (segmente, evenimente).

▶ Segmentele: ordonate folosind extremit˘at¸ile superioare (lexicografic, x

apoi y ).

Algoritmi avansat¸i - C12. Intersect¸ii

12 / 30

▶ Statutul: list˘a (mult¸ime ordonat˘a)

▶ Avantaj: ˆın momentul modific˘arii statutului, sunt testate intersect¸iile

doar ˆın raport cu vecinii din list˘a (sunt testate segmentele care sunt

”aproape” de-a lungul axei Ox).

▶ Fundamental: Punctele de intersect¸ie devin, la rˆandul lor,

evenimente, deoarece schimb˘a ordinea segmenetelor care le determin˘a

−→ chiar dac˘a nu sunt determinate explicit, trebuie inserate ˆın lista

de evenimente (compararea coordonatelor poate necesita utilizarea

unor polinoame de gradul V)

Metoda dreptei de baleiere

Un algoritm eficient [Bentley ¸si Ottmann, 1979; Mehlhorn
¸si N¨aher, 1994]

▶ Idee de lucru: ordonare (segmente, evenimente).

▶ Segmentele: ordonate folosind extremit˘at¸ile superioare (lexicografic, x

apoi y ).

▶ Evenimente (puncte): (lexicografic, y apoi x).

Algoritmi avansat¸i - C12. Intersect¸ii

12 / 30

▶ Avantaj: ˆın momentul modific˘arii statutului, sunt testate intersect¸iile

doar ˆın raport cu vecinii din list˘a (sunt testate segmentele care sunt

”aproape” de-a lungul axei Ox).

▶ Fundamental: Punctele de intersect¸ie devin, la rˆandul lor,

evenimente, deoarece schimb˘a ordinea segmenetelor care le determin˘a

−→ chiar dac˘a nu sunt determinate explicit, trebuie inserate ˆın lista

de evenimente (compararea coordonatelor poate necesita utilizarea

unor polinoame de gradul V)

Metoda dreptei de baleiere

Un algoritm eficient [Bentley ¸si Ottmann, 1979; Mehlhorn
¸si N¨aher, 1994]

▶ Idee de lucru: ordonare (segmente, evenimente).

▶ Segmentele: ordonate folosind extremit˘at¸ile superioare (lexicografic, x

apoi y ).

▶ Evenimente (puncte): (lexicografic, y apoi x).
▶ Statutul: list˘a (mult¸ime ordonat˘a)

Algoritmi avansat¸i - C12. Intersect¸ii

12 / 30

▶ Fundamental: Punctele de intersect¸ie devin, la rˆandul lor,

evenimente, deoarece schimb˘a ordinea segmenetelor care le determin˘a

−→ chiar dac˘a nu sunt determinate explicit, trebuie inserate ˆın lista

de evenimente (compararea coordonatelor poate necesita utilizarea

unor polinoame de gradul V)

Metoda dreptei de baleiere

Un algoritm eficient [Bentley ¸si Ottmann, 1979; Mehlhorn
¸si N¨aher, 1994]

▶ Idee de lucru: ordonare (segmente, evenimente).

▶ Segmentele: ordonate folosind extremit˘at¸ile superioare (lexicografic, x

apoi y ).

▶ Evenimente (puncte): (lexicografic, y apoi x).
▶ Statutul: list˘a (mult¸ime ordonat˘a)

▶ Avantaj: ˆın momentul modific˘arii statutului, sunt testate intersect¸iile
doar ˆın raport cu vecinii din list˘a (sunt testate segmentele care sunt
”aproape” de-a lungul axei Ox).

Algoritmi avansat¸i - C12. Intersect¸ii

12 / 30

Metoda dreptei de baleiere

Un algoritm eficient [Bentley ¸si Ottmann, 1979; Mehlhorn
¸si N¨aher, 1994]

▶ Idee de lucru: ordonare (segmente, evenimente).

▶ Segmentele: ordonate folosind extremit˘at¸ile superioare (lexicografic, x

apoi y ).

▶ Evenimente (puncte): (lexicografic, y apoi x).
▶ Statutul: list˘a (mult¸ime ordonat˘a)

▶ Avantaj: ˆın momentul modific˘arii statutului, sunt testate intersect¸iile
doar ˆın raport cu vecinii din list˘a (sunt testate segmentele care sunt
”aproape” de-a lungul axei Ox).

▶ Fundamental: Punctele de intersect¸ie devin, la rˆandul lor,

evenimente, deoarece schimb˘a ordinea segmenetelor care le determin˘a
−→ chiar dac˘a nu sunt determinate explicit, trebuie inserate ˆın lista
de evenimente (compararea coordonatelor poate necesita utilizarea
unor polinoame de gradul V)

Algoritmi avansat¸i - C12. Intersect¸ii

12 / 30

▶ eliminat un segment din statutul liniei de baleiere

▶ testare pentru segmentele vecine nou ap˘arute

▶ segmentele care le determin˘a trebuie ”inversate” ˆın statutul liniei de

baleiere

▶ testare pentru segmentele vecine nou ap˘arute

▶ Marginea inferioar˘a a unui segment

▶ punctele de intersect¸ie (inserate ˆın mod corespunz˘ator pe parcurs)

Metoda dreptei de baleiere

3 tipuri de evenimente

▶ Marginea superioar˘a a unui segment

▶ apare un nou segment ˆın statutul liniei de baleiere, ce trebuie inserat

corespunz˘ator

▶ testat, ˆın raport cu vecinii, dac˘a au puncte de intersect¸ie sub linia de

baleiere −→ vor deveni ulterior evenimente

Algoritmi avansat¸i - C12. Intersect¸ii

13 / 30

▶ segmentele care le determin˘a trebuie ”inversate” ˆın statutul liniei de

baleiere

▶ testare pentru segmentele vecine nou ap˘arute

▶ punctele de intersect¸ie (inserate ˆın mod corespunz˘ator pe parcurs)

Metoda dreptei de baleiere

3 tipuri de evenimente

▶ Marginea superioar˘a a unui segment

▶ apare un nou segment ˆın statutul liniei de baleiere, ce trebuie inserat

corespunz˘ator

▶ testat, ˆın raport cu vecinii, dac˘a au puncte de intersect¸ie sub linia de

baleiere −→ vor deveni ulterior evenimente

▶ Marginea inferioar˘a a unui segment

▶ eliminat un segment din statutul liniei de baleiere
▶ testare pentru segmentele vecine nou ap˘arute

Algoritmi avansat¸i - C12. Intersect¸ii

13 / 30

Metoda dreptei de baleiere

3 tipuri de evenimente

▶ Marginea superioar˘a a unui segment

▶ apare un nou segment ˆın statutul liniei de baleiere, ce trebuie inserat

corespunz˘ator

▶ testat, ˆın raport cu vecinii, dac˘a au puncte de intersect¸ie sub linia de

baleiere −→ vor deveni ulterior evenimente

▶ Marginea inferioar˘a a unui segment

▶ eliminat un segment din statutul liniei de baleiere
▶ testare pentru segmentele vecine nou ap˘arute

▶ punctele de intersect¸ie (inserate ˆın mod corespunz˘ator pe parcurs)
▶ segmentele care le determin˘a trebuie ”inversate” ˆın statutul liniei de

baleiere

▶ testare pentru segmentele vecine nou ap˘arute

Algoritmi avansat¸i - C12. Intersect¸ii

13 / 30

La evenimentul us5 statutul se modific˘a de la (s1, s2, s3, s4) la (s1, s5, s2, s3, s4). De

asemenea, sunt efectuate teste de intersect¸ie ˆıntre vecinii nou ap˘arut¸i. Astfel, s1

¸si s5 nu se intersecteaz˘a, ˆın schimb s5 ¸si s2 se intersecteaz˘a, fiind inserat un nou

eveniment (s5 ∩ s2).

Metoda dreptei de baleiere

Evenimente de tip margine superioar˘a

Algoritmi avansat¸i - C12. Intersect¸ii

14 / 30

Metoda dreptei de baleiere

Evenimente de tip margine superioar˘a

La evenimentul us5 statutul se modific˘a de la (s1, s2, s3, s4) la (s1, s5, s2, s3, s4). De
asemenea, sunt efectuate teste de intersect¸ie ˆıntre vecinii nou ap˘arut¸i. Astfel, s1
¸si s5 nu se intersecteaz˘a, ˆın schimb s5 ¸si s2 se intersecteaz˘a, fiind inserat un nou
eveniment (s5 ∩ s2).

Algoritmi avansat¸i - C12. Intersect¸ii

14 / 30

Evenimentul analizat este ds1 . ˆIn figura din stˆanga, evenimentul s2 ∩ s3 nu a fost

detectat anterior ¸si este ad˘augat ˆın lista de evenimente. ˆIn figura din dreapta,

evenimentul s2 ∩ s3 a fost detectat anterior, ˆıntrucˆat s2 ¸si s3 au fost vecine ˆın

statut ˆınainte de evenimentul us1 .

Metoda dreptei de baleiere

Evenimente de tip margine inferioar˘a

Algoritmi avansat¸i - C12. Intersect¸ii

15 / 30

Metoda dreptei de baleiere

Evenimente de tip margine inferioar˘a

Evenimentul analizat este ds1 . ˆIn figura din stˆanga, evenimentul s2 ∩ s3 nu a fost
detectat anterior ¸si este ad˘augat ˆın lista de evenimente. ˆIn figura din dreapta,
evenimentul s2 ∩ s3 a fost detectat anterior, ˆıntrucˆat s2 ¸si s3 au fost vecine ˆın
statut ˆınainte de evenimentul us1 .

Algoritmi avansat¸i - C12. Intersect¸ii

15 / 30

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

dreapta

repetit¸ii)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!

▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

dreapta

repetit¸ii)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!

▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

dreapta

repetit¸ii)

▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

dreapta

repetit¸ii)

▶ T – statut: arbore de c˘autare binar echilibrat

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!
▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

dreapta

repetit¸ii)

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!
▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

repetit¸ii)

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!
▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

dreapta

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

repetit¸ii)

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!
▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

dreapta

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

Metoda dreptei de baleiere

Implementare: structuri de date utilizate

▶ Q – coada/lista de evenimente (event queue)

▶ puncte, ordonate lexicografic, dup˘a y apoi x; memorat˘a ˆıntr-un arbore

de c˘autare binar echilibrat (balanced binary search tree)

▶ evenimentele nou detectate trebuie inserate ˆın mod corespunz˘ator!
▶ de evaluat: complexitatea-timp (pentru o inserare, num˘arul de

repetit¸ii); complexitatea spat¸iu

▶ T – statut: arbore de c˘autare binar echilibrat

▶ pe frunze: segmente, este ret¸inut˘a ordinea segmentelor de la stˆanga la

dreapta

▶ ˆın nodurile interne: segmente, privite ca elemente de ghidare
▶ de evaluat: complexitatea-timp (pentru o actualizare, num˘arul de

repetit¸ii)

Algoritmi avansat¸i - C12. Intersect¸ii

16 / 30

Metoda dreptei de baleiere

Exemplu

Algoritmi avansat¸i - C12. Intersect¸ii

17 / 30

▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu

marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

2. T ← ∅.

3. while Q ̸= ∅

4.

5.

ANALIZEAZA (p)

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu

marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

2. T ← ∅.

3. while Q ̸= ∅

4.

5.

ANALIZEAZA (p)

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.
▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

2. T ← ∅.

3. while Q ̸= ∅

4.

5.

ANALIZEAZA (p)

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.
▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu
marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

3. while Q ̸= ∅

4.

5.

ANALIZEAZA (p)

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.
▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu
marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

2. T ← ∅.

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

4.

5.

ANALIZEAZA (p)

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.
▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu
marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

2. T ← ∅.

3. while Q ̸= ∅

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

5.

ANALIZEAZA (p)

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.
▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu
marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

2. T ← ∅.

3. while Q ̸= ∅

4.

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

Metoda dreptei de baleiere

Algoritm INTERSECTII

▶ Input. O mult¸ime de segmente din planul R2.
▶ Output. Mult¸imea punctelor de intersect¸ie (explicit sau doar formal);

pentru fiecare punct precizeaz˘a segmentele pe care se g˘ase¸ste.

1. Q ← ∅. Insereaz˘a extremit˘at¸ile segmentelor ˆın Q; ˆımpreun˘a cu
marginea superioar˘a a unui segment memoreaz˘a ¸si segmentul

2. T ← ∅.

3. while Q ̸= ∅

4.

5.

do determin˘a evenimentul p care urmeaz˘a ˆın Q ¸si ˆıl ¸sterge

ANALIZEAZA (p)

Algoritmi avansat¸i - C12. Intersect¸ii

18 / 30

2. Determin˘a toate segmentele care cont¸in p: sunt adiacente ˆın T (de

ce?) Fie D(p), respectiv Int(p), mult¸imea segmentelor care au p

drept margine inferioar˘a, respectiv cont¸in p ˆın interior.

3. if U(p) ∪ D(p) ∪ Int(p) cont¸ine mai mult de un segment

4.

then raporteaz˘a p ca punct de intersect¸ie, ˆımpreun˘a cu

segmentele din U(p), D(p), Int(p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

1. Fie U(p) mult¸imea segmentelor a c˘aror extremitate superioar˘a este p
(pentru cele orizontale este marginea din stˆanga) - stocat˘a cu p ˆın Q.

Algoritmi avansat¸i - C12. Intersect¸ii

19 / 30

3. if U(p) ∪ D(p) ∪ Int(p) cont¸ine mai mult de un segment

4.

then raporteaz˘a p ca punct de intersect¸ie, ˆımpreun˘a cu

segmentele din U(p), D(p), Int(p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

1. Fie U(p) mult¸imea segmentelor a c˘aror extremitate superioar˘a este p
(pentru cele orizontale este marginea din stˆanga) - stocat˘a cu p ˆın Q.

2. Determin˘a toate segmentele care cont¸in p: sunt adiacente ˆın T (de
ce?) Fie D(p), respectiv Int(p), mult¸imea segmentelor care au p
drept margine inferioar˘a, respectiv cont¸in p ˆın interior.

Algoritmi avansat¸i - C12. Intersect¸ii

19 / 30

4.

then raporteaz˘a p ca punct de intersect¸ie, ˆımpreun˘a cu

segmentele din U(p), D(p), Int(p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

1. Fie U(p) mult¸imea segmentelor a c˘aror extremitate superioar˘a este p
(pentru cele orizontale este marginea din stˆanga) - stocat˘a cu p ˆın Q.

2. Determin˘a toate segmentele care cont¸in p: sunt adiacente ˆın T (de
ce?) Fie D(p), respectiv Int(p), mult¸imea segmentelor care au p
drept margine inferioar˘a, respectiv cont¸in p ˆın interior.

3. if U(p) ∪ D(p) ∪ Int(p) cont¸ine mai mult de un segment

Algoritmi avansat¸i - C12. Intersect¸ii

19 / 30

Metoda dreptei de baleiere

ANALIZEAZA (p)

1. Fie U(p) mult¸imea segmentelor a c˘aror extremitate superioar˘a este p
(pentru cele orizontale este marginea din stˆanga) - stocat˘a cu p ˆın Q.

2. Determin˘a toate segmentele care cont¸in p: sunt adiacente ˆın T (de
ce?) Fie D(p), respectiv Int(p), mult¸imea segmentelor care au p
drept margine inferioar˘a, respectiv cont¸in p ˆın interior.

3. if U(p) ∪ D(p) ∪ Int(p) cont¸ine mai mult de un segment

4.

then raporteaz˘a p ca punct de intersect¸ie, ˆımpreun˘a cu
segmentele din U(p), D(p), Int(p)

Algoritmi avansat¸i - C12. Intersect¸ii

19 / 30

6. insereaz˘a segmentele din U(p) ∪ Int(p) ˆın T (ordinea segmentelor pe

frunzele lui T coincide cu ordinea ˆın care sunt intersectate de o linie

de baleiere situat˘a imediat sub p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

5. ¸sterge segmentele din D(p) ∪ Int(p) din T

Algoritmi avansat¸i - C12. Intersect¸ii

20 / 30

Metoda dreptei de baleiere

ANALIZEAZA (p)

5. ¸sterge segmentele din D(p) ∪ Int(p) din T

6. insereaz˘a segmentele din U(p) ∪ Int(p) ˆın T (ordinea segmentelor pe
frunzele lui T coincide cu ordinea ˆın care sunt intersectate de o linie
de baleiere situat˘a imediat sub p)

Algoritmi avansat¸i - C12. Intersect¸ii

20 / 30

8.

9.

10.

11.

12.

13.

14.

15.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)

else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p

DETERMINAEVENIMENT (sl , s ′, p)

fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

9.

10.

11.

12.

13.

14.

15.

DETERMINAEVENIMENT (sl , sr , p)

else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p

DETERMINAEVENIMENT (sl , s ′, p)

fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

10.

11.

12.

13.

14.

15.

else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p

DETERMINAEVENIMENT (sl , s ′, p)

fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

11.

12.

13.

14.

15.

fie sl vecinul din stˆanga al lui p

DETERMINAEVENIMENT (sl , s ′, p)

fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

10.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)
else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

12.

13.

14.

15.

DETERMINAEVENIMENT (sl , s ′, p)

fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

10.

11.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)
else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

13.

14.

15.

fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

10.

11.

12.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)
else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p
DETERMINAEVENIMENT (sl , s ′, p)

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

14.

15.

fie sr vecinul din dreapta al lui p

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

10.

11.

12.

13.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)
else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p
DETERMINAEVENIMENT (sl , s ′, p)
fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

15.

DETERMINAEVENIMENT (s ′′, sr , p)

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

10.

11.

12.

13.

14.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)
else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p
DETERMINAEVENIMENT (sl , s ′, p)
fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T
fie sr vecinul din dreapta al lui p

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

Metoda dreptei de baleiere

ANALIZEAZA (p)

7. if U(p) ∪ Int(p) = ∅

8.

9.

10.

11.

12.

13.

14.

15.

then fie sl ¸si sr vecinii din stˆanga/dreapta ai lui p din T

DETERMINAEVENIMENT (sl , sr , p)
else fie s ′ din U(p) ∪ Int(p) cel mai ˆın stˆanga ˆın T

fie sl vecinul din stˆanga al lui p
DETERMINAEVENIMENT (sl , s ′, p)
fie s ′′ din U(p) ∪ Int(p) cel mai ˆın dreapta ˆın T
fie sr vecinul din dreapta al lui p
DETERMINAEVENIMENT (s ′′, sr , p)

Algoritmi avansat¸i - C12. Intersect¸ii

21 / 30

2.

then insereaz˘a punctul de intersect¸ie ca eveniment ˆın Q

Metoda dreptei de baleiere

DETERMINAEVENIMENT (sgtl , sgtr , p)

1. if sgtl ¸si sgtr se intersecteaz˘a sub linia de baleiere sau pe linia
de baleiere, dar la dreapta lui p ¸si punctul de intersect¸ie nu
este deja ˆın Q

Algoritmi avansat¸i - C12. Intersect¸ii

22 / 30

Metoda dreptei de baleiere

DETERMINAEVENIMENT (sgtl , sgtr , p)

1. if sgtl ¸si sgtr se intersecteaz˘a sub linia de baleiere sau pe linia
de baleiere, dar la dreapta lui p ¸si punctul de intersect¸ie nu
este deja ˆın Q

2.

then insereaz˘a punctul de intersect¸ie ca eveniment ˆın Q

Algoritmi avansat¸i - C12. Intersect¸ii

22 / 30

Metoda dreptei de baleiere

Rezultatul principal (intersect¸ii de segmente)

Teorem˘a. Fie S o mult¸ime care cont¸ine n segmente din planul R2. Toate
punctele de intersect¸ie ale segmentelor din S, ˆımpreun˘a cu segmentele
corespunz˘atoare, pot fi determinate ˆın O(n log n + I log n) timp, folosind
O(n) spat¸iu (I este num˘arul punctelor de intersect¸ie).

Algoritmi avansat¸i - C12. Intersect¸ii

23 / 30

Alte rezultate

Suprapunerea unor segmente cu cont¸inut tematic diferit

Algoritmi avansat¸i - C12. Intersect¸ii

24 / 30

Alte rezultate

Red-blue intersections [Mairson ¸si Stolfi, 1988; Mantler ¸si
Snoeyink, 2000]

Teorem˘a. Pentru dou˘a mult¸imi R ¸si B de segmente din R2 avˆand
interioare disjuncte, perechile de segmente ce se intersecteaz˘a pot fi
determinate ˆın O(n log n + k) timp ¸si spat¸iu liniar, folosind predicate
(polinoame) de grad cel mult II (n = |R| + |B|) ¸si k este num˘arul
perechilor ce se intersecteaz˘a).

Algoritmi avansat¸i - C12. Intersect¸ii

25 / 30

ˆIn figur˘a sunt considerate dou˘a subdiviziuni S1, S2 ¸si structurile de tip DCEL

asociate, fiind reprezentate doar semi-muchiile corespunz˘atoare muchiilor BC ¸si

EF . Datorit˘a punctului de intersect¸ie P, aceste semi-muchii vor fi ˆınlocuite cu alte

perechi de semi-muchii. ˆIn mod analog se procedeaz˘a ¸si pentru intersect¸ia dintre

CD ¸si EF .

Suprapunerea straturilor tematice

Exemplu

Algoritmi avansat¸i - C12. Intersect¸ii

26 / 30

Suprapunerea straturilor tematice

Exemplu

ˆIn figur˘a sunt considerate dou˘a subdiviziuni S1, S2 ¸si structurile de tip DCEL
asociate, fiind reprezentate doar semi-muchiile corespunz˘atoare muchiilor BC ¸si

EF . Datorit˘a punctului de intersect¸ie P, aceste semi-muchii vor fi ˆınlocuite cu alte
perechi de semi-muchii. ˆIn mod analog se procedeaz˘a ¸si pentru intersect¸ia dintre
CD ¸si EF .

Algoritmi avansat¸i - C12. Intersect¸ii

26 / 30

ˆIn exemplul din figur˘a, prin vˆarful v al subdiviziunii S1 (cu albastru) trece o muchie

a subdiviziunii S2 (cu ro¸su).

Actualizarea presupune definirea unor semi-muchii noi (sau p˘astrarea celor vechi,

dup˘a caz), precum ¸si definirea / actualizarea pointerilor asociat¸i. La actualizare se

t¸ine cont de principiul fat¸a delimitat˘a de o muchie este la stˆanga acesteia.

De exemplu, semi-muchia e este ˆınlocuit˘a cu dou˘a semi-muchii e ′ ¸si e ′′. Pentru e ′

pointerii asociat¸i sunt: Origin(e ′)=v , Twin(e ′) este legat de actualizarea lui ˜e,

Next(e ′)=Next(e), Prev(e ′)=α (semi-muchia “cea mai apropiat˘a de e ′ ˆın sens

trigonometric”). Pentru e ′′ pointerii asociat¸i sunt: Origin(e ′′)=Origin(e),

Twin(e ′′) este legat de actualizarea lui ˜e, Next(e ′′)=β (semi-muchia “cea mai

apropiat˘a de e ′′ ˆın sens orar”), Prev(e ′′)=Prev(e).

Suprapunerea straturilor tematice

Actualizarea listei de semi-muchii

Algoritmi avansat¸i - C12. Intersect¸ii

27 / 30

Actualizarea presupune definirea unor semi-muchii noi (sau p˘astrarea celor vechi,

dup˘a caz), precum ¸si definirea / actualizarea pointerilor asociat¸i. La actualizare se

t¸ine cont de principiul fat¸a delimitat˘a de o muchie este la stˆanga acesteia.

De exemplu, semi-muchia e este ˆınlocuit˘a cu dou˘a semi-muchii e ′ ¸si e ′′. Pentru e ′

pointerii asociat¸i sunt: Origin(e ′)=v , Twin(e ′) este legat de actualizarea lui ˜e,

Next(e ′)=Next(e), Prev(e ′)=α (semi-muchia “cea mai apropiat˘a de e ′ ˆın sens

trigonometric”). Pentru e ′′ pointerii asociat¸i sunt: Origin(e ′′)=Origin(e),

Twin(e ′′) este legat de actualizarea lui ˜e, Next(e ′′)=β (semi-muchia “cea mai

apropiat˘a de e ′′ ˆın sens orar”), Prev(e ′′)=Prev(e).

Suprapunerea straturilor tematice

Actualizarea listei de semi-muchii

ˆIn exemplul din figur˘a, prin vˆarful v al subdiviziunii S1 (cu albastru) trece o muchie
a subdiviziunii S2 (cu ro¸su).

Algoritmi avansat¸i - C12. Intersect¸ii

27 / 30

Suprapunerea straturilor tematice

Actualizarea listei de semi-muchii

ˆIn exemplul din figur˘a, prin vˆarful v al subdiviziunii S1 (cu albastru) trece o muchie
a subdiviziunii S2 (cu ro¸su).
Actualizarea presupune definirea unor semi-muchii noi (sau p˘astrarea celor vechi,
dup˘a caz), precum ¸si definirea / actualizarea pointerilor asociat¸i. La actualizare se
t¸ine cont de principiul fat¸a delimitat˘a de o muchie este la stˆanga acesteia.
De exemplu, semi-muchia e este ˆınlocuit˘a cu dou˘a semi-muchii e ′ ¸si e ′′. Pentru e ′
pointerii asociat¸i sunt: Origin(e ′)=v , Twin(e ′) este legat de actualizarea lui ˜e,
Next(e ′)=Next(e), Prev(e ′)=α (semi-muchia “cea mai apropiat˘a de e ′ ˆın sens
trigonometric”). Pentru e ′′ pointerii asociat¸i sunt: Origin(e ′′)=Origin(e),
Twin(e ′′) este legat de actualizarea lui ˜e, Next(e ′′)=β (semi-muchia “cea mai
apropiat˘a de e ′′ ˆın sens orar”), Prev(e ′′)=Prev(e).

Algoritmi avansat¸i - C12. Intersect¸ii

27 / 30

▶ Actualizeaz˘a DO(S1,S2), ˆın cazul ˆın care evenimentul implic˘a atˆat

muchii ale lui S1, cˆat ¸si ale lui S2

▶ Memoreaz˘a noile muchii orientate adecvat

▶ Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat ˆıntr-o list˘a

dublu ˆınl˘ant¸uit˘a DO(S1,S2)

1. Copiaz˘a listele D1, D2 ˆıntr-o nou˘a list˘a dublu ˆınl˘ant¸uit˘a DO(S1,S2)

2. Calculeaz˘a toate intersect¸iile de muchii dintre S1 ¸si S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lˆang˘a actualizarea lui Q ¸si T ,

efectueaz˘a:

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

▶ Input. Dou˘a subdiviziuni planare S1, S2 memorate ˆın liste dublu

ˆınl˘ant¸uite DS1, DS2

Algoritmi avansat¸i - C12. Intersect¸ii

28 / 30

▶ Actualizeaz˘a DO(S1,S2), ˆın cazul ˆın care evenimentul implic˘a atˆat

muchii ale lui S1, cˆat ¸si ale lui S2

▶ Memoreaz˘a noile muchii orientate adecvat

1. Copiaz˘a listele D1, D2 ˆıntr-o nou˘a list˘a dublu ˆınl˘ant¸uit˘a DO(S1,S2)

2. Calculeaz˘a toate intersect¸iile de muchii dintre S1 ¸si S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lˆang˘a actualizarea lui Q ¸si T ,

efectueaz˘a:

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

▶ Input. Dou˘a subdiviziuni planare S1, S2 memorate ˆın liste dublu

ˆınl˘ant¸uite DS1, DS2

▶ Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat ˆıntr-o list˘a

dublu ˆınl˘ant¸uit˘a DO(S1,S2)

Algoritmi avansat¸i - C12. Intersect¸ii

28 / 30

▶ Actualizeaz˘a DO(S1,S2), ˆın cazul ˆın care evenimentul implic˘a atˆat

muchii ale lui S1, cˆat ¸si ale lui S2

▶ Memoreaz˘a noile muchii orientate adecvat

2. Calculeaz˘a toate intersect¸iile de muchii dintre S1 ¸si S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lˆang˘a actualizarea lui Q ¸si T ,

efectueaz˘a:

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

▶ Input. Dou˘a subdiviziuni planare S1, S2 memorate ˆın liste dublu

ˆınl˘ant¸uite DS1, DS2

▶ Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat ˆıntr-o list˘a

dublu ˆınl˘ant¸uit˘a DO(S1,S2)

1. Copiaz˘a listele D1, D2 ˆıntr-o nou˘a list˘a dublu ˆınl˘ant¸uit˘a DO(S1,S2)

Algoritmi avansat¸i - C12. Intersect¸ii

28 / 30

▶ Actualizeaz˘a DO(S1,S2), ˆın cazul ˆın care evenimentul implic˘a atˆat

muchii ale lui S1, cˆat ¸si ale lui S2

▶ Memoreaz˘a noile muchii orientate adecvat

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

▶ Input. Dou˘a subdiviziuni planare S1, S2 memorate ˆın liste dublu

ˆınl˘ant¸uite DS1, DS2

▶ Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat ˆıntr-o list˘a

dublu ˆınl˘ant¸uit˘a DO(S1,S2)

1. Copiaz˘a listele D1, D2 ˆıntr-o nou˘a list˘a dublu ˆınl˘ant¸uit˘a DO(S1,S2)
2. Calculeaz˘a toate intersect¸iile de muchii dintre S1 ¸si S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lˆang˘a actualizarea lui Q ¸si T ,
efectueaz˘a:

Algoritmi avansat¸i - C12. Intersect¸ii

28 / 30

▶ Memoreaz˘a noile muchii orientate adecvat

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

▶ Input. Dou˘a subdiviziuni planare S1, S2 memorate ˆın liste dublu

ˆınl˘ant¸uite DS1, DS2

▶ Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat ˆıntr-o list˘a

dublu ˆınl˘ant¸uit˘a DO(S1,S2)

1. Copiaz˘a listele D1, D2 ˆıntr-o nou˘a list˘a dublu ˆınl˘ant¸uit˘a DO(S1,S2)
2. Calculeaz˘a toate intersect¸iile de muchii dintre S1 ¸si S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lˆang˘a actualizarea lui Q ¸si T ,
efectueaz˘a:

▶ Actualizeaz˘a DO(S1,S2), ˆın cazul ˆın care evenimentul implic˘a atˆat

muchii ale lui S1, cˆat ¸si ale lui S2

Algoritmi avansat¸i - C12. Intersect¸ii

28 / 30

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

▶ Input. Dou˘a subdiviziuni planare S1, S2 memorate ˆın liste dublu

ˆınl˘ant¸uite DS1, DS2

▶ Output. Overlay-ul O(S1, S2) dintre S1, S2, memorat ˆıntr-o list˘a

dublu ˆınl˘ant¸uit˘a DO(S1,S2)

1. Copiaz˘a listele D1, D2 ˆıntr-o nou˘a list˘a dublu ˆınl˘ant¸uit˘a DO(S1,S2)
2. Calculeaz˘a toate intersect¸iile de muchii dintre S1 ¸si S2 cu algoritmul

INTERSECTII. La fiecare eveniment, pe lˆang˘a actualizarea lui Q ¸si T ,
efectueaz˘a:

▶ Actualizeaz˘a DO(S1,S2), ˆın cazul ˆın care evenimentul implic˘a atˆat

muchii ale lui S1, cˆat ¸si ale lui S2

▶ Memoreaz˘a noile muchii orientate adecvat

Algoritmi avansat¸i - C12. Intersect¸ii

28 / 30

4. Construie¸ste graful G ale c˘arui noduri corespund ciclilor de frontier˘a ¸si ale c˘arui

arce unesc fiecare ciclu corespunzˆand unui gol cu ciclul de la stˆanga vˆarfului cel

mai din stˆanga ¸si determin˘a componentele conexe ale lui G

5. for fiecare component˘a a lui G

6.

do Fie C unicul ciclu de frontier˘a exterioar˘a a

componentei ¸si fie f fat¸a m˘arginit˘a a ciclului. Creeaz˘a

o ˆınregistrare pentru f , seteaz˘a OuterComponent(f )

(c˘atre una din muchiile lui C), construie¸ste lista

InnerComponents(f ) (pentru fiecare gol, pointer c˘atre

una dintre muchiile orientate). Pentru fiecare muchie

orientat˘a, IncidentFace() c˘atre ˆınregistrarea lui f

7. Eticheteaz˘a fiecare fat¸˘a a lui O(S1, S2)

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

3. Determin˘a ciclii de frontier˘a din O(S1, S2), stabile¸ste natura (exteriori/interiori)

Algoritmi avansat¸i - C12. Intersect¸ii

29 / 30

5. for fiecare component˘a a lui G

6.

do Fie C unicul ciclu de frontier˘a exterioar˘a a

componentei ¸si fie f fat¸a m˘arginit˘a a ciclului. Creeaz˘a

o ˆınregistrare pentru f , seteaz˘a OuterComponent(f )

(c˘atre una din muchiile lui C), construie¸ste lista

InnerComponents(f ) (pentru fiecare gol, pointer c˘atre

una dintre muchiile orientate). Pentru fiecare muchie

orientat˘a, IncidentFace() c˘atre ˆınregistrarea lui f

7. Eticheteaz˘a fiecare fat¸˘a a lui O(S1, S2)

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

3. Determin˘a ciclii de frontier˘a din O(S1, S2), stabile¸ste natura (exteriori/interiori)

4. Construie¸ste graful G ale c˘arui noduri corespund ciclilor de frontier˘a ¸si ale c˘arui
arce unesc fiecare ciclu corespunzˆand unui gol cu ciclul de la stˆanga vˆarfului cel
mai din stˆanga ¸si determin˘a componentele conexe ale lui G

Algoritmi avansat¸i - C12. Intersect¸ii

29 / 30

6.

do Fie C unicul ciclu de frontier˘a exterioar˘a a

componentei ¸si fie f fat¸a m˘arginit˘a a ciclului. Creeaz˘a

o ˆınregistrare pentru f , seteaz˘a OuterComponent(f )

(c˘atre una din muchiile lui C), construie¸ste lista

InnerComponents(f ) (pentru fiecare gol, pointer c˘atre

una dintre muchiile orientate). Pentru fiecare muchie

orientat˘a, IncidentFace() c˘atre ˆınregistrarea lui f

7. Eticheteaz˘a fiecare fat¸˘a a lui O(S1, S2)

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

3. Determin˘a ciclii de frontier˘a din O(S1, S2), stabile¸ste natura (exteriori/interiori)

4. Construie¸ste graful G ale c˘arui noduri corespund ciclilor de frontier˘a ¸si ale c˘arui
arce unesc fiecare ciclu corespunzˆand unui gol cu ciclul de la stˆanga vˆarfului cel
mai din stˆanga ¸si determin˘a componentele conexe ale lui G

5. for fiecare component˘a a lui G

Algoritmi avansat¸i - C12. Intersect¸ii

29 / 30

7. Eticheteaz˘a fiecare fat¸˘a a lui O(S1, S2)

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

3. Determin˘a ciclii de frontier˘a din O(S1, S2), stabile¸ste natura (exteriori/interiori)

4. Construie¸ste graful G ale c˘arui noduri corespund ciclilor de frontier˘a ¸si ale c˘arui
arce unesc fiecare ciclu corespunzˆand unui gol cu ciclul de la stˆanga vˆarfului cel
mai din stˆanga ¸si determin˘a componentele conexe ale lui G

5. for fiecare component˘a a lui G

6.

do Fie C unicul ciclu de frontier˘a exterioar˘a a

componentei ¸si fie f fat¸a m˘arginit˘a a ciclului. Creeaz˘a
o ˆınregistrare pentru f , seteaz˘a OuterComponent(f )
(c˘atre una din muchiile lui C), construie¸ste lista
InnerComponents(f ) (pentru fiecare gol, pointer c˘atre
una dintre muchiile orientate). Pentru fiecare muchie
orientat˘a, IncidentFace() c˘atre ˆınregistrarea lui f

Algoritmi avansat¸i - C12. Intersect¸ii

29 / 30

Suprapunerea straturilor tematice

Algoritm SUPRAPUNERE (S1, S2)

3. Determin˘a ciclii de frontier˘a din O(S1, S2), stabile¸ste natura (exteriori/interiori)

4. Construie¸ste graful G ale c˘arui noduri corespund ciclilor de frontier˘a ¸si ale c˘arui
arce unesc fiecare ciclu corespunzˆand unui gol cu ciclul de la stˆanga vˆarfului cel
mai din stˆanga ¸si determin˘a componentele conexe ale lui G

5. for fiecare component˘a a lui G

6.

do Fie C unicul ciclu de frontier˘a exterioar˘a a

componentei ¸si fie f fat¸a m˘arginit˘a a ciclului. Creeaz˘a
o ˆınregistrare pentru f , seteaz˘a OuterComponent(f )
(c˘atre una din muchiile lui C), construie¸ste lista
InnerComponents(f ) (pentru fiecare gol, pointer c˘atre
una dintre muchiile orientate). Pentru fiecare muchie
orientat˘a, IncidentFace() c˘atre ˆınregistrarea lui f

7. Eticheteaz˘a fiecare fat¸˘a a lui O(S1, S2)

Algoritmi avansat¸i - C12. Intersect¸ii

29 / 30

▶ Corolar. (Operat¸ii boolene) Fie P1 un poligon cu n1 vˆarfuri ¸si P2

un poligon cu n2 vˆarfuri; fie n = n1 + n2. Atunci P1 ∪ P2, P1 ∩ P2 ¸si

P1 \ P2 pot fi determinate ˆın timp O(n log n + k log n), unde k este

complexitatea output-ului.

Suprapunerea straturilor tematice

Rezultate principale

▶ Teorem˘a. (Overlay-ul h˘art¸ilor) Fie S1 o subdiviziune de
complexitate n1, S2 o subdiviziune de complexitate n2, fie
n := n1 + n2. Overlay-ul dintre S1 ¸si S2 poate fi construit ˆın
O(n log n + k log n), unde k este complexitatea overlay-ului.

Algoritmi avansat¸i - C12. Intersect¸ii

30 / 30

Suprapunerea straturilor tematice

Rezultate principale

▶ Teorem˘a. (Overlay-ul h˘art¸ilor) Fie S1 o subdiviziune de
complexitate n1, S2 o subdiviziune de complexitate n2, fie
n := n1 + n2. Overlay-ul dintre S1 ¸si S2 poate fi construit ˆın
O(n log n + k log n), unde k este complexitatea overlay-ului.

▶ Corolar. (Operat¸ii boolene) Fie P1 un poligon cu n1 vˆarfuri ¸si P2
un poligon cu n2 vˆarfuri; fie n = n1 + n2. Atunci P1 ∪ P2, P1 ∩ P2 ¸si
P1 \ P2 pot fi determinate ˆın timp O(n log n + k log n), unde k este
complexitatea output-ului.

Algoritmi avansat¸i - C12. Intersect¸ii

30 / 30


