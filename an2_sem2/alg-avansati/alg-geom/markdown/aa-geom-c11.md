Algoritmi avansat¸i

C11 - Diagrame Voronoi

Mihai-Sorin Stupariu

Sem. al II-lea, 2025 - 2026

Algoritmi avansat¸i - C11. Diagrame Voronoi

1 / 47

Definit¸ie, propriet˘at¸i elementare

Definit¸ie, propriet˘at¸i elementare

Diagrame Voronoi ¸si triangul˘ari Delaunay

Un algoritm eficient

Subdiviziuni planare. DCEL

Algoritmi avansat¸i - C11. Diagrame Voronoi

2 / 47

▶ Ideea de a delimita “zone de influent¸˘a” a ap˘arut cu mult˘a vreme ˆın urm˘a

(de exemplu ˆın lucr˘arile lui Descartes, dar ¸si ˆın leg˘atur˘a cu alte probleme;

este utilizat˘a ˆın mod curent ˆın varii domenii. ˆIn plus, astfel de “ˆımp˘art¸iri”

apar ˆın natur˘a. Conceptul aferent este cel de diagram˘a Voronoi - exist˘a o

multitudine de aplicat¸ii.

Definit¸ie, propriet˘at¸i elementare

Motivat¸ie

▶ Problema oficiilor po¸stale: Se consider˘a o mult¸ime de puncte (oficiile

po¸stale) din plan. Ce zone vor deservi aceste oficii?

Sursa:Google Maps

Algoritmi avansat¸i - C11. Diagrame Voronoi

2 / 47

Definit¸ie, propriet˘at¸i elementare

Motivat¸ie

▶ Problema oficiilor po¸stale: Se consider˘a o mult¸ime de puncte (oficiile

po¸stale) din plan. Ce zone vor deservi aceste oficii?

Sursa:Google Maps

▶ Ideea de a delimita “zone de influent¸˘a” a ap˘arut cu mult˘a vreme ˆın urm˘a
(de exemplu ˆın lucr˘arile lui Descartes, dar ¸si ˆın leg˘atur˘a cu alte probleme;
este utilizat˘a ˆın mod curent ˆın varii domenii. ˆIn plus, astfel de “ˆımp˘art¸iri”
apar ˆın natur˘a. Conceptul aferent este cel de diagram˘a Voronoi - exist˘a o
multitudine de aplicat¸ii.

Algoritmi avansat¸i - C11. Diagrame Voronoi

2 / 47

Definit¸ie, propriet˘at¸i elementare

Aplicat¸ii - ret¸ele de transport

Sursa: [Tu et al., 2014]

Algoritmi avansat¸i - C11. Diagrame Voronoi

3 / 47

Definit¸ie, propriet˘at¸i elementare

Aplicat¸ii - ret¸ele de transport

Sursa: [Lebedeva et al., 2018]

Algoritmi avansat¸i - C11. Diagrame Voronoi

4 / 47

Definit¸ie, propriet˘at¸i elementare

Aplicat¸ii - medicin˘a

Sursa: [Antiga et al., 2003]

Algoritmi avansat¸i - C11. Diagrame Voronoi

5 / 47

Definit¸ie, propriet˘at¸i elementare

Aplicat¸ii - medicin˘a

Sursa: [Wang et al., 2019]

Algoritmi avansat¸i - C11. Diagrame Voronoi

6 / 47

Definit¸ie, propriet˘at¸i elementare

Exemple - diagrame Voronoi ˆın context 2D

Algoritmi avansat¸i - C11. Diagrame Voronoi

7 / 47

Definit¸ie, propriet˘at¸i elementare

Exemple - diagrame Voronoi ˆın context 2D

Algoritmi avansat¸i - C11. Diagrame Voronoi

8 / 47

Definit¸ie, propriet˘at¸i elementare

Exemple - diagrame Voronoi ˆın context 2D

Algoritmi avansat¸i - C11. Diagrame Voronoi

9 / 47

▶ Diagrama Voronoi a lui P (notat˘a Vor(P)) este o divizare a

planului R2 ˆın n celule V(P1), . . . , V(Pn) cu proprietatea c˘a

P ∈ V(Pi ) ⇔ d(P, Pi ) ≤ d(P, Pj ), ∀j = 1, . . . , n.

▶ Dou˘a celule adiacente au ˆın comun o muchie sau un vˆarf (punct de

intersect¸ie a muchiilor).

▶ Atent¸ie! Vˆarfurile lui Vor(P) sunt diferite de punctele din P.

▶ Uneori, prin abuz de limbaj, este precizat˘a doar ˆımp˘art¸irea ˆın muchii /

vˆarfuri.

▶ Diagrame Voronoi pot fi construite pentru diverse funct¸ii distant¸˘a

(e.g. distant¸a Manhattan); forma celulelor depinde de forma

“cercului” ˆın raport cu funct¸ia distant¸˘a respectiv˘a. De asemenea,

exist˘a ¸si diagrame Voronoi cu ponderi.

Definit¸ie, propriet˘at¸i elementare

Formalizare

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de puncte din planul R2, numite

situri.

Algoritmi avansat¸i - C11. Diagrame Voronoi

10 / 47

▶ Dou˘a celule adiacente au ˆın comun o muchie sau un vˆarf (punct de

intersect¸ie a muchiilor).

▶ Atent¸ie! Vˆarfurile lui Vor(P) sunt diferite de punctele din P.

▶ Uneori, prin abuz de limbaj, este precizat˘a doar ˆımp˘art¸irea ˆın muchii /

vˆarfuri.

▶ Diagrame Voronoi pot fi construite pentru diverse funct¸ii distant¸˘a

(e.g. distant¸a Manhattan); forma celulelor depinde de forma

“cercului” ˆın raport cu funct¸ia distant¸˘a respectiv˘a. De asemenea,

exist˘a ¸si diagrame Voronoi cu ponderi.

Definit¸ie, propriet˘at¸i elementare

Formalizare

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de puncte din planul R2, numite

situri.

▶ Diagrama Voronoi a lui P (notat˘a Vor(P)) este o divizare a
planului R2 ˆın n celule V(P1), . . . , V(Pn) cu proprietatea c˘a

P ∈ V(Pi ) ⇔ d(P, Pi ) ≤ d(P, Pj ), ∀j = 1, . . . , n.

Algoritmi avansat¸i - C11. Diagrame Voronoi

10 / 47

▶ Diagrame Voronoi pot fi construite pentru diverse funct¸ii distant¸˘a

(e.g. distant¸a Manhattan); forma celulelor depinde de forma

“cercului” ˆın raport cu funct¸ia distant¸˘a respectiv˘a. De asemenea,

exist˘a ¸si diagrame Voronoi cu ponderi.

Definit¸ie, propriet˘at¸i elementare

Formalizare

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de puncte din planul R2, numite

situri.

▶ Diagrama Voronoi a lui P (notat˘a Vor(P)) este o divizare a
planului R2 ˆın n celule V(P1), . . . , V(Pn) cu proprietatea c˘a

P ∈ V(Pi ) ⇔ d(P, Pi ) ≤ d(P, Pj ), ∀j = 1, . . . , n.

▶ Dou˘a celule adiacente au ˆın comun o muchie sau un vˆarf (punct de

intersect¸ie a muchiilor).

▶ Atent¸ie! Vˆarfurile lui Vor(P) sunt diferite de punctele din P.
▶ Uneori, prin abuz de limbaj, este precizat˘a doar ˆımp˘art¸irea ˆın muchii /

vˆarfuri.

Algoritmi avansat¸i - C11. Diagrame Voronoi

10 / 47

Definit¸ie, propriet˘at¸i elementare

Formalizare

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de puncte din planul R2, numite

situri.

▶ Diagrama Voronoi a lui P (notat˘a Vor(P)) este o divizare a
planului R2 ˆın n celule V(P1), . . . , V(Pn) cu proprietatea c˘a

P ∈ V(Pi ) ⇔ d(P, Pi ) ≤ d(P, Pj ), ∀j = 1, . . . , n.

▶ Dou˘a celule adiacente au ˆın comun o muchie sau un vˆarf (punct de

intersect¸ie a muchiilor).

▶ Atent¸ie! Vˆarfurile lui Vor(P) sunt diferite de punctele din P.
▶ Uneori, prin abuz de limbaj, este precizat˘a doar ˆımp˘art¸irea ˆın muchii /

vˆarfuri.

▶ Diagrame Voronoi pot fi construite pentru diverse funct¸ii distant¸˘a
(e.g. distant¸a Manhattan); forma celulelor depinde de forma
“cercului” ˆın raport cu funct¸ia distant¸˘a respectiv˘a. De asemenea,
exist˘a ¸si diagrame Voronoi cu ponderi.

Algoritmi avansat¸i - C11. Diagrame Voronoi

10 / 47

▶ Celula asociat˘a unui punct este o intersect¸ie de semiplane:

V(Pi ) =

h(Pi , Pj ),

(cid:92)

j̸=i

unde h(Pi , Pj ) este semiplanul determinat de mediatoarea segmentului [Pi Pj ] care

cont¸ine punctul Pi . ˆIn particular: fiecare celul˘a este o mult¸ime convex˘a.

Aplicabilitate: algoritm (lent, complexitate-timp O(n2 log n)) de determinare a

diagramei Voronoi.

▶ Dac˘a toate punctele sunt coliniare, atunci diagrama Voronoi asociat˘a Vor(P)

cont¸ine n − 1 drepte paralele ˆıntre ele (ˆın particular, pentru n ≥ 3, ea nu este

conex˘a). ˆIn caz contrar, diagrama este conex˘a, iar muchiile sale sunt fie segmente,

fie semidrepte (cui corespund acestea?). Exist˘a o propozit¸ie care caracterizeaz˘a

mediatoarele segmentelor [Pi Pj ] care definesc muchii ale diagramei Voronoi.

▶ Propozit¸ie. Fie o mult¸ime cu n situri. Atunci, pentru diagrama Voronoi asociat˘a

au loc inegalit˘at¸ile

acesteia.

unde nv este num˘arul de vˆarfuri ale diagramei ¸si nm este num˘arul de muchii al

nv ≤ 2n − 5,

nm ≤ 3n − 6,

Definit¸ie, propriet˘at¸i elementare

Structura unei diagrame Voronoi

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de situri (puncte) din planul R2.

Algoritmi avansat¸i - C11. Diagrame Voronoi

11 / 47

▶ Dac˘a toate punctele sunt coliniare, atunci diagrama Voronoi asociat˘a Vor(P)

cont¸ine n − 1 drepte paralele ˆıntre ele (ˆın particular, pentru n ≥ 3, ea nu este

conex˘a). ˆIn caz contrar, diagrama este conex˘a, iar muchiile sale sunt fie segmente,

fie semidrepte (cui corespund acestea?). Exist˘a o propozit¸ie care caracterizeaz˘a

mediatoarele segmentelor [Pi Pj ] care definesc muchii ale diagramei Voronoi.

▶ Propozit¸ie. Fie o mult¸ime cu n situri. Atunci, pentru diagrama Voronoi asociat˘a

au loc inegalit˘at¸ile

acesteia.

unde nv este num˘arul de vˆarfuri ale diagramei ¸si nm este num˘arul de muchii al

nv ≤ 2n − 5,

nm ≤ 3n − 6,

Definit¸ie, propriet˘at¸i elementare

Structura unei diagrame Voronoi

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de situri (puncte) din planul R2.
▶ Celula asociat˘a unui punct este o intersect¸ie de semiplane:

V(Pi ) =

(cid:92)

h(Pi , Pj ),

j̸=i
unde h(Pi , Pj ) este semiplanul determinat de mediatoarea segmentului [Pi Pj ] care
cont¸ine punctul Pi . ˆIn particular: fiecare celul˘a este o mult¸ime convex˘a.
Aplicabilitate: algoritm (lent, complexitate-timp O(n2 log n)) de determinare a
diagramei Voronoi.

Algoritmi avansat¸i - C11. Diagrame Voronoi

11 / 47

▶ Propozit¸ie. Fie o mult¸ime cu n situri. Atunci, pentru diagrama Voronoi asociat˘a

au loc inegalit˘at¸ile

acesteia.

unde nv este num˘arul de vˆarfuri ale diagramei ¸si nm este num˘arul de muchii al

nv ≤ 2n − 5,

nm ≤ 3n − 6,

Definit¸ie, propriet˘at¸i elementare

Structura unei diagrame Voronoi

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de situri (puncte) din planul R2.
▶ Celula asociat˘a unui punct este o intersect¸ie de semiplane:

V(Pi ) =

(cid:92)

h(Pi , Pj ),

j̸=i
unde h(Pi , Pj ) este semiplanul determinat de mediatoarea segmentului [Pi Pj ] care
cont¸ine punctul Pi . ˆIn particular: fiecare celul˘a este o mult¸ime convex˘a.
Aplicabilitate: algoritm (lent, complexitate-timp O(n2 log n)) de determinare a
diagramei Voronoi.

▶ Dac˘a toate punctele sunt coliniare, atunci diagrama Voronoi asociat˘a Vor(P)
cont¸ine n − 1 drepte paralele ˆıntre ele (ˆın particular, pentru n ≥ 3, ea nu este
conex˘a). ˆIn caz contrar, diagrama este conex˘a, iar muchiile sale sunt fie segmente,
fie semidrepte (cui corespund acestea?). Exist˘a o propozit¸ie care caracterizeaz˘a
mediatoarele segmentelor [Pi Pj ] care definesc muchii ale diagramei Voronoi.

Algoritmi avansat¸i - C11. Diagrame Voronoi

11 / 47

Definit¸ie, propriet˘at¸i elementare

Structura unei diagrame Voronoi

▶ Fie P = {P1, P2, . . . , Pn} o mult¸ime de situri (puncte) din planul R2.
▶ Celula asociat˘a unui punct este o intersect¸ie de semiplane:

V(Pi ) =

(cid:92)

h(Pi , Pj ),

j̸=i
unde h(Pi , Pj ) este semiplanul determinat de mediatoarea segmentului [Pi Pj ] care
cont¸ine punctul Pi . ˆIn particular: fiecare celul˘a este o mult¸ime convex˘a.
Aplicabilitate: algoritm (lent, complexitate-timp O(n2 log n)) de determinare a
diagramei Voronoi.

▶ Dac˘a toate punctele sunt coliniare, atunci diagrama Voronoi asociat˘a Vor(P)
cont¸ine n − 1 drepte paralele ˆıntre ele (ˆın particular, pentru n ≥ 3, ea nu este
conex˘a). ˆIn caz contrar, diagrama este conex˘a, iar muchiile sale sunt fie segmente,
fie semidrepte (cui corespund acestea?). Exist˘a o propozit¸ie care caracterizeaz˘a
mediatoarele segmentelor [Pi Pj ] care definesc muchii ale diagramei Voronoi.
▶ Propozit¸ie. Fie o mult¸ime cu n situri. Atunci, pentru diagrama Voronoi asociat˘a

au loc inegalit˘at¸ile

nv ≤ 2n − 5,

nm ≤ 3n − 6,

unde nv este num˘arul de vˆarfuri ale diagramei ¸si nm este num˘arul de muchii al
acesteia.

Algoritmi avansat¸i - C11. Diagrame Voronoi

11 / 47

• Mult¸ime de puncte P ˆın planul R2 =⇒

• Diagrama Voronoi Vor(P) =⇒

• Graful dual G(P). Noduri: fet¸ele diagramei Voronoi (siturile). Arce:

dac˘a celulele (fet¸ele diagramei Voronoi corespunz˘atoare) au o muchie

comun˘a =⇒

• Triangulare TP (numit˘a triangulare Delaunay)

Diagrame Voronoi ¸si triangul˘ari Delaunay

Diagrame Voronoi ¸si triangul˘ari

▶ Construct¸ie:

Algoritmi avansat¸i - C11. Diagrame Voronoi

12 / 47

• Diagrama Voronoi Vor(P) =⇒

• Graful dual G(P). Noduri: fet¸ele diagramei Voronoi (siturile). Arce:

dac˘a celulele (fet¸ele diagramei Voronoi corespunz˘atoare) au o muchie

comun˘a =⇒

• Triangulare TP (numit˘a triangulare Delaunay)

Diagrame Voronoi ¸si triangul˘ari Delaunay

Diagrame Voronoi ¸si triangul˘ari

▶ Construct¸ie:

• Mult¸ime de puncte P ˆın planul R2 =⇒

Algoritmi avansat¸i - C11. Diagrame Voronoi

12 / 47

• Graful dual G(P). Noduri: fet¸ele diagramei Voronoi (siturile). Arce:

dac˘a celulele (fet¸ele diagramei Voronoi corespunz˘atoare) au o muchie

comun˘a =⇒

• Triangulare TP (numit˘a triangulare Delaunay)

Diagrame Voronoi ¸si triangul˘ari Delaunay

Diagrame Voronoi ¸si triangul˘ari

▶ Construct¸ie:

• Mult¸ime de puncte P ˆın planul R2 =⇒
• Diagrama Voronoi Vor(P) =⇒

Algoritmi avansat¸i - C11. Diagrame Voronoi

12 / 47

• Triangulare TP (numit˘a triangulare Delaunay)

Diagrame Voronoi ¸si triangul˘ari Delaunay

Diagrame Voronoi ¸si triangul˘ari

▶ Construct¸ie:

• Mult¸ime de puncte P ˆın planul R2 =⇒
• Diagrama Voronoi Vor(P) =⇒
• Graful dual G(P). Noduri: fet¸ele diagramei Voronoi (siturile). Arce:
dac˘a celulele (fet¸ele diagramei Voronoi corespunz˘atoare) au o muchie
comun˘a =⇒

Algoritmi avansat¸i - C11. Diagrame Voronoi

12 / 47

Diagrame Voronoi ¸si triangul˘ari Delaunay

Diagrame Voronoi ¸si triangul˘ari

▶ Construct¸ie:

• Mult¸ime de puncte P ˆın planul R2 =⇒
• Diagrama Voronoi Vor(P) =⇒
• Graful dual G(P). Noduri: fet¸ele diagramei Voronoi (siturile). Arce:
dac˘a celulele (fet¸ele diagramei Voronoi corespunz˘atoare) au o muchie
comun˘a =⇒

• Triangulare TP (numit˘a triangulare Delaunay)

Algoritmi avansat¸i - C11. Diagrame Voronoi

12 / 47

▶ Teorem˘a. O triangulare este legal˘a dac˘a ¸si numai dac˘a este o triangulare Delaunay.

▶ Teorem˘a. Orice triangulare unghiular optim˘a este o triangulare Delaunay. Pentru

mult¸imile ˆın pozit¸ie general˘a (nu exist˘a patru puncte conciclice), orice triangulare

Delaunay maximizeaz˘a cel mai mic unghi, comparativ cu toate triangul˘arile lui P.

Diagrame Voronoi ¸si triangul˘ari Delaunay

Leg˘atura cu triangul˘arile legale / unghiular optime

▶ Propozit¸ie. Fie T o triangulare a lui P. Atunci T este o triangulare Delaunay
dac˘a ¸si numai dac˘a pentru orice triunghi din T cercul circumscris nu cont¸ine ˆın
interiorul s˘au niciun punct al lui P.

Pentru punctele A, B, C , D din figur˘a, triangularea construit˘a este o triangulare Delaunay. ˆIn schimb, triunghiul ∆ABC
nu poate participa la realizarea unei triangul˘ari Delaunay, deoarece D este ˆın interiorul cercului circumscris acestuia.

Algoritmi avansat¸i - C11. Diagrame Voronoi

13 / 47

▶ Teorem˘a. Orice triangulare unghiular optim˘a este o triangulare Delaunay. Pentru

mult¸imile ˆın pozit¸ie general˘a (nu exist˘a patru puncte conciclice), orice triangulare

Delaunay maximizeaz˘a cel mai mic unghi, comparativ cu toate triangul˘arile lui P.

Diagrame Voronoi ¸si triangul˘ari Delaunay

Leg˘atura cu triangul˘arile legale / unghiular optime

▶ Propozit¸ie. Fie T o triangulare a lui P. Atunci T este o triangulare Delaunay
dac˘a ¸si numai dac˘a pentru orice triunghi din T cercul circumscris nu cont¸ine ˆın
interiorul s˘au niciun punct al lui P.

Pentru punctele A, B, C , D din figur˘a, triangularea construit˘a este o triangulare Delaunay. ˆIn schimb, triunghiul ∆ABC
nu poate participa la realizarea unei triangul˘ari Delaunay, deoarece D este ˆın interiorul cercului circumscris acestuia.
▶ Teorem˘a. O triangulare este legal˘a dac˘a ¸si numai dac˘a este o triangulare Delaunay.

Algoritmi avansat¸i - C11. Diagrame Voronoi

13 / 47

Diagrame Voronoi ¸si triangul˘ari Delaunay

Leg˘atura cu triangul˘arile legale / unghiular optime

▶ Propozit¸ie. Fie T o triangulare a lui P. Atunci T este o triangulare Delaunay
dac˘a ¸si numai dac˘a pentru orice triunghi din T cercul circumscris nu cont¸ine ˆın
interiorul s˘au niciun punct al lui P.

Pentru punctele A, B, C , D din figur˘a, triangularea construit˘a este o triangulare Delaunay. ˆIn schimb, triunghiul ∆ABC
nu poate participa la realizarea unei triangul˘ari Delaunay, deoarece D este ˆın interiorul cercului circumscris acestuia.
▶ Teorem˘a. O triangulare este legal˘a dac˘a ¸si numai dac˘a este o triangulare Delaunay.
▶ Teorem˘a. Orice triangulare unghiular optim˘a este o triangulare Delaunay. Pentru
mult¸imile ˆın pozit¸ie general˘a (nu exist˘a patru puncte conciclice), orice triangulare
Delaunay maximizeaz˘a cel mai mic unghi, comparativ cu toate triangul˘arile lui P.

Algoritmi avansat¸i - C11. Diagrame Voronoi

13 / 47

Oricare dintre cele dou˘a diagonale determin˘a o triangulare Delaunay

(legal˘a), deoarece vˆarfurile corespunz˘atoare sunt “separate” de

muchia degenerat˘a.

Diagrame Voronoi ¸si triangul˘ari Delaunay

Leg˘atura cu triangul˘arile legale / unghiular optime - cazul
unui p˘atrat (patrulater inscriptibil)

ˆIntrebare: Cum “funct¸ioneaz˘a” aceast˘a construct¸ie cˆand punctele
din P sunt (de exemplu) vˆarfurile unui p˘atrat?

Algoritmi avansat¸i - C11. Diagrame Voronoi

14 / 47

Oricare dintre cele dou˘a diagonale determin˘a o triangulare Delaunay

(legal˘a), deoarece vˆarfurile corespunz˘atoare sunt “separate” de

muchia degenerat˘a.

Diagrame Voronoi ¸si triangul˘ari Delaunay

Leg˘atura cu triangul˘arile legale / unghiular optime - cazul
unui p˘atrat (patrulater inscriptibil)

ˆIntrebare: Cum “funct¸ioneaz˘a” aceast˘a construct¸ie cˆand punctele
din P sunt (de exemplu) vˆarfurile unui p˘atrat?

Algoritmi avansat¸i - C11. Diagrame Voronoi

14 / 47

Diagrame Voronoi ¸si triangul˘ari Delaunay

Leg˘atura cu triangul˘arile legale / unghiular optime - cazul
unui p˘atrat (patrulater inscriptibil)

ˆIntrebare: Cum “funct¸ioneaz˘a” aceast˘a construct¸ie cˆand punctele
din P sunt (de exemplu) vˆarfurile unui p˘atrat?

Oricare dintre cele dou˘a diagonale determin˘a o triangulare Delaunay
(legal˘a), deoarece vˆarfurile corespunz˘atoare sunt “separate” de
muchia degenerat˘a.

Algoritmi avansat¸i - C11. Diagrame Voronoi

14 / 47

▶ Principiu (paradigm˘a): sweep line / dreapt˘a de baleiere.

Un algoritm eficient

Algoritmul lui Fortune [1987]

▶ Metod˘a clasic˘a (¸si eficient˘a) de determinare a diagramei Voronoi

pentru o mult¸ime de puncte din planul R2. Complexitate: O(n log n).
Detalii:
http://www.ams.org/samplings/feature-column/fcarc-voronoi.
Suport vizual disponibil.

Algoritmi avansat¸i - C11. Diagrame Voronoi

15 / 47

Un algoritm eficient

Algoritmul lui Fortune [1987]

▶ Metod˘a clasic˘a (¸si eficient˘a) de determinare a diagramei Voronoi

pentru o mult¸ime de puncte din planul R2. Complexitate: O(n log n).
Detalii:
http://www.ams.org/samplings/feature-column/fcarc-voronoi.
Suport vizual disponibil.

▶ Principiu (paradigm˘a): sweep line / dreapt˘a de baleiere.

Algoritmi avansat¸i - C11. Diagrame Voronoi

15 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - problematizare

Inconvenient: la ˆıntˆalnirea unui vˆarf al diagramei, dreapta de
baleiere nu a ˆıntˆalnit ˆınc˘a toate siturile (puncte din P) care determin˘a
acest vˆarf! ˆIn figur˘a, la trecerea prin vˆarful V al diagramei Voronoi,
dreapta de baleiere d nu a ˆıntˆalnit ˆınc˘a toate siturile care determin˘a
V . Altfel spus, V ar trebui detectat ˆınainte de a trece prin B ¸si C .

Algoritmi avansat¸i - C11. Diagrame Voronoi

16 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - problematizare

Inconvenient: la ˆıntˆalnirea unui vˆarf al diagramei, dreapta de
baleiere nu a ˆıntˆalnit ˆınc˘a toate siturile (puncte din P) care determin˘a
acest vˆarf! ˆIn figur˘a, la trecerea prin vˆarful V al diagramei Voronoi,
dreapta de baleiere d nu a ˆıntˆalnit ˆınc˘a toate siturile care determin˘a
V . Altfel spus, V ar trebui detectat ˆınainte de a trece prin B ¸si C .

Algoritmi avansat¸i - C11. Diagrame Voronoi

16 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere

Adaptare: nu ret¸inem informat¸ia legat˘a de intersect¸ia dintre dreapta de
baleiere ¸si diagram˘a, ci doar informat¸ia legat˘a de partea diagramei care nu
mai poate fi influent¸at˘a de punctele situate de dincolo de dreapta de
baleiere. Acest lucru se realizeaz˘a asociind fiec˘arui sit cˆate o parabol˘a -
mult¸imea punctelor egal dep˘artate de sit ¸si de dreapta de baleiere. Pe
parcurs (i) aceste parabole ˆı¸si schimb˘a forma, (ii) pot s˘a dispar˘a / s˘a fie
“descompuse” ˆın arce de parabol˘a.

Algoritmi avansat¸i - C11. Diagrame Voronoi

17 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere

Adaptare: nu ret¸inem informat¸ia legat˘a de intersect¸ia dintre dreapta de
baleiere ¸si diagram˘a, ci doar informat¸ia legat˘a de partea diagramei care nu
mai poate fi influent¸at˘a de punctele situate de dincolo de dreapta de
baleiere. Acest lucru se realizeaz˘a asociind fiec˘arui sit cˆate o parabol˘a -
mult¸imea punctelor egal dep˘artate de sit ¸si de dreapta de baleiere. Pe
parcurs (i) aceste parabole ˆı¸si schimb˘a forma, (ii) pot s˘a dispar˘a / s˘a fie
“descompuse” ˆın arce de parabol˘a.

Algoritmi avansat¸i - C11. Diagrame Voronoi

17 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - curba parabolic˘a

Din punct de vedere practic, apare o reuniune de arce de parabol˘a (curb˘a
parabolic˘a), ceea ce este situat deasupra acestei curbe nu mai poate fi
influent¸at de evenimentele nedetectate.

Algoritmi avansat¸i - C11. Diagrame Voronoi

18 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - curba parabolic˘a

Din punct de vedere practic, apare o reuniune de arce de parabol˘a (curb˘a
parabolic˘a), ceea ce este situat deasupra acestei curbe nu mai poate fi
influent¸at de evenimentele nedetectate.

Algoritmi avansat¸i - C11. Diagrame Voronoi

18 / 47

▶ Este o reuniune de arce de parabol˘a.

▶ Un punct de pe curba parabolic˘a este egal dep˘artat de situl care

determin˘a arcul de parabol˘a ¸si dreapta de baleiere. Presupunem c˘a

dreapta de baleiere d are ecuat¸ia y = 0, iar situl Pi , situat deasupra lui

d (adic˘a yi > 0) are coordonatele (xi , yi ). Locul geometric al punctelor

egal dep˘artate de d ¸si Pi are ecuat¸ia

y =

x 2 −

x +

xi

yi

x 2

i + y 2

i

.

2yi

1

2yi

▶ Punctele de racord ale arcelor de parabol˘a apart¸in muchiilor diagramei

Voronoi.

▶ Curba parabolic˘a este x-monoton˘a, adic˘a orice dreapt˘a vertical˘a o

intersecteaz˘a exact ˆıntr-un punct (la ce folose¸ste aceast˘a proprietate?).

Un algoritm eficient

Despre curba parabolic˘a (I)

▶ Curba parabolic˘a (beach line):

Algoritmi avansat¸i - C11. Diagrame Voronoi

19 / 47

▶ Punctele de racord ale arcelor de parabol˘a apart¸in muchiilor diagramei

Voronoi.

▶ Curba parabolic˘a este x-monoton˘a, adic˘a orice dreapt˘a vertical˘a o

intersecteaz˘a exact ˆıntr-un punct (la ce folose¸ste aceast˘a proprietate?).

Un algoritm eficient

Despre curba parabolic˘a (I)

▶ Curba parabolic˘a (beach line):

▶ Este o reuniune de arce de parabol˘a.
▶ Un punct de pe curba parabolic˘a este egal dep˘artat de situl care

determin˘a arcul de parabol˘a ¸si dreapta de baleiere. Presupunem c˘a
dreapta de baleiere d are ecuat¸ia y = 0, iar situl Pi , situat deasupra lui
d (adic˘a yi > 0) are coordonatele (xi , yi ). Locul geometric al punctelor
egal dep˘artate de d ¸si Pi are ecuat¸ia

y =

1
2yi

x 2 −

xi
yi

x +

x 2
i + y 2
i
2yi

.

Algoritmi avansat¸i - C11. Diagrame Voronoi

19 / 47

▶ Curba parabolic˘a este x-monoton˘a, adic˘a orice dreapt˘a vertical˘a o

intersecteaz˘a exact ˆıntr-un punct (la ce folose¸ste aceast˘a proprietate?).

Un algoritm eficient

Despre curba parabolic˘a (I)

▶ Curba parabolic˘a (beach line):

▶ Este o reuniune de arce de parabol˘a.
▶ Un punct de pe curba parabolic˘a este egal dep˘artat de situl care

determin˘a arcul de parabol˘a ¸si dreapta de baleiere. Presupunem c˘a
dreapta de baleiere d are ecuat¸ia y = 0, iar situl Pi , situat deasupra lui
d (adic˘a yi > 0) are coordonatele (xi , yi ). Locul geometric al punctelor
egal dep˘artate de d ¸si Pi are ecuat¸ia

y =

1
2yi

x 2 −

xi
yi

x +

x 2
i + y 2
i
2yi

.

▶ Punctele de racord ale arcelor de parabol˘a apart¸in muchiilor diagramei

Voronoi.

Algoritmi avansat¸i - C11. Diagrame Voronoi

19 / 47

Un algoritm eficient

Despre curba parabolic˘a (I)

▶ Curba parabolic˘a (beach line):

▶ Este o reuniune de arce de parabol˘a.
▶ Un punct de pe curba parabolic˘a este egal dep˘artat de situl care

determin˘a arcul de parabol˘a ¸si dreapta de baleiere. Presupunem c˘a
dreapta de baleiere d are ecuat¸ia y = 0, iar situl Pi , situat deasupra lui
d (adic˘a yi > 0) are coordonatele (xi , yi ). Locul geometric al punctelor
egal dep˘artate de d ¸si Pi are ecuat¸ia

y =

1
2yi

x 2 −

xi
yi

x +

x 2
i + y 2
i
2yi

.

▶ Punctele de racord ale arcelor de parabol˘a apart¸in muchiilor diagramei

Voronoi.

▶ Curba parabolic˘a este x-monoton˘a, adic˘a orice dreapt˘a vertical˘a o

intersecteaz˘a exact ˆıntr-un punct (la ce folose¸ste aceast˘a proprietate?).

Algoritmi avansat¸i - C11. Diagrame Voronoi

19 / 47

Un algoritm eficient

Despre curba parabolic˘a (II) - modificarea curbei parabolice
Site event / eveniment de tip locat¸ie. (a) La trecerea printr-un sit apare un
arc de parabol˘a (care “la ˆınceput” este degenerat) ¸si, reciproc, aparit¸ia unui nou
arc este posibil˘a doar la trecerea printr-un sit. (b) Cum stabilim algoritmic /
numeric ce arc de parabol˘a este “splitat”? - v. figura de mai jos. Pentru o pozit¸ie
fixat˘a a dreptei de baleiere pot fi determinate coordonatele proiect¸iilor punctelor
de racord dintre arcele de parabol˘a pe dreapta de baleiere ¸si, ˆın particular, poate fi
g˘asit arcul de parabol˘a situat deasupra unui eveniment. (c) La un moment fixat,
curba parabolic˘a are maxim (2n − 1) arce.

Algoritmi avansat¸i - C11. Diagrame Voronoi

20 / 47

Un algoritm eficient

Despre curba parabolic˘a (II) - modificarea curbei parabolice
Circle event / eveniment de tip cerc. (a) La ˆıntˆalnirea punctului inferior
al unui cerc care trece prin cel put¸in trei situri ¸si este tangent la dreapta de
baleiere dispare un arc de parabol˘a ¸si, reciproc, arcele de parabol˘a dispar
doar la acest tip de evenimente. ˆIn figur˘a este cercul dat de punctele
G , C , D. Arcul care dispare este cel corespunz˘ator punctului C . Un astfel de
eveniment este asociat unui vˆarf al diagramei Voronoi.

Algoritmi avansat¸i - C11. Diagrame Voronoi

21 / 47

Un algoritm eficient

Despre curba parabolic˘a (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (b) Un eveniment de tip cerc este
dat de trei arce de parabol˘a consecutive de pe curba parabolic˘a, deci trebuie
testate toate tripletele consecutive de arce, pe m˘asur˘a ce ele apar. ˆIn figur˘a,
evenimentele de tip cerc “active” sunt C(HIE ) ¸si C(BHI ).

Algoritmi avansat¸i - C11. Diagrame Voronoi

22 / 47

Un algoritm eficient

Despre curba parabolic˘a (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (c) Exist˘a triplete de arce
consecutive (muchii ale diagramei Voronoi) pentru care muchiile nu se
ˆıntˆalnesc. ˆIn figur˘a, de exemplu, aceast˘a afirmat¸ie se aplic˘a arcelor
determinate de punctele D, E ¸si H.

Algoritmi avansat¸i - C11. Diagrame Voronoi

23 / 47

Un algoritm eficient

Despre curba parabolic˘a (II) - modificarea curbei parabolice

Circle event / eveniment de tip cerc. (d) Unele evenimente de tip cerc
detectate nu au loc. ˆIn figur˘a, evenimentul de tip cerc corespunz˘ator C(ABC )
nu va avea loc. Arcul de parabol˘a corespunz˘ator va fi “splitat” la
evenimentul de tip locat¸ie D.

Algoritmi avansat¸i - C11. Diagrame Voronoi

24 / 47

▶ site event / eveniment de tip locat¸ie: ˆıntˆalnirea unui sit, adic˘a a unui

punct din mult¸imea P (apare un arc de parabol˘a)

▶ circle event / eveniment de tip cerc: ˆıntˆalnirea unui “punct inferior” al

unui cerc care trece prin cel put¸in trei situri, tangent la dreapta de

baleiere (dispare un arc de parabol˘a) - vˆarf al diagramei Voronoi

▶ Evenimente:

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - formalizare

▶ Statut: structura curbei parabolice (succesiunea de arce de parabol˘a
- se subˆınt¸elege c˘a este ret¸inut˘a ordinea arcelor); este modificat de
dou˘a tipuri de evenimente

Algoritmi avansat¸i - C11. Diagrame Voronoi

25 / 47

Un algoritm eficient

Adaptarea paradigmei dreptei de baleiere - formalizare

▶ Statut: structura curbei parabolice (succesiunea de arce de parabol˘a
- se subˆınt¸elege c˘a este ret¸inut˘a ordinea arcelor); este modificat de
dou˘a tipuri de evenimente

▶ Evenimente:

▶ site event / eveniment de tip locat¸ie: ˆıntˆalnirea unui sit, adic˘a a unui

punct din mult¸imea P (apare un arc de parabol˘a)

▶ circle event / eveniment de tip cerc: ˆıntˆalnirea unui “punct inferior” al
unui cerc care trece prin cel put¸in trei situri, tangent la dreapta de
baleiere (dispare un arc de parabol˘a) - vˆarf al diagramei Voronoi

Algoritmi avansat¸i - C11. Diagrame Voronoi

25 / 47

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se

insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;

▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a

(memorate simbolic) - corespund muchiilor diagramei Voronoi

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare

binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si

evenimentele de tip cerc - detectate pe parcursul algoritmului.

▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru

a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se

insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;

▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a

(memorate simbolic) - corespund muchiilor diagramei Voronoi

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru

a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).
▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare
binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si
evenimentele de tip cerc - detectate pe parcursul algoritmului.

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se

insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;

▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a

(memorate simbolic) - corespund muchiilor diagramei Voronoi

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru

a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).
▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare
binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si
evenimentele de tip cerc - detectate pe parcursul algoritmului.
▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a

(memorate simbolic) - corespund muchiilor diagramei Voronoi

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru

a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).
▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare
binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si
evenimentele de tip cerc - detectate pe parcursul algoritmului.
▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se
insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru

a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).
▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare
binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si
evenimentele de tip cerc - detectate pe parcursul algoritmului.
▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se
insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;
▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a
(memorate simbolic) - corespund muchiilor diagramei Voronoi

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la

un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru

a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).
▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare
binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si
evenimentele de tip cerc - detectate pe parcursul algoritmului.
▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se
insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;
▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a
(memorate simbolic) - corespund muchiilor diagramei Voronoi

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

Un algoritm eficient

Structuri de date utilizate

▶ Diagrama Voronoi: doubly connected edge list (DCEL) D (ulterior).
▶ Evenimente: coad˘a de priorit˘at¸i / evenimente Q ¸si arbore de c˘autare
binar echilibrat. Sunt ret¸inute evenimentele de tip sit, precum ¸si
evenimentele de tip cerc - detectate pe parcursul algoritmului.
▶ Statut: Structura curbei parabolice - arbore de c˘autare binar

echilibrat T .

▶ pe frunze: siturile care au arce active, la ajungerea ˆıntr-un sit se
insereaza un arc, iar la un eveniment de tip cerc se ¸sterge un arc;
▶ ˆın nodurile interne: punctele de racord ale arcelor de parabol˘a
(memorate simbolic) - corespund muchiilor diagramei Voronoi

▶ pointeri (eventual nuli) de la frunze c˘atre evenimentele de tip cerc; de

la nodurile interne c˘atre muchiile diagramei Voronoi

▶ Analiz˘a preliminar˘a a complexit˘at¸ii: (i) Cˆate evenimente sunt ˆın total?

(ii) Care este complexitatea-timp pentru a actualiza coada de evenimente la
un eveniment de tip cerc? (iii) Care este complexitatea-timp (total˘a) pentru
a actualiza coada de evenimente? (iv) ˆIntreb˘ari similare pentru statut.

Algoritmi avansat¸i - C11. Diagrame Voronoi

26 / 47

2. while Q ̸= ∅

3.

4.

5.

6.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev

else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.

Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın

interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea

corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

3.

4.

5.

6.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev

else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.

Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın

interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea

corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

4.

5.

6.

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev

else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.

Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın

interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea

corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

3.

do elimin˘a evenimentul cu cel mai mare y din Q

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

5.

6.

then ProcessEvSit(pi ), cu pi =ev

else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.

Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın

interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea

corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

3.

4.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

6.

else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.

Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın

interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea

corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

3.

4.

5.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.

Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın

interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea

corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

3.

4.

5.

6.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev
else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

3.

4.

5.

6.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev
else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.
Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın
interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea
corespunz˘atoare a lui D.

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

Un algoritm eficient

Algoritmul

Input. O mult¸ime de situri P = {p1, . . . , pn} de situri ˆın plan.
Output. Diagrama Voronoi Vor(P) ˆın interiorul unui bounding box, descris˘a printr-o
list˘a dublu ˆınl˘ant¸uit˘a D.

1.

Init¸ializ˘ari: coada de evenimente Q ← P (preprocesare: ordonare dup˘a y ), statut
(arbore balansat) T ← ∅; list˘a dublu ˆınl˘ant¸uit˘a D ← ∅.

2. while Q ̸= ∅

3.

4.

5.

6.

do elimin˘a evenimentul cu cel mai mare y din Q

if evenimentul ev este un eveniment de tip sit

then ProcessEvSit(pi ), cu pi =ev
else ProcessEvCerc(γ), cu γ = arc(ev) ∈ T

7. Nodurile interne ˆınc˘a prezente ˆın T corespund semidreptelor diagramei Voronoi.
Consider˘a un bounding box care cont¸ine toate vˆarfurile diagramei Voronoi ˆın
interiorul s˘au ¸si leag˘a semidreptele de acest bounding box, prin actualizarea
corespunz˘atoare a lui D.

8. Traverseaz˘a muchiile pentru a ad˘auga celulele diagramei ¸si pointeri corespunz˘atori.

Algoritmi avansat¸i - C11. Diagrame Voronoi

27 / 47

2. Caut˘a ˆın T arcul α situat deasupra lui pi . Dac˘a frunza reprezentˆand α are un

pointer c˘atre un eveniment de tip cerc ev din Q, atunci ev este o alarm˘a fals˘a ¸si

trebuie ¸sters.

3. ˆInlocuie¸ste frunza lui T care reprezint˘a α cu un subarbore cu trei frunze: cea din

mijloc ret¸ine situl pi ¸si celelalte dou˘a situl pj asociat lui α. Memoreaz˘a perechile

reprezentˆand punctele de racord ˆın dou˘a noduri interne. Efectueaz˘a rebalans˘ari ˆın

T , dac˘a este necesar.

puncte de racord.

4. Genereaz˘a noi ˆınregistr˘ari de tip semi-muchie ˆın structura diagramei Voronoi (D),

pentru muchiile care separ˘a celulele V (pi ) ¸si V (pj ), corespunzˆand celor dou˘a noi

5. Verific˘a tripletele de arce consecutive nou create, pentru a verifica dac˘a muchiile

corespunz˘atoare punctelor de racord se ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente

de tip cerc ˆın Q ¸si adaug˘a pointeri de la nodurile lui T la evenimentele

corespunz˘atoare din Q.

Un algoritm eficient

Procedura ProcessEvSit (pi )

1. Dac˘a T este vid˘a, insereaz˘a pi ¸si revine, dac˘a nu continu˘a cu 2.−5.

Algoritmi avansat¸i - C11. Diagrame Voronoi

28 / 47

3. ˆInlocuie¸ste frunza lui T care reprezint˘a α cu un subarbore cu trei frunze: cea din

mijloc ret¸ine situl pi ¸si celelalte dou˘a situl pj asociat lui α. Memoreaz˘a perechile

reprezentˆand punctele de racord ˆın dou˘a noduri interne. Efectueaz˘a rebalans˘ari ˆın

T , dac˘a este necesar.

puncte de racord.

4. Genereaz˘a noi ˆınregistr˘ari de tip semi-muchie ˆın structura diagramei Voronoi (D),

pentru muchiile care separ˘a celulele V (pi ) ¸si V (pj ), corespunzˆand celor dou˘a noi

5. Verific˘a tripletele de arce consecutive nou create, pentru a verifica dac˘a muchiile

corespunz˘atoare punctelor de racord se ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente

de tip cerc ˆın Q ¸si adaug˘a pointeri de la nodurile lui T la evenimentele

corespunz˘atoare din Q.

Un algoritm eficient

Procedura ProcessEvSit (pi )

1. Dac˘a T este vid˘a, insereaz˘a pi ¸si revine, dac˘a nu continu˘a cu 2.−5.

2. Caut˘a ˆın T arcul α situat deasupra lui pi . Dac˘a frunza reprezentˆand α are un

pointer c˘atre un eveniment de tip cerc ev din Q, atunci ev este o alarm˘a fals˘a ¸si
trebuie ¸sters.

Algoritmi avansat¸i - C11. Diagrame Voronoi

28 / 47

4. Genereaz˘a noi ˆınregistr˘ari de tip semi-muchie ˆın structura diagramei Voronoi (D),

pentru muchiile care separ˘a celulele V (pi ) ¸si V (pj ), corespunzˆand celor dou˘a noi

puncte de racord.

5. Verific˘a tripletele de arce consecutive nou create, pentru a verifica dac˘a muchiile

corespunz˘atoare punctelor de racord se ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente

de tip cerc ˆın Q ¸si adaug˘a pointeri de la nodurile lui T la evenimentele

corespunz˘atoare din Q.

Un algoritm eficient

Procedura ProcessEvSit (pi )

1. Dac˘a T este vid˘a, insereaz˘a pi ¸si revine, dac˘a nu continu˘a cu 2.−5.

2. Caut˘a ˆın T arcul α situat deasupra lui pi . Dac˘a frunza reprezentˆand α are un

pointer c˘atre un eveniment de tip cerc ev din Q, atunci ev este o alarm˘a fals˘a ¸si
trebuie ¸sters.

3. ˆInlocuie¸ste frunza lui T care reprezint˘a α cu un subarbore cu trei frunze: cea din
mijloc ret¸ine situl pi ¸si celelalte dou˘a situl pj asociat lui α. Memoreaz˘a perechile
reprezentˆand punctele de racord ˆın dou˘a noduri interne. Efectueaz˘a rebalans˘ari ˆın
T , dac˘a este necesar.

Algoritmi avansat¸i - C11. Diagrame Voronoi

28 / 47

5. Verific˘a tripletele de arce consecutive nou create, pentru a verifica dac˘a muchiile

corespunz˘atoare punctelor de racord se ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente

de tip cerc ˆın Q ¸si adaug˘a pointeri de la nodurile lui T la evenimentele

corespunz˘atoare din Q.

Un algoritm eficient

Procedura ProcessEvSit (pi )

1. Dac˘a T este vid˘a, insereaz˘a pi ¸si revine, dac˘a nu continu˘a cu 2.−5.

2. Caut˘a ˆın T arcul α situat deasupra lui pi . Dac˘a frunza reprezentˆand α are un

pointer c˘atre un eveniment de tip cerc ev din Q, atunci ev este o alarm˘a fals˘a ¸si
trebuie ¸sters.

3. ˆInlocuie¸ste frunza lui T care reprezint˘a α cu un subarbore cu trei frunze: cea din
mijloc ret¸ine situl pi ¸si celelalte dou˘a situl pj asociat lui α. Memoreaz˘a perechile
reprezentˆand punctele de racord ˆın dou˘a noduri interne. Efectueaz˘a rebalans˘ari ˆın
T , dac˘a este necesar.

4. Genereaz˘a noi ˆınregistr˘ari de tip semi-muchie ˆın structura diagramei Voronoi (D),
pentru muchiile care separ˘a celulele V (pi ) ¸si V (pj ), corespunzˆand celor dou˘a noi
puncte de racord.

Algoritmi avansat¸i - C11. Diagrame Voronoi

28 / 47

Un algoritm eficient

Procedura ProcessEvSit (pi )

1. Dac˘a T este vid˘a, insereaz˘a pi ¸si revine, dac˘a nu continu˘a cu 2.−5.

2. Caut˘a ˆın T arcul α situat deasupra lui pi . Dac˘a frunza reprezentˆand α are un

pointer c˘atre un eveniment de tip cerc ev din Q, atunci ev este o alarm˘a fals˘a ¸si
trebuie ¸sters.

3. ˆInlocuie¸ste frunza lui T care reprezint˘a α cu un subarbore cu trei frunze: cea din
mijloc ret¸ine situl pi ¸si celelalte dou˘a situl pj asociat lui α. Memoreaz˘a perechile
reprezentˆand punctele de racord ˆın dou˘a noduri interne. Efectueaz˘a rebalans˘ari ˆın
T , dac˘a este necesar.

4. Genereaz˘a noi ˆınregistr˘ari de tip semi-muchie ˆın structura diagramei Voronoi (D),
pentru muchiile care separ˘a celulele V (pi ) ¸si V (pj ), corespunzˆand celor dou˘a noi
puncte de racord.

5. Verific˘a tripletele de arce consecutive nou create, pentru a verifica dac˘a muchiile
corespunz˘atoare punctelor de racord se ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente
de tip cerc ˆın Q ¸si adaug˘a pointeri de la nodurile lui T la evenimentele
corespunz˘atoare din Q.

Algoritmi avansat¸i - C11. Diagrame Voronoi

28 / 47

2. Adaug˘a centrul cercului care determin˘a evenimentul ca ˆınregistrare de tip vˆarf ˆın

D. Creeaz˘a ˆınregistr˘ari de tip semi-muchie corespunzˆand noului punct de racord de

pe linia parabolic˘a ¸si asigneaz˘a pointeri corespunz˘atori.

3. Verific˘a tripletele de arce consecutive nou create (care au fo¸stii vecini ai lui α ˆın

centru), pentru a verifica dac˘a muchiile corespunz˘atoare punctelor de racord se

ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente de tip cerc ˆın Q ¸si adaug˘a pointeri de la

nodurile lui T la evenimentele corespunz˘atoare din Q.

Un algoritm eficient

Procedura ProcessEvCerc (γ)

1. S¸terge frunza γ ∈ T care corespunde arcului de cerc α care dispare. Actualizeaz˘a

ˆın nodurile interne perechile care corespund punctelor de racord. Efectueaz˘a
rebalans˘ari ˆın T , dac˘a este necesar. S¸terge toate evenimentele de tip cerc care ˆıi
corespund lui α (cu ajutorul pointerilor de la predecesorul ¸si succesorul lui γ ˆın T ).

Algoritmi avansat¸i - C11. Diagrame Voronoi

29 / 47

3. Verific˘a tripletele de arce consecutive nou create (care au fo¸stii vecini ai lui α ˆın

centru), pentru a verifica dac˘a muchiile corespunz˘atoare punctelor de racord se

ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente de tip cerc ˆın Q ¸si adaug˘a pointeri de la

nodurile lui T la evenimentele corespunz˘atoare din Q.

Un algoritm eficient

Procedura ProcessEvCerc (γ)

1. S¸terge frunza γ ∈ T care corespunde arcului de cerc α care dispare. Actualizeaz˘a

ˆın nodurile interne perechile care corespund punctelor de racord. Efectueaz˘a
rebalans˘ari ˆın T , dac˘a este necesar. S¸terge toate evenimentele de tip cerc care ˆıi
corespund lui α (cu ajutorul pointerilor de la predecesorul ¸si succesorul lui γ ˆın T ).

2. Adaug˘a centrul cercului care determin˘a evenimentul ca ˆınregistrare de tip vˆarf ˆın

D. Creeaz˘a ˆınregistr˘ari de tip semi-muchie corespunzˆand noului punct de racord de
pe linia parabolic˘a ¸si asigneaz˘a pointeri corespunz˘atori.

Algoritmi avansat¸i - C11. Diagrame Voronoi

29 / 47

Un algoritm eficient

Procedura ProcessEvCerc (γ)

1. S¸terge frunza γ ∈ T care corespunde arcului de cerc α care dispare. Actualizeaz˘a

ˆın nodurile interne perechile care corespund punctelor de racord. Efectueaz˘a
rebalans˘ari ˆın T , dac˘a este necesar. S¸terge toate evenimentele de tip cerc care ˆıi
corespund lui α (cu ajutorul pointerilor de la predecesorul ¸si succesorul lui γ ˆın T ).

2. Adaug˘a centrul cercului care determin˘a evenimentul ca ˆınregistrare de tip vˆarf ˆın

D. Creeaz˘a ˆınregistr˘ari de tip semi-muchie corespunzˆand noului punct de racord de
pe linia parabolic˘a ¸si asigneaz˘a pointeri corespunz˘atori.

3. Verific˘a tripletele de arce consecutive nou create (care au fo¸stii vecini ai lui α ˆın
centru), pentru a verifica dac˘a muchiile corespunz˘atoare punctelor de racord se
ˆıntˆalnesc. Dac˘a da, insereaz˘a evenimente de tip cerc ˆın Q ¸si adaug˘a pointeri de la
nodurile lui T la evenimentele corespunz˘atoare din Q.

Algoritmi avansat¸i - C11. Diagrame Voronoi

29 / 47

▶ Teorem˘a. Triangularea Delaunay a unei mult¸imi de n situri poate fi

determinat˘a cu un algoritm bazat pe paradigma dreptei de baleiere

avˆand complexitate-timp O(n log n) ¸si complexitate-spat¸iu O(n).

Un algoritm eficient

Rezultate principale

▶ Teorem˘a. Diagrama Voronoi a unei mult¸imi de n situri poate fi

determinat˘a cu un algoritm bazat pe paradigma dreptei de baleiere
avˆand complexitate-timp O(n log n) ¸si complexitate-spat¸iu O(n).

Algoritmi avansat¸i - C11. Diagrame Voronoi

30 / 47

Un algoritm eficient

Rezultate principale

▶ Teorem˘a. Diagrama Voronoi a unei mult¸imi de n situri poate fi

determinat˘a cu un algoritm bazat pe paradigma dreptei de baleiere
avˆand complexitate-timp O(n log n) ¸si complexitate-spat¸iu O(n).
▶ Teorem˘a. Triangularea Delaunay a unei mult¸imi de n situri poate fi
determinat˘a cu un algoritm bazat pe paradigma dreptei de baleiere
avˆand complexitate-timp O(n log n) ¸si complexitate-spat¸iu O(n).

Algoritmi avansat¸i - C11. Diagrame Voronoi

30 / 47

Subdiviziuni planare. DCEL

Motivat¸ie - reprezentarea diagramelor Voronoi

Algoritmi avansat¸i - C11. Diagrame Voronoi

31 / 47

Subdiviziuni planare. DCEL

Motivat¸ie - reprezentarea datelor geo-spat¸iale

Sursa: https://s-media-cache-ak0.pinimg.com/originals/37/90/86/37908600ab7db99c424c3bc6e1ddb740.jpg
Ce structur˘a de date este adecvat˘a pentru a memora astfel de informat¸ii?

Algoritmi avansat¸i - C11. Diagrame Voronoi

32 / 47

Subdiviziuni planare. DCEL

Problematizare

Algoritmi avansat¸i - C11. Diagrame Voronoi

33 / 47

Subdiviziuni planare. DCEL

Problematizare

Algoritmi avansat¸i - C11. Diagrame Voronoi

34 / 47

Subdiviziuni planare. DCEL

Problematizare

Algoritmi avansat¸i - C11. Diagrame Voronoi

35 / 47

Subdiviziuni planare. DCEL

Problematizare

Algoritmi avansat¸i - C11. Diagrame Voronoi

36 / 47

▶ Ideea fundamental˘a este de a introduce conceptul de semi-muchie

(muchie orientat˘a), cf. “half-edge”.

Subdiviziuni planare. DCEL

Ideea cheie

Algoritmi avansat¸i - C11. Diagrame Voronoi

37 / 47

Subdiviziuni planare. DCEL

Ideea cheie

▶ Ideea fundamental˘a este de a introduce conceptul de semi-muchie

(muchie orientat˘a), cf. “half-edge”.

Algoritmi avansat¸i - C11. Diagrame Voronoi

37 / 47

Subdiviziuni planare. DCEL

Exemplu

Algoritmi avansat¸i - C11. Diagrame Voronoi

38 / 47

Subdiviziuni planare. DCEL

Exemplu

Algoritmi avansat¸i - C11. Diagrame Voronoi

39 / 47

▶ frontier˘a exterioar˘a, care poate fi parcurs˘a cu ajutorul semi-muchiilor

astfel ˆıncˆat poligonul s˘a fie la stˆanga frontierei, iar virajele convexe s˘a

fie la stˆanga,

▶ frontier˘a interioar˘a (dac˘a exist˘a goluri), caz ˆın care poligonul este tot

la stˆanga, dar virajele ˆın vˆarfurile convexe sunt la dreapta.

Subdiviziunea din figur˘a are 6 vˆarfuri, 12 semi-muchii, 3 fet¸e.

Semi-muchiile delimiteaz˘a frontiere ale fet¸elor, fat¸a delimitat˘a fiind la

stˆanga.

Dat un poligon (eventual cu goluri):

Subdiviziuni planare. DCEL

Exemplu

Algoritmi avansat¸i - C11. Diagrame Voronoi

40 / 47

▶ frontier˘a exterioar˘a, care poate fi parcurs˘a cu ajutorul semi-muchiilor

astfel ˆıncˆat poligonul s˘a fie la stˆanga frontierei, iar virajele convexe s˘a

fie la stˆanga,

▶ frontier˘a interioar˘a (dac˘a exist˘a goluri), caz ˆın care poligonul este tot

la stˆanga, dar virajele ˆın vˆarfurile convexe sunt la dreapta.

Semi-muchiile delimiteaz˘a frontiere ale fet¸elor, fat¸a delimitat˘a fiind la

stˆanga.

Dat un poligon (eventual cu goluri):

Subdiviziuni planare. DCEL

Exemplu

Subdiviziunea din figur˘a are 6 vˆarfuri, 12 semi-muchii, 3 fet¸e.

Algoritmi avansat¸i - C11. Diagrame Voronoi

40 / 47

▶ frontier˘a exterioar˘a, care poate fi parcurs˘a cu ajutorul semi-muchiilor

astfel ˆıncˆat poligonul s˘a fie la stˆanga frontierei, iar virajele convexe s˘a

fie la stˆanga,

▶ frontier˘a interioar˘a (dac˘a exist˘a goluri), caz ˆın care poligonul este tot

la stˆanga, dar virajele ˆın vˆarfurile convexe sunt la dreapta.

Dat un poligon (eventual cu goluri):

Subdiviziuni planare. DCEL

Exemplu

Subdiviziunea din figur˘a are 6 vˆarfuri, 12 semi-muchii, 3 fet¸e.
Semi-muchiile delimiteaz˘a frontiere ale fet¸elor, fat¸a delimitat˘a fiind la
stˆanga.

Algoritmi avansat¸i - C11. Diagrame Voronoi

40 / 47

▶ frontier˘a exterioar˘a, care poate fi parcurs˘a cu ajutorul semi-muchiilor

astfel ˆıncˆat poligonul s˘a fie la stˆanga frontierei, iar virajele convexe s˘a

fie la stˆanga,

▶ frontier˘a interioar˘a (dac˘a exist˘a goluri), caz ˆın care poligonul este tot

la stˆanga, dar virajele ˆın vˆarfurile convexe sunt la dreapta.

Subdiviziuni planare. DCEL

Exemplu

Subdiviziunea din figur˘a are 6 vˆarfuri, 12 semi-muchii, 3 fet¸e.
Semi-muchiile delimiteaz˘a frontiere ale fet¸elor, fat¸a delimitat˘a fiind la
stˆanga.
Dat un poligon (eventual cu goluri):

Algoritmi avansat¸i - C11. Diagrame Voronoi

40 / 47

Subdiviziuni planare. DCEL

Exemplu

Subdiviziunea din figur˘a are 6 vˆarfuri, 12 semi-muchii, 3 fet¸e.
Semi-muchiile delimiteaz˘a frontiere ale fet¸elor, fat¸a delimitat˘a fiind la
stˆanga.
Dat un poligon (eventual cu goluri):

▶ frontier˘a exterioar˘a, care poate fi parcurs˘a cu ajutorul semi-muchiilor
astfel ˆıncˆat poligonul s˘a fie la stˆanga frontierei, iar virajele convexe s˘a
fie la stˆanga,

▶ frontier˘a interioar˘a (dac˘a exist˘a goluri), caz ˆın care poligonul este tot

la stˆanga, dar virajele ˆın vˆarfurile convexe sunt la dreapta.

Algoritmi avansat¸i - C11. Diagrame Voronoi

40 / 47

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);

list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer

c˘atre una dintre muchiile orientate de pe frontier˘a

▶ Muchie orientat˘a

→

→

→

→

e : pointer Origin(

e ), pointer Twin(

e ) pointer

IncidentFace(

e ), pointer Next (

e ), pointer Prev(

→

→

e ).

▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected

Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,

muchii orientate (semi-muchii)).

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);

(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);

list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer

c˘atre una dintre muchiile orientate de pe frontier˘a

▶ Muchie orientat˘a

→

→

→

→

e : pointer Origin(

e ), pointer Twin(

e ) pointer

IncidentFace(

e ), pointer Next (

e ), pointer Prev(

→

→

e ).

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);

(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.
▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected
Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,
muchii orientate (semi-muchii)).

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);

list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer

c˘atre una dintre muchiile orientate de pe frontier˘a

▶ Muchie orientat˘a

→

→

→

→

e : pointer Origin(

e ), pointer Twin(

e ) pointer

IncidentFace(

e ), pointer Next (

e ), pointer Prev(

→

→

e ).

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);

(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.
▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected
Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,
muchii orientate (semi-muchii)).

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

▶ Muchie orientat˘a

→

→

→

→

e : pointer Origin(

e ), pointer Twin(

e ) pointer

IncidentFace(

e ), pointer Next (

e ), pointer Prev(

→

→

e ).

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);

(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.
▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected
Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,
muchii orientate (semi-muchii)).

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);
list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer
c˘atre una dintre muchiile orientate de pe frontier˘a

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);

(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.
▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected
Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,
muchii orientate (semi-muchii)).

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);
list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer
c˘atre una dintre muchiile orientate de pe frontier˘a

▶ Muchie orientat˘a
→
e ), pointer Next (
IncidentFace(

→
e : pointer Origin(

→
e ), pointer Twin(
→
e ).

→
e ), pointer Prev(

→
e ) pointer

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);

(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.
▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected
Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,
muchii orientate (semi-muchii)).

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);
list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer
c˘atre una dintre muchiile orientate de pe frontier˘a

▶ Muchie orientat˘a
→
e ), pointer Next (
IncidentFace(

→
e : pointer Origin(

→
e ), pointer Twin(
→
e ).

→
e ), pointer Prev(

→
e ) pointer

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

Subdiviziuni planare. DCEL

Subdiviziuni planare

▶ Conceptul de subdiviziune planar˘a: vˆarfuri, muchii, fet¸e.
▶ List˘a de muchii dublu ˆınl˘ant¸uite / DCEL - Doubly Connected
Edge List [M¨uller ¸si Preparata, 1978] (trei ˆınregistr˘ari: vˆarfuri, fet¸e,
muchii orientate (semi-muchii)).

▶ Vˆarf v : coordonatele lui v ˆın Coordinates(v ), pointer

IncidentEdge(v ) spre o muchie orientat˘a care are v ca origine

▶ Fat¸˘a f : pointer OuterComponent(f ) spre o muchie orientat˘a

corespunz˘atoare frontierei externe (pentru fat¸a nem˘arginit˘a este NULL);
list˘a InnerComponents(f ), care cont¸ine, pentru fiecare gol, un pointer
c˘atre una dintre muchiile orientate de pe frontier˘a

▶ Muchie orientat˘a
→
e ), pointer Next (
IncidentFace(

→
e : pointer Origin(

→
e ), pointer Twin(
→
e ).

→
e ), pointer Prev(

→
e ) pointer

▶ Oric˘arei subdiviziuni planare S i se asociaz˘a o list˘a de muchii dublu

ˆınl˘ant¸uite DS .

▶ Obs. Explicat¸i cum, folosind pointerii de mai sus: (i) poate fi

parcurs˘a frontiera exterioar˘a / interioar˘a a unei fet¸e (a unui poligon);
(ii) pot fi g˘asite toate semi-muchiile incidente cu un vˆarf.

Algoritmi avansat¸i - C11. Diagrame Voronoi

41 / 47

Subdiviziuni planare. DCEL

Exemplu

Vˆarf
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

Fat¸˘a
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).
e12
NULL

Semimuchie
e12
e23
e34
. . .

Origin
v1
v2
v3

Twin
e21
e32
e43

Inc.

Face

f1
f1
f1

Next
e23
e34
e43

Prev
e31
e12
e23

Algoritmi avansat¸i - C11. Diagrame Voronoi

42 / 47

Subdiviziuni planare. DCEL

Exemplu

Vˆarf
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

Fat¸˘a
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).
e12
NULL

Semimuchie
e12
e23
e34
. . .

Origin
v1
v2
v3

Twin
e21
e32
e43

Inc.

Face

f1
f1
f1

Next
e23
e34
e43

Prev
e31
e12
e23

Algoritmi avansat¸i - C11. Diagrame Voronoi

43 / 47

Subdiviziuni planare. DCEL

Exemplu

Vˆarf
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

Fat¸˘a
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).
e12
NULL

Semimuchie
e12
e23
e34
. . .

Origin
v1
v2
v3

Twin
e21
e32
e43

Inc.

Face

f1
f1
f1

Next
e23
e34
e43

Prev
e31
e12
e23

Algoritmi avansat¸i - C11. Diagrame Voronoi

44 / 47

Subdiviziuni planare. DCEL

Exemplu

Vˆarf
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

Fat¸˘a
(ext.) f1
(∆) f2

Outer Comp.
NULL
e21

Inner Comp(s).
e12
NULL

Semimuchie
e12
e23
e34
. . .

Origin
v1
v2
v3

Twin
e21
e32
e43

Inc.

Face

f1
f1
f1

Next
e23
e34
e43

Prev
e31
e12
e23

Algoritmi avansat¸i - C11. Diagrame Voronoi

45 / 47

▶ Leg˘atura cu triangul˘arile unghiular optime.

▶ Algoritmul lui Fortune.

▶ Conceptele de subdiviziune planar˘a ¸si de Doubly Connected Edge List.

Subdiviziuni planare. DCEL

Scurt rezumat

▶ Conceptul de diagram˘a Voronoi. Aspecte cantitative legate de

num˘arul de vˆarfuri/muchii/muchii de tip semidreapt˘a (¸si la seminar).

Algoritmi avansat¸i - C11. Diagrame Voronoi

46 / 47

▶ Algoritmul lui Fortune.

▶ Conceptele de subdiviziune planar˘a ¸si de Doubly Connected Edge List.

Subdiviziuni planare. DCEL

Scurt rezumat

▶ Conceptul de diagram˘a Voronoi. Aspecte cantitative legate de

num˘arul de vˆarfuri/muchii/muchii de tip semidreapt˘a (¸si la seminar).

▶ Leg˘atura cu triangul˘arile unghiular optime.

Algoritmi avansat¸i - C11. Diagrame Voronoi

46 / 47

▶ Conceptele de subdiviziune planar˘a ¸si de Doubly Connected Edge List.

Subdiviziuni planare. DCEL

Scurt rezumat

▶ Conceptul de diagram˘a Voronoi. Aspecte cantitative legate de

num˘arul de vˆarfuri/muchii/muchii de tip semidreapt˘a (¸si la seminar).

▶ Leg˘atura cu triangul˘arile unghiular optime.
▶ Algoritmul lui Fortune.

Algoritmi avansat¸i - C11. Diagrame Voronoi

46 / 47

Subdiviziuni planare. DCEL

Scurt rezumat

▶ Conceptul de diagram˘a Voronoi. Aspecte cantitative legate de

num˘arul de vˆarfuri/muchii/muchii de tip semidreapt˘a (¸si la seminar).

▶ Leg˘atura cu triangul˘arile unghiular optime.
▶ Algoritmul lui Fortune.
▶ Conceptele de subdiviziune planar˘a ¸si de Doubly Connected Edge List.

Algoritmi avansat¸i - C11. Diagrame Voronoi

46 / 47

Subdiviziuni planare. DCEL

Alte referint¸e

Algorithms for Competitive Programming: Diagrame Voronoi ¸si triangul˘ari
Delaunay

B. Kornberger, GeomSoftware

CGAL: Triangul˘ari Delaunay ¸si diagrame Voronoi (detalii, implementare)

ICPC World Finals 2018, Problem G Panda Preserve: (i) enunt¸, (ii)
indicat¸ii solut¸ie

Algoritmi avansat¸i - C11. Diagrame Voronoi

47 / 47


