# Algoritmi avansați - materiale agregate

_Generat automat la 2026-06-11 22:30 din prezentările `.pptx` și seminariile `.pdf`._

## Cuprins

### Cursuri

- [Curs 1](#curs-1)
- [Curs 2](#curs-2)
- [Curs 3](#curs-3)
- [Curs 4](#curs-4)
- [Curs 5](#curs-5)
- [Curs 6](#curs-6)
- [Curs 7](#curs-7)

### Seminarii

- [Seminar 1](#seminar-1)
- [Seminar 2](#seminar-2)
- [Seminar 3](#seminar-3)

# Cursuri

## Curs 1

**Sursa:** `Algoritmi Avansați 2026 c-1.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-1
- Lect. Dr. Ștefan Popescu
- Email:
- ștefan
- .popescu@fmi.unibuc.ro
- Teams link
- 2026
- https://tinyurl.com/AlgAva2026

### Slide 2: Index

- Desfășurare examen & predare
- Ce este un algoritm
- Complexitatea timp a unui algoritm
- P, NP, NPC
- Ce este o problema de optim?
- Idei alternative de rezolvare (prelude)

### Slide 3: Desfășurare examen & predare

- Curs Modular; (2 parts)
- Evaluare pe parcurs 50% + examen final 50%
- Limbaj de programare: La alegere Python sau C++
- [7 saptamani] va fi o continuare a cursului de AF & PA
- Prezența nu este obligatorie dar probabil este necesara
- Promovarea unui mediu interactiv
- Feedback-ul este mereu de apreciat

### Slide 4: Evaluare

- Evaluare pe parcurs:
- Prima parte
- Tema seminar - Algoritmi Aproximativi (deadline seminar 3*) 30p
- Tema lab - algoritmi genetici (deadline lab 3*) 30p
- A doua parte
- Teme lab- 3 * 10 p (lab 5,6,7)
- Oficiu 10p
- Evaluare Examen: Prima parte 30p, Partea a 2a 60p, Oficiu 10p
- Nota
- finală
- : (Evaluare pe
- parcurs
- + Examen)/2
- Criteriu de promovabilitate: Nota
- Finală
- ≥ 5.0
- *ne rezervam dreptul de a amana deadline-ul

### Slide 5: Prima parte a cursului

- (algoritmi aproximativi,
- probabilistici
- , genetici. etc)
- A doua
- parte a cursului
- (algoritmi geometrici)

### Slide 6: Ce este un algoritm?

- informal: o succesiuni de pasi elementari/simpli dupa a căror execuție pe un input dat, obținem un output care este soluție pentru problema noastră
- Formal: Echivalent cu
- Mașina Turing
- (
- to be continued
- )

### Slide 7: Complexitatea timp

- Informal spus, complexitatea timp a unui algoritm este dat de
- numărul de operații
- efectuate până ce se ajunge la rezultat. Evident numărul de operații va depinde și de input, mai exact
- lungimea inputului.
- Fie un algoritm care pentru o intrare (de lungime)
- n
- efectuează
- f(n)
- operații.
- Definim clasele de complexitate
- O,
- Ω, Θ
- după cum urmează

### Slide 8: Clasa O (Big Oh)

- Descrie o limită superioară pentru numărul de operații efectuate de algoritm pentru orice intrare
- de la o lungime n0 încolo.
- Spunem ca un algoritm rulează în timp O(g(n)) dacă există o funcție g și o valoare n0, astfel încât să
- avem relația: C x g(n)≥f(n)≥0 | ∀n>n0 (unde C este o constantă pozitivă).
- f este asimptotic mărginită superior de către g (multiplicată cu un factor constant C)
- Observăm, spre exemplu, că O(n) este inclusă în O(n2)

### Slide 9: Clasa

- O
- (Big Oh)

### Slide 10: Clasa O (Big Oh)

- Definiția riguroasă este ”un pic mai complicată”:
- Fie un algoritm Alg și o funcție f:N→N, astfel încât Alg se termină exact în f(n) pași pentru o intrare de
- lungime ”n”. Spunem că Alg rulează în O(g(n)) dacă avem relația:
- Această definiție ne arată ca în clasa de complexitate O, factorul dominant este cel care ne dă
- complexitatea. Ex: O(n2+2n)≡O(n2)

### Slide 11: Clasa Ω (Big Omega)

- Descrie o limită inferioară pentru numărul de operații efectuate de algoritm pentru orice intrare
- de la o lungime n0 încolo.
- Spunem ca un algoritm rulează în timp Ω(g(n)) dacă există o funcție g și o valoare n0, astfel încât să
- avem relația: f(n)≥C x g(n)≥0 | ∀n>n0 (unde C este o constantă pozitivă).
- f este asimptotic mărginită inferior de către g (multiplicată cu un factor constant C)
- Observăm, spre exemplu, că Ω(n2) este inclusă în Ω(n)

### Slide 12: Clasa Ω (Big Omega)

_Nu s-a putut extrage text util din acest slide._

### Slide 13: Clasa Ω (Big Omega)

- Definiția
- riguroasă
- :
- Fie un algoritm Alg și o funcție f:N→N, astfel încât Alg se termină exact în f(n) pași pentru o intrare de lungime ”n”. Spunem că Alg rulează în Ω(g(n)) dacă avem relația:

### Slide 14: Clasa Θ (Big Theta)

- O combinație între cele două clase anterioare. Presupune o mărginire atât superioară cât și
- inferioară.
- Spunem ca un algoritm rulează în timp Θ(g(n)) dacă există o funcție g și o valoare n0, astfel încât să
- avem relația: C1 x g(n)≥ f(n)≥C2 x g(n)≥0 | ∀n>n0 (unde C1 și C2 sunt două constante pozitive).
- f este asimptotic mărginită inferior de către g (multiplicată cu un factor constant C2) respectiv
- superior tot de g (multiplicată cu un factor constant C1)
- Nu mai este valabilă observația că Θ(n) ar fi inclusă în Θ(n2)
- Nu toți algoritmii au o complexitate Theta

### Slide 15: Clasa Θ (Big Theta)

_Nu s-a putut extrage text util din acest slide._

### Slide 16: Clasa Θ (Big Theta)

- Cum ar arăta definiția folosind limite?

### Slide 17: Clasa Θ (Big Theta)

- Fie un algoritm Alg și o funcție f:N→N, astfel încât Alg se termină exact în f(n) pași pentru o intrare de lungime ”n”. Spunem că Alg rulează în Θ(g(n)) dacă avem relația:
- Source

### Slide 18: Discuții libere

- Cel mai adesea folosim clasa O.
- Evident ne interesează numitele ”tight bounds”.
- Ce se întâmplă când pe o intrare de aceeași lungime ai număr de pași semnificativ diferiți?
- Complexitate ”
- worst case
- ” vs complexitate medie
- Care este complexitatea următorilor algoritmi?
- Căutare binară; Bubble sort; quicksort, merge-sort;
- Paradoxul în care Big-O nu redă realitatea...

### Slide 19: înseamnă

- Ce
- înseamnă
- ”algoritm eficient”?

### Slide 20: Timp polinomial:

- Determinism vs nedeterminism

### Slide 21: Scurtă prezentare: ”Turing Machine”

- O maș ină Turing M=(Q, 𝚪, b, 𝚺, ρ , q0, F) unde:
- Q - mulțimea stărilor
- 𝚪 - alfabetul de lucru al maș inii
- b ∊ 𝚪 - un simbol special, numit ”blank”
- 𝚺⊂𝚪\{b} - alfabetul de intrare (alfabetul pt input)
- q0, F - starea inițială, respectiv mulțimea stărilor finale
- ρ - funcț ia de tranziț ie:
- cazul determinist: ρ : 𝚪xQ 🠒𝚪xQx{left, right}
- cazul nedeterminist: ρ : 𝚪xQ 🠒2𝚪xQx{left, right}

### Slide 22: Clasele de Complexitate P și NP

- Formal spus, în clasa problemelor din P sunt acele probleme care pot fi rezolvate în timp polinomial, O(nc),
- de către un sistem determinist. (P=polynomial)
- Iar cele din clasa NP sunt problemele care pot rezolvate tot în timp polinomial (!) dar de că tre o mașina
- Turing nedeterminista. (NP=nondeterministic Polynomial)
- Evident ca P⊂NP.
- Se presupune ca Pș ăNP, ăi
- totu
- înc ț nu exist ie
- o a acestui
- demonstrațrezultat.

### Slide 23: Clasele de Complexitate P și NP

- Mai ușor de înțeles:
- P - clasa de probleme pentru care le putem afla soluția în timp polinomial
- NP - clasa de probleme pentru care
- putem verifica
- în timp polinomial dacă un rezultat este soluție corectă pentru problema noastră.

### Slide 24: Clasele de Complexitate P, NP, NP-C

- Source for further reading

### Slide 25: Ce ne facem cu problemele din NP

- Avem la dispoziție mașini (calculatoare)
- nedeterministe?
- În cazul problemelor de optim exist ă dou ă
- soluții: Plătim costul în timp (de multe ori nu se
- poate) sau ne mulțumim cu o soluție apropiat ă
- de optim, dacă nu optimă, dar ce se poate ob ține
- în timp fezabil.

### Slide 26: Probleme de optim

- O problemă de optim este de forma urm ătoare:
- Fie o mulțime de restricții. Să se construiasc ă o
- soluție care nu doar îndeplinește toate restric țiile, ci
- minimizează/maximizeze o funcție de cost/profit.
- Ex: Problema rucsacului (varianta discret ă) sau
- probleme de acoperire minimal ă pentru grafuri.

### Slide 27: Probleme de optim

- Fie OPT soluția optimă a problemei. Ea poate fi obținută foarte greu (practic imposibil) Două dintre căile de atac pentru astfel de probleme ar fi:
- avem un algoritm care construiește pe rand soluții la problemă, din ce în ce ”mai optime”, care converg către OPT. Lăsăm acest algoritm să ruleze un timp rezonabil, sau până când rezultatul nu se mai poate îmbunătăți
- și
- ne
- mulțumim
- cu ce avem.
- (algoritmi evoluționiști)

### Slide 28: Probleme de optim

- Fie OPT soluția optimă a problemei. Ea poate fi
- obținută foarte greu (practic imposibil) Dou ă dintre
- căile de atac pentru astfel de probleme ar fi:
- fie cazul în care OPT trebuie s ă minimizeze un cost.
- Să reuș im să construim o soluț ie ALG, cu
- OPT<=ALG<=⍴xOPT
- (algoritmi ⍴-aproximativi)

### Slide 29: Aplicație

- :
- Algoritm aproximativ pentru 1/0
- Knapsack
- Problem
- [Whiteboard]
- S24
- S23
- S25
- YT channel

### Slide 30: Next time:

- Seminar & Lab - Recapitulare Fundamentele Algoritmilor
- Curs: introducere în algoritmi aproximativi

### Slide 31: Homework:

_Nu s-a putut extrage text util din acest slide._

## Curs 2

**Sursa:** `Algoritmi Avansați 2026 c-2.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-2
- Algoritmi ⍴-aproximativi
- Lect. Dr. Ștefan Popescu
- Email:
- stefan.popescu@fmi.unibuc.ro
- Grup Teams:

### Slide 2: Despre examen

- 50% Teme:
- 3 parti: Proiect algoritmi genetici (30p), Tema algoritmi aproximativi (30p), Deadline saptamana 6-7
- Algoritmi Geometrici (30p) + 10p din oficiu;
- 50% Examen Scris: 30p Prima parte, 60p A doua parte (algoritmi geometrici), 10p din oficiu
- Examenul scris - durata 60 minute, cu cursurile pe banca.

### Slide 3: Din cursul anterior

- Recapitulare:
- reamintit ce este acela un algoritm
- complexitatea unui algoritm
- timp determinist vs nedeterminist
- crash-course in ce inseamna P, NP, NPC

### Slide 4: Cursul prezent

- Motivație
- Terminologie de baza
- Un prim exemplu de algoritm aproximativ
- Un exemplu mai detaliat

### Slide 5: Motivație

- Q: Daca avem nevoie să aflăm raspunsul la o problemă NP-hard?
- A: Nu prea sunt șanse să găsim un algoritm care să ruleze în timp polinomial
- Așa că….

### Slide 6: Motivație

- Trebuie să renunțăm măcar la unul dintre următoarele 3 elemente:
- Găsirea unui algoritm polinomial pentru problemă
- Găsirea unui algoritm general (pentru o instanță oarecare) a problemei
- Găsirea soluției exacte (optime) pentru problema

### Slide 7: Basic Terminology & Notations

- Problema de Optim:
- Informal spus este problema in care trebuie sa gasesti o “cea mai buna” solutie/constructie fezabila.
- “Cea mai buna” - poate avea doua sensuri:
- Fie avem o problema de
- minimizare
- precum Problema Comis-voiajorului.
- FIe o problema de
- maximizare
- precum cea de a găsi o acoperire de cardinal maxim pentru multimea varfurilor unui graf

### Slide 8: Basic Terminology & Notations

- Problema de Optim:
- Fie
- P
- o problema de optim, și
- I
- o intrare pe aceasta problema. Vom nota cu
- OPT(I)
- ”valoarea” soluției optime.
- În mod analog, atunci când propunem un algoritm care să ofere o soluție fezabilă pentru problema noastră, vom nota ”valoarea” acelei soluții cu
- ALG(I).
- De cele mai multe ori, atunci când nu se crează confuzie, vom simplifica notațiile folosind termenii ”OPT”, respectiv ”ALG”
- Pe parcursul prezentării vom presupune că atât
- OPT,
- cât și ALG sunt ≥0.

### Slide 9: Basic Terminology & Notations

- Problema de Optim:
- Pentru a justifica ca un algoritm este
- util
- , acesta trebuie însoțit de o justificare că soluția oferită este fezabilă pentru problema, precum și o relație între
- ALG
- și
- OPT
- . Aceast tip de relație este descrisă astfel:
- Definiție

### Slide 10: Basic Terminology & Notations

- OBSERVAȚIE
- (pt probleme de minim) Orice algoritm ρ-aproximativ este la rândul lui ρ’-aproximativ pentru orice ρ’>ρ. De aceea, în cazul unui algoritm ALG pentru o problemă de minimizare, spre exemplu, trebuie ca justificarea ce însoțește pe ALG să ofere cea mai mică valoare ρ pentru care ALG este ρ-aproximativ.
- Definiție

### Slide 11: Basic Terminology & Notations

- Definiție
- Fie
- ALG
- un algoritm ρ-aproximativ pentru o problema de minimizare. Spunem că factorul de aproximare este ”tight bounded” atunci când avem
- Ca să arătăm că un algoritm este ρ-aproximativ ”tight bounded” , trebuie deci să justificăm următoarele 2 lucruri:
- Trebuie să arătmăm că este ρ-aproximativ, adică
- ALG(I)≤
- ρx
- OPT(I)
- pentru orice intrare
- I
- Pentru orice ρ’<ρ există un
- I
- pentru care
- ALG(I)>
- ρ’x
- OPT(I)
- . Adesea totuși ne este mai la îndemână să arătăm ca există un
- I
- pentru care
- ALG(I)=
- ρx
- OPT(I)

### Slide 12: O primă provocare:

- 1/0 Knapsack problem
- Enunț pe scurt:
- Trebuie să găsim o submulțime de obiecte de valoare totală maximă, fără ca greutatea lor totală să depășească o capacitate dată a rucsacului. Obiectele sunt puse integral în rucsac sau sunt date deoparte. Nu pot fi fracționate!

### Slide 13: O primă provocare:

- 1/0 Knapsack problem
- Enunț pe scurt:
- Trebuie să găsim o submulțime de obiecte de valoare totală maximă, fără ca greutatea lor totală să depășească o capacitate dată a rucsacului. Obiectele sunt puse integral în rucsac sau sunt date deoparte. Nu pot fi fracționate!
- Presupunere:
- Fiecare obiect are o greutate mai mică sau egală cu capacitatea rucsacului!

### Slide 14: O primă provocare:

- 1/0 Knapsack problem
- Enunț pe scurt:
- Trebuie să găsim o submulțime de obiecte de valoare totală maximă, fără ca greutatea lor totală să depășească o capacitate dată a rucsacului. Obiectele sunt puse integral în rucsac sau sunt date deoparte. Nu pot fi fracționate!
- Rezolvare propusă:

### Slide 15: O primă provocare:

- 1/0 Knapsack problem
- Demonstrați că algoritmul de mai jos este un algoritm 1/2-aproximativ pentru problema 1/0 a Rucsacului!
- Rezolvare propusă:

### Slide 16: O primă provocare:

- 1/0 Knapsack problem
- Demonstrați că algoritmul de mai jos este un algoritm 1/2-aproximativ pentru problema 1/0 a Rucsacului!
- Justificare
- Rezolvare propusă:

### Slide 17: Load Balancing Problem

- Input:
- m calculatoare identice; n activitați ce trebuiesc procesate. Fiecare
- activitate j având nevoie de tj unități de timp pentru execuție.
- Odată inițiată, fiecare dintre activități trebuie derulată în mod
- continuu pe același calculator
- Un calculator poate executa cel mult o activitate în același timp.
- Scop:
- Să asignăm fiecare activitate unui calculator astfel încât să
- minimizăm timpul până când toate activitățile sunt terminate.

### Slide 18: Load Balancing Problem

- Notații:
- J(i) -submulțimea tuturor activităților (job-urilor) care
- au fost programate să se desfășoare pe ma șina i.
- Li va reprezenta ”load-ul” (timpul de lucru) al ma șinii i.
- Li=Σj∊J(i)tj
- Scop: ???

### Slide 19: Load Balancing Problem

- Notații:
- J(i) -submulțimea tuturor activităților (job-urilor) care au fost
- programate să se desfășoare pe mașina i.
- Li va reprezenta ”load-ul” (timpul de lucru) al mașinii i.
- Li=Σj∊J(i)tj
- Scop: O asignare a activităților astfel încât Lk este minimizat,
- unde k = maxi(Li), adică mașina cu cel mai mare load.

### Slide 20: Load Balancing Problem

- Pseudocodul:

### Slide 21: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 22: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 23: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 24: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 25: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 26: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 27: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 28: Step-by-step example

_Nu s-a putut extrage text util din acest slide._

### Slide 29: Step-by-step example (3 steps)

_Nu s-a putut extrage text util din acest slide._

### Slide 30: Step-by-step example (3 steps)

- Este Optim?

### Slide 31: Slide 31

- NU

### Slide 32: Care este Factorul de Aproximare?

_Nu s-a putut extrage text util din acest slide._

### Slide 33: Care este Factorul de Aproximare?

- Lema 1.
- Lema 2.
- Algoritmul descris anterior este un algoritm 2-Aproximativ.
- Altfel spus, fie ALG = max(Li| i ∊{1,...,m}) masina “cea mai incarcata”. Avem de
- arătat că ALG≤2xOPT

### Slide 34: Care este Factorul de Aproximare?

- Lema 1.
- Lema 2.
- Algoritmul descris anterior este un algoritm 2-Aproximativ.
- Altfel spus, fie ALG = max(Li| i ∊{1,...,m}) masina “cea mai incarcata”. Avem de
- arătat că ALG≤2xOPT
- Justificari

### Slide 35: Care este Factorul de Aproximare?

- Lema 2.
- Algoritmul descris anterior este un algoritm 2-Aproximativ.
- Altfel spus, fie ALG = max(Li| i ∊{1,...,m}) masina “cea mai incarcata”. Avem de
- arătat că ALG≤2xOPT
- Justificari
- Este ”tight bound”? Ce ar mai putea fi de facut?

### Slide 36: Se poate imbunatății LB-ul?

- 3 abordari:
- Acelasi Algoritm, o analiză mai buna asupra lower-bound-ului folosit
- Acelasi Algoritm, gasirea unui alt lower bound folosind alte inegalități
- Un cu totul alt Algoritm care poate da un total alt LB
- .

### Slide 37: Se poate imbunatății LB-ul?

- 3 abordari:
- Acelasi Algoritm, o analiză mai buna asupra lower-bound-ului folosit
- Acelasi Algoritm, gasirea unui alt lower bound folosind alte inegalități
- Un cu totul alt Algoritm care poate da un total alt LB
- .

### Slide 38: Se poate imbunatății LB-ul?

- 3 abordari:
- Acelasi Algoritm, o analiză mai buna asupra lower-bound-ului folosit
- Teorema: Algoritmul Greedy descris anterior este un algoritm 2-1/m aproximativ
- Justificari

### Slide 39: Se poate imbunatății LB-ul?

- 3 abordari:
- Acelasi Algoritm, o analiză mai buna asupra lower-bound-ului folosit
- Acelasi Algoritm, gasirea unui alt lower bound folosind alte inegalități
- Un cu totul alt Algoritm care poate da un total alt LB
- .

### Slide 40: Se poate imbunatății LB-ul?

- 3 abordari:
- Acelasi Algoritm, gasirea unui alt lower bound folosind alte inegalități
- Nu se poate!
- m
- mașini, m(m-1) activitati de cost 1 si o activitate de cost
- m

### Slide 41: Se poate imbunatății LB-ul?

- 3 abordari:
- Acelasi Algoritm, o analiză mai buna asupra lower-bound-ului folosit
- Acelasi Algoritm, gasirea unui alt lower bound folosind alte inegalități
- Un cu totul alt Algoritm care poate da un total alt LB
- .

### Slide 42: Se poate imbunatății LB-ul?

- Un cu totul alt Algoritm care poate da un total alt LB
- .

### Slide 43: Ordered-Scheduling Algorithm

- Fie algoritmul precedent la care adaugam următoarea preprocesare:
- Înainte de a fi programate, activitățile sunt sortate descrescător după timpul de lucru.

### Slide 44: Ordered-Scheduling Algorithm

- Lema 3.
- TEOREMA 2
- Algoritmul descris anterior (Ordered-Scheduling Algorithm) este un algoritm 3/2-aproximativ
- Justificări

### Slide 45: Next time:

- Saptamana 3:
- Curs 3: TSP & Christofides
- Vom discuta a doua parte din Tema 1

## Curs 3

**Sursa:** `Algoritmi Avansați 2026 c-3.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-3
- Hamiltonian Cycle Problem, TSP,
- bonus: Christofides’ algorithm
- Lect. Dr. Ștefan Popescu
- Email:
- stefan.popescu@fmi.unibuc.ro
- Grup Teams:

### Slide 2: Ciclu Hamiltonian (HC-Problem)

- Fie
- G=(V,E)
- un graf neorientat.
- Numim
- ciclu hamiltonian
- un ciclu în
- G
- cu proprietatea că fiecare nod apare exact o singură dată.
- HC-Problem este problema de decizie dacă într-un graf oarecare există sau nu un astfel de ciclu.
- HC-Problem este NP-Completa

### Slide 3: Traveling Salesman Problem (TSP)

- Fie G un graf complet cu ponderi>0 pe muchii.
- Evident G este graf hamiltonian, dar se pune problema găsirii ciclului hamiltonian de cost total minim
- .
- Costul unui ciclu este suma costurilor muchiilor din componența sa.

### Slide 4: Traveling Salesman Problem (TSP)

- Fie G un graf complet cu ponderi>0 pe muchii.
- Evident G este graf hamiltonian, dar se pune problema găsirii ciclului hamiltonian de cost total minim
- .
- Costul unui ciclu este suma costurilor muchiilor din componența sa.
- TSP:
- ”Un vânzător ambulant vrea să își promoveze produsele în
- n
- locații. El dorește să treacă prin toate localitățile o singură dată, la final ajungând în localitatea de unde a plecat. Pentru a lucra cât mai eficient, vânzătorul dorește să minimizeze costul total al deplasării”

### Slide 5: Traveling Salesman Problem (TSP)

- Fie G un graf complet cu ponderi>0 pe muchii.
- Evident G este graf hamiltonian, dar se pune problema găsirii ciclului hamiltonian de cost total minim
- .
- Costul unui ciclu este suma costurilor muchiilor din componența sa.
- TSP:
- ”Un vânzător ambulant vrea să își promoveze produsele în
- n
- locații. El dorește să treacă prin toate localitățile o singură dată, la final ajungând în localitatea de unde a plecat. Pentru a lucra cât mai eficient, vânzătorul dorește să minimizeze costul total al deplasării”
- TSP
- este o problema
- NP-hard
- .
- Găsirea unui algoritm aproximativ este necesar
- ă
- !

### Slide 6: Traveling Salesman Problem (TSP)

- TSP:
- ”Un vânzător ambulant vrea să își promoveze produsele în
- n
- locații. El dorește să treacă prin toate localitățile o singură dată, la final ajungând în localitatea de unde a plecat. Pentru a lucra cât mai eficient, vânzătorul dorește să minimizeze costul total al deplasării”
- TSP
- este o problema
- NP-hard
- .
- Găsirea unui algoritm aproximativ este necesara!
- După cum vom vedea, nu dispunem de un astfel de algoritm.

### Slide 7: Traveling Salesman Problem (TSP)

- TSP:
- ”Un vânzător ambulant vrea să își promoveze produsele în
- n
- locații. El dorește să treacă prin toate localitățile o singură dată, la final ajungând în localitatea de unde a plecat. Pentru a lucra cât mai eficient, vânzătorul dorește să minimizeze costul total al deplasării”
- Teorema 1.
- Nu există nicio valoare
- c
- pentru care să existe un algoritm în timp polinomial și care să ofere o soluție cu un factor de aproximare
- c
- pentru TSP, decât dacă
- P=NP
- .
- Demo: Vom arată că există un asemenea algoritm aproximativ, dacă și numai dacă putem rezolva problema HC în timp polinomial.
- Justificare

### Slide 8: Traveling Salesman Problem (TSP)

- În ciuda pesimismului oferit de rezultatul anterior, putem fi optimiști. :-)
- Pug-ul nostru comis-voiajor se deplasează într-un spațiu euclidian. Deci se respectă întotdeauna regula triunghiului!

### Slide 9: Traveling Salesman Problem (TSP)

- În ciuda pesimismului oferit de rezultatul anterior, putem fi optimiști. :-)
- Pug-ul nostru comis-voiajor se deplasează într-un spațiu euclidian. Deci se respectă întotdeauna regula
- triunghiului!
- Regula triunghiului (recap): Pentru orice triunghi cu lungimea laturilor L1≥L2≥L3, avem L3+L2≥L1

### Slide 10: Traveling Salesman Problem (TSP)

- În ciuda pesimismului oferit de rezultatul anterior, putem fi optimiști. :-)
- Pug-ul nostru comis-voiajor se deplasează într-un spațiu euclidian. Deci se respectă întotdeauna regula
- triunghiului!
- Regula triunghiului (recap): Pentru orice triunghi cu lungimea laturilor L1≥L2≥L3, avem L3+L2≥L1
- Pentru un graf complet, ponderat, care respectă regula triunghiului, există algoritmi aproximativi pentru
- rezolvarea TSP!

### Slide 11: Traveling Salesman Problem (TSP)

- În ciuda pesimismului oferit de rezultatul anterior, putem fi optimiști. :-)
- Pug-ul nostru comis-voiajor se deplasează într-un spațiu euclidian. Deci se respectă întotdeauna regula
- triunghiului!
- Regula triunghiului (recap): Pentru orice triunghi cu lungimea laturilor L1≥L2≥L3, avem L3+L2≥L1
- Pentru un graf complet, ponderat, care respectă regula triunghiului, există algoritmi aproximativi pentru
- rezolvarea TSP!!!

### Slide 12: Traveling Salesman Problem (TSP)

- Regula triunghiului pe grafuri ne spune că pentru oricare 3 noduri interconectate u,v,w avem:
- len((u,v))≤len((v,w))+len((w,u))
- Altfel spus, odată ce am traversat nodurile u,v,w - în această ordine, este mai eficient ca să ne întoarcem în u
- direct din w decât via v.
- Observație 2:
- Fie G un graf complet, ponderat, care respectă regula triunghiului. Și fie v1, v2, v3, …., vk un lanț în graful G.
- Atunci avem len((v1,vk))≤len(v1, v2, v3, …., vk)
- Justificare

### Slide 13: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Arbore parțial de cost minim - algoritmi și timpi de lucru
- Asemănare dintre MST și TSP?

### Slide 14: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Arbore parțial de cost minim - algoritmi și timpi de lucru
- Asemănare dintre MST și TSP?
- Ambele caută un traseu de cost total minim care să cuprindă toate nodurile

### Slide 15: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Arbore parțial de cost minim - algoritmi și timpi de lucru
- Diferențe dintre MST și TSP?

### Slide 16: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Arbore parțial de cost minim - algoritmi și timpi de lucru
- Diferențe dintre MST și TSP?
- unul este un arbore, altul este un ciclu
- una este P iar alta este NP hard!

### Slide 17: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Lema 3:
- Fie OPT costul soluției optime pentru TSP, iar MST - ponderea totală a unui Arbore parțial de cost minim pe baza aceluiași graf. Avem relația:
- OPT≥MST
- Justificare

### Slide 18: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- ApproxTSP(G)
- 1: Calculăm arborele parțial de cost minim T pentru graful G.
- 2: Alegem un nod u ∈ T pe post de radacina.
- 3: Γ=Ø.
- 4: Parcurgere (u, Γ)
- 5: Concatenăm nodul u la finalul lui Γ pentru a închide un ciclu .
- 6: return Γ

### Slide 19: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Parcurgere(u, Γ)
- 1: Concatenăm pe u la Γ.
- 2: pentru fiecare v, fiu al lui u:
- 3: Parcurgere(v, Γ)

### Slide 20: Traveling Salesman Problem (TSP)

- algoritm 2-aproximativ:
- Teorema 4:
- Algoritmul descris anterior este un algoritm 2-aproximativ pentru TSP
- Justificare

### Slide 21: Traveling Salesman Problem (TSP)

- Se poate oare mai bine?

### Slide 22: Traveling Salesman Problem (TSP)

- Se poate oare mai bine?
- DA!

### Slide 23: Traveling Salesman Problem (TSP) BONUS!

- Se poate oare mai bine?
- Algoritmul lui Christofides!
- Un algoritm 3/2 aproximativ

### Slide 24: Traveling Salesman Problem (TSP) BONUS!

- ChristofidesTSP(G)
- 1: Calculăm T, un APCM în G
- 2: Fie V∗ ⊂ V mulțimea de vârfuri de grad impar din T . (va exista mereu un num ăr par de vârfuri de grad impar.)
- 3: Fie graful G∗ =(V∗, E∗) - graful complet indus de V ∗.
- 4: Calculăm M - cuplajul perfect de pondere total ă minim ă pentru G ∗
- 5: reunim mulțimile M și T ,
- 6: deoarece toate nodurile au grad par, putem eviden ția un ciclu Eulerian Γ în multigraful indus de M U T
- 7: Pentru fiecare vârf din Γ, eliminăm toate “dublurile” sale, reducând costul total.
- 8: return Γ

### Slide 25: Next time:

- Vertex Cover Problem
- Linear Programming

### Slide 26: Teme

_Nu s-a putut extrage text util din acest slide._

## Curs 4

**Sursa:** `Algoritmi Avansați 2026 c-4.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-4
- Vertex Cover Problem, Linear Programming
- Lect. Dr. Ștefan Popescu
- Email:
- stefan.popescu@fmi.unibuc.ro
- Grup Teams:

### Slide 2: Vertex cover problem

- Problema:
- Fie o rețea de calculatoare în care trebuie să testăm toate conexiunile.
- Pentru a testa conexiunile, trebuie să instalăm un program software pe mai multe calculatoare. Acest program poate testa toate conexiunile directe care pleacă din respectivul calculator.

### Slide 3: Vertex cover problem

- Problema:
- Fie o rețea de calculatoare în care trebuie să testăm toate conexiunile.
- Pentru a testa conexiunile, trebuie să instalăm un program software pe mai multe calculatoare. Acest program poate testa toate conexiunile directe care pleacă din respectivul calculator.
- Evident, putem instala acest program pentru a monitoriza întreaga rețea, dar dorim să minimizam intervenția. Deci se pune problema găsirii unei submulțimi de calculatoare de cardinal minim care să poată monitoriza întreaga rețea.

### Slide 4: Vertex cover problem

- Problema formală:
- Fie un graf neorientat G=(V,E).
- Numim ”acoperire” o submulțime S⊂V cu proprietatea ca pentru orice (x,y) ∊ E avem
- x∊S sau y∊S (sau x,y∊S)
- Se pune problema găsirii unei acoperiri S de cardinal minim!

### Slide 5: Vertex cover problem

- Problema formală:
- Fie un graf neorientat G=(V,E).
- Numim ”acoperire” o submulțime S⊂V cu proprietatea ca pentru orice (x,y) ∊ E avem
- x∊S sau y∊S (sau x,y∊S)
- Se pune problema găsirii unei acoperiri S de cardinal minim!
- Această problemă este
- NP-hard
- .

### Slide 6: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪{x}
- ștergem din E’ toate muchiile incidente lui x
- return S

### Slide 7: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪{x}
- ștergem din E’ toate muchiile incidente lui x
- return S
- Q1. Mulțimea de noduri S este o acoperire pentru graful G?
- DA/NU

### Slide 8: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪{x}
- ștergem din E’ toate muchiile incidente lui x
- return S
- Q1. Mulțimea de noduri S este o acoperire pentru graful G?
- DA
- !

### Slide 9: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪{x}
- ștergem din E’ toate muchiile incidente lui x
- return S
- Q2. Algoritmul de alături:
- Este un algoritm care generează mereu soluția optimă
- Este un algoritm 3-aproximativ pentru VCP
- poate furniza un răspuns arbitrar de slab

### Slide 10: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪{x}
- ștergem din E’ toate muchiile incidente lui x
- return S
- Q2. Algoritmul de alături:
- poate furniza un răspuns arbitrar de slab

### Slide 11: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪{x}
- ștergem din E’ toate muchiile incidente lui x
- return S
- Q3. Cum putem modifica algoritmul alăturat astfel încât să îmbunătățim rezultatul?

### Slide 12: Vertex cover problem

- Fie următorul algoritm:
- INPUT: G=(V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪
- {x,y}
- ștergem din E’ toate muchiile incidente
- lui x și lui y
- return S

### Slide 13: Vertex cover problem

- Fie următorul algoritm:
- ApproxVertexCover (V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪
- {x,y}
- ștergem din E’ toate muchiile incidente
- lui x și lui y
- return S
- Deși pare o abordare cel puțin ciudată, algoritmul alăturat este un algoritm 2-aproximativ pentru vertex cover problem!

### Slide 14: Vertex cover problem

- Fie următorul algoritm:
- ApproxVertexCover (V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪
- {x,y}
- ștergem din E’ toate muchiile incidente
- lui x și lui y
- return S
- Deși pare o abordare cel puțin ciudată, algoritmul alăturat
- generează o acoperire validă
- este un algoritm 2-aproximativ

### Slide 15: Vertex cover problem

- Fie următorul algoritm:
- ApproxVertexCover (V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪
- {x,y}
- ștergem din E’ toate muchiile incidente
- lui x și lui y
- return S
- Lema 1. Fie G=(V,E) un graf neorientat și OPT cardinalul unei acoperiri de grad minim a lui G. Fie
- E*⊂E o mulțime de muchii nod disjuncte.
- Atunci avem că OPT≥|E*|
- Demonstratie

### Slide 16: Vertex cover problem

- Fie următorul algoritm:
- ApproxVertexCover (V,E)
- E’=E; S=ø;
- cât timp E’≠ø:
- aleg (x,y)∊E’;
- S=S∪
- {x,y}
- ștergem din E’ toate muchiile incidente
- lui x și lui y
- return S
- Teorema 2. Algoritmul alăturat este un algoritm 2 aproximativ pentru VCP.
- Demonstratie

### Slide 17: Complicam Problema!

- Weighted Vertex Cover Problem.
- Fie un graf G=(V,E) - un graf simplu, si f:V➝R
- +
- care asociază fiecărui vârf, un cost
- Trebuie să găsim o acoperire de varfuri S astfel încât să minimizăm:
- Este dificil să găsim un algoritm aproximativ pt aceasta problemă prin metodele ”tradiționale”
- Tb sa gasim o abordare noua!

### Slide 18: Programare Liniara

- O problemă de programare liniară arată în felul următor:
- o funcție de ”cost” cu d variabile x1, x2, …, xd
- un set de n constrângeri liniare peste variabilele x1, x2, …, xd
- Scopul este asignarea de valori pentru variabilele de tip xi astfel
- încât să minimizăm (sau, după caz, să maximizăm) funcția de cost,
- respectand totodata toate cele n constrangeri

### Slide 19: Programare Liniara

- O problemă de programare liniară arată în felul următor:
- Ex:
- Tb minimizat c1x1 + · · · + cdxd
- astfel încât
- a1,1x1 + · · · + a1,dxd ≤ b1
- a2,1x1 + · · · + a2,dxd ≤ b2
- …
- an,1x1 + · · · + an,dxd ≤ bn

### Slide 20: Programare Liniara

- O constrângere poate conține adunări de variabile,
- poate folosi inegalități de orice tip (<,>,>=,<=,=)
- O constrângere nu poate fi opțională! Toate constrângerile sunt
- ”binding”
- În constrangeri nu pot apărea elemente de forma ”xi*xj” sau ”x2” -
- trebuie sa fie liniare!

### Slide 21: Programare Liniara

- O problemă de programare liniară arată în felul
- următor:
- Ex:
- Astfel de sisteme pot fi rezolvate în
- Tb minimizat c1x1 + · · · + cdxd timp polinomial prin algoritmi simplex
- astfel încât (vezi cursul de Tehnici de Optimizare).
- a1,1x1 + · · · + a1,dxd ≤ b1
- a2,1x1 + · · · + a2,dxd ≤ b2
- …
- an,1x1 + · · · + an,dxd ≤ bn

### Slide 22: Programare Liniara

- O problemă de programare liniară arată în felul
- următor:
- Ex:
- Astfel de sisteme pot fi rezolvate în
- Tb minimizat c1x1 + · · · + cdxd timp polinomial prin algoritmi simplex
- astfel încât (vezi cursul de Tehnici de Optimizare).
- a1,1x1 + · · · + a1,dxd ≤ b1
- a2,1x1 + · · · + a2,dxd ≤ b2 OBSERVAȚIE:
- Algoritmii simplex rezolvă inegalitatea
- … pentru xi - numere reale!
- an,1x1 + · · · + an,dxd ≤ bn

### Slide 23: Revenim la WVCP (slide 17)

- Putem formula această problemă ca o problemă
- de programare liniară:
- Demonstrație
- Astfel de sisteme pot fi rezolvate în
- timp polinomial prin algoritmi simplex
- (vezi cursul de Tehnici de Optimizare).
- OBSERVAȚIE:
- Algoritmii simplex rezolvă inegalitatea
- pentru xi - numere reale!

### Slide 24: Revenim la WVCP (slide 17)

- Putem formula această problemă ca o problemă
- de programare liniară:
- Demonstrație
- Astfel de sisteme pot fi rezolvate în
- timp polinomial prin algoritmi simplex
- (vezi cursul de Tehnici de Optimizare).
- OBSERVAȚIE:
- Algoritmii simplex rezolvă inegalitatea
- pentru xi - numere reale!

### Slide 25: Further reading:

- Suport de curs saptamana 4 (engl)

## Curs 5

**Sursa:** `Algoritmi Avansați 2026 c-5pptx.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-5
- Genetic Algorithms
- Lect. Dr. Ștefan Popescu
- Email:
- stefan.popescu@fmi.unibuc.ro
- Grup Teams:

### Slide 2: What are they used for?

- Sunt utilizaţi în probleme de optim, pentru care
- spaţiul de căutare a soluţiilor posibile este mare
- nu se cunosc algoritmi exacţi mai rapizi Furnizează o soluţie care nu este neapărat optimă.
- Căutarea în spaţiul soluțiilor candidat – euristică, bazată pe principii ale evoluţiei în genetică
- Denumirea lor se datorează preluării unor mecanisme din biologie: moştenirea genetică şi evoluţia naturală pentru populaţii de indivizi

### Slide 3: What are they used for?

- Aplicații
- Robotică, bioinformatică, inginerie
- Probleme de trafic, rutare, proiectare
- Criptare, code-breaking
- Teoria jocurilor
- Clustering etc

### Slide 4: Informal talk

_Nu s-a putut extrage text util din acest slide._

### Slide 5: Informal talk

_Nu s-a putut extrage text util din acest slide._

### Slide 6: Exemplu ilustrativ (scop didactic)

_Nu s-a putut extrage text util din acest slide._

### Slide 7: Algoritmi Genetici: Noțiuni

- Cromozom
- = mulţime ordonată de elemente (gene) ale căror valoare (alele) determină caracteristicile unui individ

### Slide 8: Algoritmi Genetici: Noțiuni

- Cromozom
- = mulţime ordonată de elemente (gene) ale căror valoare (alele) determină caracteristicile unui individ
- Populație
- = mulţime de indivizi care trăiesc într-un mediu la care trebuie să se adapteze

### Slide 9: Algoritmi Genetici: Noțiuni

- Cromozom
- = mulţime ordonată de elemente (gene) ale căror valoare (alele) determină caracteristicile unui individ
- Populație
- = mulţime de indivizi care trăiesc într-un mediu la care trebuie să se adapteze
- Fitness (adecvare)
- = măsură a gradului de adaptare la mediu pentru fiecare individ (funcţie de fitness)

### Slide 10: Algoritmi Genetici: Noțiuni

- Generație
- = etapă în evoluția populației

### Slide 11: Algoritmi Genetici: Noțiuni

- Generație
- = etapă în evoluția populației
- Selecție
- = proces prin care sunt promovați indivizii cu grad ridicat de adaptare la mediu

### Slide 12: Algoritmi Genetici: Noțiuni

- Generație = etapă în evoluția populației
- Selecție = proces prin care sunt promovați indivizii cu grad ridicat de adaptare la
- mediu
- Operatori genetici:
- încrucişare (combinare, crossover) - indivizii din noua genera ție mo ştenesc
- caracteristicile părinților

### Slide 13: Algoritmi Genetici: Noțiuni

- Generație = etapă în evoluția populației
- Selecție = proces prin care sunt promovați indivizii cu grad ridicat de adaptare la
- mediu
- Operatori genetici:
- încrucişare (combinare, crossover) - indivizii din noua genera ție mo ştenesc
- caracteristicile părinților
- mutaţie – indivizii din noua generație pot dobândi şi caracteristici noi

### Slide 14: Structura pas-cu-pas a unui Algoritm Genetic

_Nu s-a putut extrage text util din acest slide._

### Slide 15: Algoritm

- t=0
- Consideră, o populație inițială P(0): alegem aleator indivizi din intervalul D
- Cât timp nu există condiția de terminare:
- ○ construim o populație nouă P(t+1) pe baza indivizilor din P(t) astfel:
- ■ selecție: generează o populație intermediară P1(t) selectând indivizi din P(t) după un
- anumit criteriu de selecție
- ■ aplicăm operatorul de încrucișare pentru (unii) indivizi din P1(t) obținând populația
- intermediară P2(t)
- ■ aplicăm operatorul de mutație peste (unii) indivizi din P2(t) obținând populația P(t+1)
- ■ opțional: la P(t+1) se adaugă elementul/elementele elitiste din P(t)
- t=t+1

### Slide 16: Algoritm

- t=0
- Consideră, o populație inițială P(0): alegem aleator indivizi din intervalul D
- Cât timp nu există condiția de terminare:
- ○ construim o populație nouă P(t+1) pe baza indivizilor din P(t) astfel:
- ■ selecție: generează o populație intermediară P1(t) selectând indivizi din P(t) după un
- anumit criteriu de selecție
- ■ aplicăm operatorul de încrucișare pentru (unii) indivizi din P1(t) obținând populația
- intermediară P2(t)
- ■ aplicăm operatorul de mutație peste (unii) indivizi din P2(t) obținând populația P(t+1)
- ■ opțional: la P(t+1) se adaugă elementul/elementele elitiste din P(t)
- t=t+1

### Slide 17: Condiții de terminare

- număr maxim de iterații / durată de execuție
- stabilizarea performanței medii /maxime
- am obținut o soluție suficient de bună

### Slide 18: Algoritm

- t=0
- Consideră, o populație inițială P(0): alegem aleator indivizi din intervalul D
- Cât timp nu există condiția de terminare:
- ○ construim o populație nouă P(t+1) pe baza indivizilor din P(t) astfel:
- ■ selecție: generează o populație intermediară P1(t) selectând indivizi din P(t) după un
- anumit criteriu de selecție
- ■ aplicăm operatorul de încrucișare pentru (unii) indivizi din P1(t) obținând populația
- intermediară P2(t)
- ■ aplicăm operatorul de mutație peste (unii) indivizi din P2(t) obținând populația P(t+1)
- ■ opțional: la P(t+1) se adaugă elementul/elementele elitiste din P(t)
- t=t+1

### Slide 19: Algoritm

- t=0
- Consideră, o populație inițială P(0): alegem aleator indivizi din intervalul D
- Cât timp nu există condiția de terminare:
- ○ construim o populație nouă P(t+1) pe baza indivizilor din P(t) astfel:
- ■ selecție: generează o populație intermediară P1(t) selectând indivizi din P(t) după un
- anumit criteriu de selecție
- ■ aplicăm operatorul de încrucișare pentru (unii) indivizi din P1(t) obținând populația
- intermediară P2(t)
- ■ aplicăm operatorul de mutație peste (unii) indivizi din P2(t) obținând populația P(t+1)
- ■ opțional: la P(t+1) se adaugă elementul/elementele elitiste din P(t)
- t=t+1

### Slide 20: Algoritm

- t=0
- Consideră, o populație inițială P(0): alegem aleator indivizi din intervalul D
- Cât timp nu există condiția de terminare:
- ○ construim o populație nouă P(t+1) pe baza indivizilor din P(t) astfel:
- ■ selecție: generează o populație intermediară P1(t) selectând indivizi din P(t) după un
- anumit criteriu de selecție
- ■ aplicăm operatorul de încrucișare pentru (unii) indivizi din P1(t) obținând populația
- intermediară P2(t)
- ■ aplicăm operatorul de mutație peste (unii) indivizi din P2(t) obținând populația P(t+1)
- ■ opțional: la P(t+1) se adaugă elementul/elementele elitiste din P(t)
- t=t+1

### Slide 21: Algoritm

- t=0
- Consideră, o populație inițială P(0): alegem aleator indivizi din intervalul D
- Cât timp nu există condiția de terminare:
- ○ construim o populație nouă P(t+1) pe baza indivizilor din P(t) astfel:
- ■ selecție: generează o populație intermediară P1(t) selectând indivizi din P(t) după un
- anumit criteriu de selecție
- ■ aplicăm operatorul de încrucișare pentru (unii) indivizi din P1(t) obținând populația
- intermediară P2(t)
- ■ aplicăm operatorul de mutație peste (unii) indivizi din P2(t) obținând populația P(t+1)
- ■ opțional: la P(t+1) se adaugă elementul/elementele elitiste din P(t)
- t=t+1

### Slide 22: Exemplu: maximizarea unei funcții pozitive

- Date de intrare + parametri de control
- intervalul [a, b]
- precizia p (numărul de zecimale)
- dimensiunea populației n
- numărul de generații
- probabilitatea de încrucișare
- pc
- probabilitatea de mutație
- pm

### Slide 23: Populația

- Dimensiune
- (număr de cromozomi) :
- n
- fixă, dată
- constantă pe parcursul algoritmului

### Slide 24: Populația

- Dimensiune
- (număr de cromozomi) :
- n
- fixă, dată
- constantă pe parcursul algoritmului
- Codificare
- = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă

### Slide 25: Populația

- Dimensiune
- (număr de cromozomi) :
- n
- fixă, dată
- constantă pe parcursul algoritmului
- Codificare
- = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Cum calculăm lungimea pentru puncte din D = [a,b] ?

### Slide 26: Populația

- Dimensiune
- (număr de cromozomi) :
- n
- fixă, dată
- constantă pe parcursul algoritmului
- Codificare
- = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Cum calculăm lungimea pentru puncte din D = [a,b]?
- Depinde de nivelul de discretizare al intervalului [a,b]

### Slide 27: Codificare

- Codificare = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Pentru D = [a,b] și o precizie p dată (ca număr de zecimale):
- discretizarea intervalului => (b-a)x10p subintervale (elemente)

### Slide 28: Codificare

- Codificare = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Pentru D = [a,b] și o precizie p dată (ca număr de zecimale):
- discretizarea intervalului => (b-a)x10p subintervale (elemente)

### Slide 29: Codificare

- Codificare = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Pentru D = [a,b] și o precizie p dată (ca număr de zecimale):
- discretizarea intervalului => (b-a)x10p subintervale (elemente)
- lungimea cromozomului este:

### Slide 30: Codificare

- Codificare = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Pentru D = [a,b] și o precizie p dată (ca număr de zecimale):
- discretizarea intervalului => (b-a)x10p subintervale (elemente)
- lungimea cromozomului este:

### Slide 31: Codificare

- Codificare = cum asociem unei configurații din spațiul de căutare un cromozom
- În general: codificare binară, lungime fixă
- Pentru D = [a,b] și o precizie p dată (ca număr de zecimale):
- discretizarea intervalului => (b-a)x10p subintervale (elemente)
- lungimea cromozomului este:
- valoarea codificată din D=[a,b] – translație liniară

### Slide 32: Populație

- Populația inițială se generează aleator

### Slide 33: Funcția de fitness

- se pot folosi distanțe cunoscute (euclidiană, Hamming)
- pentru problema de maxim funcția este chiar f

### Slide 34: Selecția

- determinarea unei populații intermediare, ce conține indivizi care vor fi supuși operatorilor genetici
- Selecție proporțională
- Selecție elitistă
- Selecție turneu
- Selecție bazată pe ordonare

### Slide 35: Selecția proporțională

- Presupunem P(t)={X1 ,…,Xn }
- asociem fiecărui individ Xi o probabilitate pi de a fi selectat, în funcție de performanța acestuia (dată de funcția de fitness f)

### Slide 36: Selecția proporțională

- Presupunem P(t)={X1 ,…,Xn }
- asociem fiecărui individ Xi o probabilitate pi de a fi selectat, în funcție de performanța acestuia (dată de funcția de fitness f)

### Slide 37: Selecția proporțională

- Presupunem P(t)={X1 ,…,Xn }
- asociem fiecărui individ Xi o probabilitate pi de a fi selectat, în funcție de performanța acestuia (dată de funcția de fitness f)
- folosind
- metoda ruletei
- selectăm n indivizi (!copii), cu distribuția de probabilitate (p1 , p2 , …, pn)

### Slide 38: Selecția proporțională - metoda ruletei

- Folosind metoda ruletei selectăm n indivizi (!copii), cu distribuția de probabilitate (p1 , p2 , …,
- pn )
- Etapa de Selecție:
- P1(t)=∅
- repetă de n ori:
- ○ generează j cu probabilitatea (p1, p2, …, pn) folosind metoda ruletei
- ■ genereaza u variabila uniformă pe [0,1)
- ■ determină indicele j astfel încât u este între qj-1= p1+…+pj-1 și qj=
- p1+…+pj (cu convenția q0=0)
- ○ adaugă la populația selectată P1(t) o copie a lui Xj

### Slide 39: Selecția

- Selecție elitistă
- = trecerea explicită a celui mai bun individ în generația următoare
- Selecție turneu
- = se aleg aleatoriu k indivizi din populație şi se selectează cel mai performant dintre ei
- Selecție bazată pe ordonare
- = se ordonează indivizii după performanță şi li se asociază câte o probabilitate de selecție în funcție de locul lor după ordonare

### Slide 40: Încrucișarea

- Permite combinarea informațiilor de la părinți
- Doi părinți dau naștere la doi descendenți
- cu un punct de tăietură (de rupere)
- cu mai multe puncte de rupere
- uniformă
- etc

### Slide 41: Încrucișarea

- Cu un punct de tăietură (de rupere)
- 2 părinți
- =>
- 2 indivizi noi
- care iau locul părinților în populație

### Slide 42: Încrucișarea

- Cu un punct de tăietură (de rupere)
- Nu toți cromozomii din P1(t) participă la încrucișare.
- Un cromozom participă la încrucișare cu o probabilitate fixată pc (probabilitate de
- încrucișare – dată de intrare)

### Slide 43: Încrucișarea

- Cu un punct de tăietură (de rupere)
- Un cromozom participă la încrucișare cu o probabilitate fixată pc (probabilitate de
- încrucișare – dată de intrare)
- Etapa de încrucișare:
- Notăm P1(t)={X1,X2,...,Xn}
- for i = 1,n
- ○ genereaza u variabila uniformă pe [0,1]
- ○ daca u<pc atunci marcheaza (va participa la incrucisare)
- formeaza perechi disjuncte de cromozomi marcați și
- aplică pentru fiecare pereche operatorul de încrucișare;
- descendeții rezultați înlocuiesc părinții în populație

### Slide 44: Încrucișarea

- Cu un punct de tăietură (de rupere)
- Un cromozom participă la încrucișare cu o probabilitate fixată pc (probabilitate de
- încrucișare – dată de intrare)
- Etapa de încrucișare:
- Notăm P1(t)={X1,X2,...,Xn}
- for i = 1,n
- ○ genereaza u variabila uniformă pe [0,1]
- ○ daca u<pc atunci marcheaza (va participa la incrucisare)
- formeaza perechi disjuncte de cromozomi marcați și
- aplică pentru fiecare pereche operatorul de încrucișare;
- descendeții rezultați înlocuiesc părinții în populație

### Slide 45: Încrucișarea

- Cu un punct de tăietură (de rupere)
- Un cromozom participă la încrucișare cu o probabilitate fixată pc (probabilitate de
- încrucișare – dată de intrare)
- Etapa de încrucișare:
- Notăm P1(t)={X1,X2,...,Xn}
- for i = 1,n
- ○ genereaza u variabila uniformă pe [0,1]
- ○ daca u<pc atunci marcheaza (va participa la incrucisare)
- formeaza perechi disjuncte de cromozomi marcați și
- aplică pentru fiecare pereche operatorul de încrucișare;
- descendeții rezultați înlocuiesc părinții în populație

### Slide 46: Încrucișarea

- Cu un punct de tăietură (de rupere)
- Un cromozom participă la încrucișare cu o probabilitate fixată pc (probabilitate de
- încrucișare – dată de intrare)
- Etapa de încrucișare:
- Notăm P1(t)={X1,X2,...,Xn}
- for i = 1,n
- ○ genereaza u variabila uniformă pe [0,1]
- ○ daca u<pc atunci marcheaza (va participa la incrucisare)
- formeaza perechi disjuncte de cromozomi marcați și
- aplică pentru fiecare pereche operatorul de încrucișare;
- descendeții rezultați înlocuiesc părinții în populație

### Slide 47: Încrucișarea

- Cu un punct de tăietură (de rupere)
- Un cromozom participă la încrucișare cu o probabilitate fixată pc (probabilitate de
- încrucișare – dată de intrare)
- Etapa de încrucișare:
- Notăm P1(t)={X1,X2,...,Xn}
- for i = 1,n
- ○ genereaza u variabila uniformă pe [0,1]
- ○ daca u<pc atunci marcheaza (va participa la incrucisare)
- formeaza perechi disjuncte de cromozomi marcați și
- aplică pentru fiecare pereche operatorul de încrucișare;
- descendeții rezultați înlocuiesc părinții în populație

### Slide 48: Mutația

- schimbarea valorilor unor gene din cromozom
- asigură diversitatea populației
- probabilitatea de mutație pm – dată de intrare

### Slide 49: Mutația

- Etapa de mutație - Varianta 1 (mutație rară):
- Notăm P2(t) = {X1,…, Xn} populația obținută după încrucișare
- for i = 1,n
- ○ genereaza u variabila uniformă pe [0,1)
- ○ daca u<pm atunci generează o poziție aleatoare p și
- ■ trece gena p din cromozomul Xi la complement 0↔1

### Slide 50: Mutația

- Etapa de mutație - Varianta 2 :
- Notăm P2(t) = {X1,…, Xn} populația obținută după încrucișare
- for i = 1,n
- ○ for j = 1,len(Xi)
- ■ genereaza u variabila uniformă pe [0,1)
- ■ daca u<pm atunci
- trece gena j din cromozomul Xi la complement 0↔1

### Slide 51: Alte exemple

_Nu s-a putut extrage text util din acest slide._

### Slide 52: Next Time

_Nu s-a putut extrage text util din acest slide._

## Curs 6

**Sursa:** `Algoritmi Avansați 2026 c-6.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-6
- Randomized Algorithms
- Lect. Dr. Ștefan Popescu
- Email:
- stefan.popescu@fmi.unibuc.ro
- Grup Teams:

### Slide 2: Cuprins

- Descriere
- Probleme:
- Check Matrix multiplication;
- Primality Testing: The Solovay-Strassen Test
- Quicksort

### Slide 3: Algoritmi probabilisti

- Ce sunt?

### Slide 4: Algoritmi probabilisti

- Ce sunt algoritmii probabilisti?
- Orice algoritm care generează aleator un element
- r
- ∊{1,2,...,R} si efectuează decizii în funcție de valoarea acestuia

### Slide 5: Algoritmi probabilisti

- Ce sunt algoritmii probabilisti?
- Orice algoritm care generează aleator un element
- r
- ∊{1,2,...,R} si efectuează decizii în funcție de valoarea acestuia
- Un astfel de algoritm poate rula un număr diferit de pași și poate oferi output-uri diferite pe aceeași intrare. Astfel devine relevant sa avem mai multe iterații ale algoritmului pe un același input!

### Slide 6: Algoritmi probabilisti

- Algoritmii probabilisti pot fi impartiti in 2 (sau 3) clase:

### Slide 7: Algoritmi probabilisti

- Algoritmii probabilisti pot fi impartiti in 2 (sau 3) clase:
- Algoritmi
- Monte Carlo
- :
- rulează în timp polinomial (rapid) și oferă un răspuns ”probabil” corect

### Slide 8: Algoritmi probabilisti

- Algoritmii probabilisti pot fi impartiti in 2 (sau 3) clase:
- Algoritmi
- Monte Carlo
- :
- rulează în timp polinomial (rapid) și oferă un răspuns ”probabil” corect
- Algoritmi
- Las Vegas
- :
- oferă mereu răspunsul corect în timp ”probabil” rapid

### Slide 9: Algoritmi probabilisti

- Algoritmii probabilisti pot fi impartiti in 2 (sau 3) clase:
- Algoritmi
- Monte Carlo
- :
- rulează în timp polinomial (rapid) și oferă un răspuns ”probabil” corect
- Algoritmi
- Las Vegas
- :
- oferă mereu răspunsul corect în timp ”probabil” rapid
- Algoritmi
- Atlantic City
- :
- rulează în timp ”probabil” rapid și oferă un rezultat ”probabil” corect.

### Slide 10: Algoritmi Monte Carlo

- Exemplu de problemă

### Slide 11: Algoritmi Monte Carlo

- Matrix Multiplication:

### Slide 12: Algoritmi Monte Carlo

- Matrix Multiplication:
- Fie A,B - două matrici pătratice de dimensiune nxn. Dorim să efectuăm calculul
- AxB.

### Slide 13: Algoritmi Monte Carlo

- Matrix Multiplication:
- Fie A,B - două matrici pătratice de dimensiune nxn. Dorim să efectuăm calculul
- AxB.
- Alternative:

### Slide 14: Algoritmi Monte Carlo

- Matrix Multiplication:
- Fie A,B - două matrici pătratice de dimensiune nxn. Dorim să efectuăm calculul
- AxB.
- Alternative:
- Implementare naivă. Complexitate ?

### Slide 15: Algoritmi Monte Carlo

- Matrix Multiplication:
- Fie A,B - două matrici pătratice de dimensiune nxn. Dorim să efectuăm calculul
- AxB.
- Alternative:
- Implementare naivă. Complexitate: O(n3)

### Slide 16: Algoritmi Monte Carlo

- Matrix Multiplication:
- Fie A,B - două matrici pătratice de dimensiune nxn. Dorim să efectuăm calculul
- AxB.
- Alternative:
- Implementare naivă. Complexitate: O(n3)
- Strassen (1969). O(nlog7)=O(n2,81)

### Slide 17: Algoritmi Monte Carlo

- Matrix Multiplication:
- Fie A,B - două matrici pătratice de dimensiune nxn. Dorim să efectuăm calculul
- AxB.
- Alternative:
- Implementare naivă. Complexitate: O(n3)
- Strassen (1969). O(nlog7)=O(n2,81)
- Coppersmith-Winograd (1990). O(n2,376)

### Slide 18: Algoritmi Monte Carlo

- Matrix Multiplication Check
- Fie A,B,C - trei matrici pătratice de dimensiune nxn. Dorim să verificăm dacă AxB=C

### Slide 19: Algoritmi Monte Carlo

- Matrix Multiplication Check
- Fie A,B,C - trei matrici pătratice de dimensiune nxn. Dorim să verificăm dacă AxB=C
- Se poate mai bine decât ”calea directă”?

### Slide 20: Algoritmi Monte Carlo

- Matrix Multiplication Check
- Fie A,B,C - trei matrici pătratice de dimensiune nxn. Dorim să verificăm dacă AxB=C
- Se poate mai bine decât ”calea directă”?
- DA!

### Slide 21: Monte Carlo: Frievald’s Algorithm

- Algoritm probabilist cu următoarele proprietăți:
- Fie A, B, C - matricile din problemă.
- Dacă AxB=C, atunci algoritmul va returna
- întotdeauna ”
- DA
- ”
- Dacă AxB≠C, atunci algoritmul va returna ”
- NU
- ” cu o probabilitate >=1/2

### Slide 22: Monte Carlo: Frievald’s Algorithm

- Problemă: A,B,C - 3 matrici pătrate de dimensiune nxn; Trebuie să verificăm dacă
- AxB=C.

### Slide 23: Monte Carlo: Frievald’s Algorithm

- Problemă: A,B,C - 3 matrici pătrate de dimensiune nxn; Trebuie să verificăm dacă
- AxB=C.
- Soluție:
- 1. Generam un vector binar r de lungime n cu
- Pr[ri=1]=½.
- 2. Dacă Ax(Br)=Cr, return ”DA”
- 3. Altfel return ”NU”

### Slide 24: Monte Carlo: Frievald’s Algorithm

- Soluție:
- 1. Generam un vector binar r de lungime n cu Complexitate?
- Pr[ri=1]=½.
- 2. Dacă Ax(Br)=Cr, return ”DA”
- 3. Altfel return ”NU”

### Slide 25: Monte Carlo: Frievald’s Algorithm

- Soluție:
- 1. Generam un vector binar r de lungime n cu Complexitate: O(n2)
- Pr[ri=1]=½.
- 2. Dacă Ax(Br)=Cr, return ”DA”
- 3. Altfel return ”NU”

### Slide 26: Monte Carlo: Frievald’s Algorithm

- Soluție:
- 1. Generam un vector binar r de lungime n cu Complexitate: O(n2)
- Pr[ri=1]=½.
- 2. Dacă Ax(Br)=Cr, return ”DA”
- 3. Altfel return ”NU”
- Observație: Dacă AxB≠C, atunci Pr[Ax(Br)≠Cr]≥1/2
- Justificare Pt simplitate vom presupune ca matricile sunt binare (doar
- elemente de 0 si 1)

### Slide 27: Primality Testing:

- The Solovay-Strassen Test
- Este utilizat pentru a determina dacă un număr este compus sau
- probabil
- prim
- se bazează pe proprietățile
- simbolului Jacobi
- și ale
- criteriului lui Euler
- Dat fiind un număr impar
- n
- pentru a testa primalitatea, testul alege un număr aleator a în intervalul
- [2, n-1]
- și calculează simbolul Jacobi
- (a/n)
- . Dacă
- n
- este un număr prim, atunci simbolul Jacobi va fi egal cu simbolul Legendre și va satisface criteriul lui Euler

### Slide 28: Primality Testing:

- The Solovay-Strassen Test
- Dat fiind un număr impar
- n
- pentru a testa primalitatea, testul alege un număr aleator a în intervalul
- [2, n-1]
- și calculează simbolul Jacobi
- (a/n)
- . Dacă
- n
- este un număr prim, atunci simbolul Jacobi va fi egal cu simbolul Legendre și va satisface criteriul lui Euler
- Dacă simbolul Jacobi calculat nu satisface criteriul lui Euler, atunci n este compus. Testul este rulat pentru mai multe iterații pentru a-i crește acuratețea.
- Source

### Slide 29: Algoritmi Las Vegas

- Quicksort.
- (C.A.R. Hoare, Moscova, 1959)

### Slide 30: Algoritmi Las Vegas

- Quicksort.
- (C.A.R. Hoare, Moscova, 1959)
- Algoritm Bazat pe strategia Divide-et-Impera
- Primește ca input un șir A de elemente comparabile, returnează șirul A sortat.
- Sortează oarecum asemănător ca sortarea prin inserție: la fiecare pas se fixează un element pe poziția sa.

### Slide 31: Algoritmi Las Vegas

- Quicksort.
- (C.A.R. Hoare, Moscova, 1959)
- Pașii:
- Divide: se alege un element
- x
- din șirul A pe post de pivot. Se partiționează A în L (elementele <x), G (elementele >x) și E (elementele =x).
- Conquer: aplicăm recursiv sortarea pe șirurile L, respectiv G
- Combinare: ...

### Slide 32: Algoritmi Las Vegas

- Basic Quicksort.
- Alegem pivotul x ca fiind fie A[1], fie A[n]
- În mod repetat eliminăm fiecare element y din A
- inserăm y fie în L, G, sau E, în funcție de relația față de x
- Fiecare inserție și ștergere durează O(1)
- Partiționarea durează O(n)

### Slide 33: Algoritmi Las Vegas

- Basic Quicksort.
- 1. Alegem pivotul x ca fiind fie A[1], fie A[n]
- 2. În mod repetat eliminăm fiecare element y din A
- a. inserăm y fie în L, G, sau E, în funcție de relația față de x
- Fiecare inserție și ștergere durează O(1)
- Partiționarea durează O(n)
- detalii în CLRS pag 171; Analiza algortimului:Justificare -O(n2)

### Slide 34: Algoritmi Las Vegas

- Quicksort.
- Q: Cum ne asigurăm ca găsim un pivot bun?

### Slide 35: Algoritmi Las Vegas

- Quicksort.
- Q: Cum să asigurăm ca găsim un pivot bun?
- A: Găsirea medianei!
- Q: Timp?

### Slide 36: Algoritmi Las Vegas

- Quicksort.
- Q: Cum să asigurăm ca găsim un pivot bun?
- A: Găsirea medianei!
- Q: Timp?
- A: Găsirea medianei se face în timp asimptotic liniar!

### Slide 37: Algoritmi Las Vegas

- Quicksort: Median selected as Pivot
- Ne asigură faptul că L și G sunt mereu echilibrate ca mărime
- Analiză complexitate: -prima Θ(n) este din cauza selectiei medianei, iar a doua pentru pasul de partiție.
- Avem:

### Slide 38: Algoritmi Las Vegas

- Quicksort: Median selected as Pivot
- Ne asigură faptul că L și G sunt mereu echilibrate ca mărime
- Analiză complexitate: -prima Θ(n) este din cauza selectiei medianei, iar a doua pentru pasul de partiție.
- Avem:
- In practică acest algoritm
- perfomează mai prost
- decât varianta Basic.

### Slide 39: Algoritmi Las Vegas

- Randomized Quicksort:
- la fiecare pas al recursiei, pivotul este ales aleator.
- Este echivalent cu varianta Basic.
- Detalii în
- CLRS
- pag 181-184

### Slide 40: Algoritmi Las Vegas

- Paranoid Quicksort:
- Repetă:
- Alegem un pivot x aleator din A
- Partitionam A în L, G, E, în funcție de x
- Până când partițiile rezultate sunt de forma:
- |L|≤3/4|A| și |G|≤3/4|A|
- Apelăm recursiv algoritmul pe L și G
- Analiza algortimului:
- Justificare

### Slide 41: Course notes in English

- Prime testing

## Curs 7

**Sursa:** `Algoritmi Avansați 2026 c-7.pptx`

### Slide 1: Algoritmi Avansați 2026

- c-7
- Randomized Data Structures: Skip Lists; Bloom Filters
- Lect. Dr. Ștefan Popescu
- Email:
- stefan.popescu@fmi.unibuc.ro
- Grup Teams:

### Slide 2: Randomized Data Structures

- O privire pe scurt, “din avion” asupra Skip lists.

### Slide 3: Randomized Data Structures

- O privire pe scurt, “din avion” asupra Skip lists.
- Introduse in 1989 de către W. Purgh, sunt structuri dinamice bazate pe factor aleator (randomized)

### Slide 4: Randomized Data Structures

- O privire pe scurt, “din avion” asupra Skip lists.
- Introduse in 1989 de către W. Purgh, sunt structuri dinamice bazate pe factor aleator (randomized)
- Skip lists are a probabilistic data structure that seem likely to supplant balanced trees as the implementation method of choice for many applications. Skip list algorithms have the same asymptotic expected time bounds as balanced trees and are simpler, faster and use less space.
- — William Pugh, Concurrent Maintenance of Skip Lists (1989)

### Slide 5: Listele “standard”

_Nu s-a putut extrage text util din acest slide._

### Slide 6: Listele “standard”

- Q: Complexitatea cautarii unui element intr-o lista sortata?

### Slide 7: Listele “standard”

- Q: Complexitatea cautarii unui element intr-o lista sortata?
- A: O(n)

### Slide 8: Listele “standard”

- Q: Complexitatea cautarii unui element intr-o lista sortata?
- A: O(n)
- Q: Suntem multumiti?

### Slide 9: Listele “standard”

- Q: Complexitatea cautarii unui element intr-o lista sortata?
- A: O(n)
- Q: Suntem multumiti?
- A: NU!

### Slide 10: Listele “standard”

- Q: Complexitatea cautarii unui element intr-o lista sortata?
- A: O(n)
- Q: Complexitate țintă?

### Slide 11: Listele “standard”

- Q: Complexitatea cautarii unui element intr-o lista sortata?
- A: O(n)
- Q: Complexitate țintă?
- A: O( log n)

### Slide 12: Skip Lists

- Pentru o cautare mai eficienta, vom retine 2 liste, dupa modelul urmator:

### Slide 13: Skip Lists

- SEARCH(x):
- Walk right in top linked list (L1) until going right would go too far
- Walk down to bottom linked list (L2)
- Walk right in L2 until element found (or not)

### Slide 14: Skip Lists

- Q: Cum ar trebui distribuite nodurile din L1 (nivelul de mai sus) astfel incat cautarea sa fie cat mai eficienta?

### Slide 15: Skip Lists

- Q: Cum ar trebui distribuite nodurile din L1 (nivelul de mai sus) astfel incat cautarea sa fie cat mai eficienta?
- A: Uniform distribuit!

### Slide 16: Skip Lists

- Q: Cum ar trebui distribuite nodurile din L1 (nivelul de mai sus) astfel incat cautarea sa fie cat mai eficienta?
- A: Uniform distribuit!
- Q: cate noduri ar trebui sa existe in L1?

### Slide 17: Skip Lists

- Q: Cum ar trebui distribuite nodurile din L1 (nivelul de mai sus) astfel incat cautarea sa fie cat mai eficienta?
- A: Uniform distribuit!
- Q: cate noduri ar trebui sa existe in L1?
- A:

### Slide 18: Skip Lists: Numarul de elemente per nivel

- Costul unei căutări în listă este aprox

### Slide 19: Skip Lists: Numarul de elemente per nivel

- Costul unei căutări în listă este aprox
- Relatia de mai sus este minimizata atunci cand |L1|
- =|L2|=n; deci
- |L1|=sqrt(n)

### Slide 20: Skip Lists: Numarul de elemente per nivel

_Nu s-a putut extrage text util din acest slide._

### Slide 21: Skip Lists: Numarul de elemente per nivel

- Dar pentru 3 nivele?
- Dar 4 nivele?
- Dar
- k
- nivele?

### Slide 22: Skip Lists: Numarul de elemente per nivel

_Nu s-a putut extrage text util din acest slide._

### Slide 23: Skip Lists: Numarul de elemente per nivel

_Nu s-a putut extrage text util din acest slide._

### Slide 24: Skip Lists: Numarul de elemente per nivel

- Cu ce seamănă oare?

### Slide 25: Skip Lists: Numarul de elemente per nivel

- Cu ce seamana oare?
- Un arbore!

### Slide 26: Skip Lists: Search (X)

- Search(72)

### Slide 27: Skip Lists: Insert (X)

- Pentru a insera un nou element X in lista:
- ii cautam pozitia in nivelul inferior (search(x))
- il inseram pe nivelul inferior

### Slide 28: Skip Lists: Insert (X)

- Pentru a insera un nou element X in lista:
- ii cautam pozitia in nivelul inferior (search(x))
- il inseram pe nivelul inferior
- il inseram si pe
- unele
- nivele superioare
- OBSERVATIE: Nivelul inferior va contine intoteauna toate elementele

### Slide 29: Skip Lists: Insert (X)

- Pentru a insera un nou element X in lista:
- ii cautam pozitia in nivelul inferior (search(x))
- il inseram pe nivelul inferior
- il inseram si pe
- unele
- nivele superioare
- OBSERVATIE: Nivelul inferior va contine intoteauna toate elementele
- Q: Pe cate alte nivele inserez X?
- A: Dau cu banul! Daca pica pajura, inserez pe inca un nivel, altfel ma opresc!

### Slide 30: Skip Lists: Insert (X)

- Pentru a insera un nou element X in lista:
- ii cautam pozitia in nivelul inferior (search(x))
- il inseram pe nivelul inferior
- il inseram si pe
- unele
- nivele superioare
- OBSERVATIE: Nivelul inferior va contine intoteauna toate elementele
- Q: Pe cate alte nivele inserez X?
- A: Dau cu banul! Daca pica pajura, inserez pe inca un nivel, altfel ma opresc!
- Consecinta: ½ dintre elemente vor fi doar pe nivelul 0. ¼ dintre elemente vor fi doar pe nivelele 0 si 1. ⅛ vor fi doar pe nivelele 0, 1 si 2, etc...

### Slide 31: Skip Lists: Exercitiu

_Nu s-a putut extrage text util din acest slide._

### Slide 32: Skip Lists: Delete (x)

- Se cauta elementul x in lista (se gaseste pe cel mai de sus nivel).
- Se sterge elemntul de pe toate nivelele!

### Slide 33: Skip Lists: How good are they?

- Whiteboard
- Mit Course on Skip Lists
- Lecture Notes
- Lecture Slides

### Slide 34: Bonus: Bloom Filters

_Nu s-a putut extrage text util din acest slide._


# Seminarii

## Seminar 1

**Sursa:** `seminar1-alg-aprox.pdf`

### Pagina 1: Autori: A. Miclăuș, D. Ilie, G. Majeri, Ș. Popescu, Ș. Rîncu

- Algoritmi Avansați
- Seminarul 1
- 1 Introducere
- Ce este o problemă (computațională)?
- O problemă computațională [1] este o problemă la care putem determina
- răspunsul folosind un algoritm1 .
- Exemplu de problemă computațională: Care sunt factorii primi
- ai numărului natural 𝑛?
- Exemplu de problemă care nu se poate rezolva folosind algo-
- ritmi: Ce pereche de pantaloni să port astăzi?2
- Ce tipuri de probleme computaționale există?
- Probleme de decizie [5]: Răspunsul este de tipul adevărat/fals (po-
- sibil/imposibil, există/nu există etc.)
- Probleme de optimizare [6]: Răspunsul este o soluție (un număr,
- un șir de numere, un text etc.) care este “cea mai bună” dintr-un
- anumit punct de vedere (consumă cele mai puține resurse, produce cel
- mai mare profit, acoperă cele mai multe noduri etc.) față de toate
- celelalte soluții posibile.
- Un algoritm [2, 3] este o serie de pași bine-definiți care îți permit să obții un rezultat
- plecând de la niște date de intrare. În comparație, “să ghicești răspunsul corect” nu e
- tocmai un algoritm. Dar poate fi o euristică [4].
- Dacă ai un număr finit de opțiuni (pantaloni din care să alegi) și asociezi fiecărei
- perechi câte un scor (număr) care să indice deziderabilitatea acesteia, atunci această pro-
- blemă se poate reduce la o problemă computațională, aceea de a găsi perechea de pantaloni
- cu scorul maxim.

### Pagina 2: Probleme de numărare [7]: Răspunsul este numărul total de soluții

- Probleme de numărare [7]: Răspunsul este numărul total de soluții
- care satisfac o anumită proprietate. În loc să căutăm dacă există o
- soluție sau care este cea mai bună, suntem interesați de câte astfel de
- soluții există în total
- 2 Exerciții
- Cunoștințe generale
- 1. Dați exemplu de 2 probleme pe care le întâlniți în viața de zi cu zi care
- se pot interpreta ca probleme computaționale (de exemplu, cum alegi traseul
- pe care să vii la facultate).
- 2. Dați exemplu de 2 probleme de decizie și 2 probleme de optimizare
- pe care le-ați întâlnit în practică sau de care ați auzit.
- P versus NP
- 3. În cele ce urmează, să presupunem că avem o listă (un vector) de 𝑛
- numere întregi.
- 1. Propuneți un algoritm care să determine cel mai mare element (în
- valoare absolută) din listă. Ce complexitate de timp/memorie are
- algoritmul propus?
- 2. Pentru un număr întreg dat 𝑆, propuneți un algoritm care să determine
- toate perechile de numere din lista inițială care adunate dau 𝑆.
- Puteți găsi un algoritm cu complexitate de timp, în cel mai rău caz,
- mai bună decât 𝒪(𝑛2 )?
- 3. (3SUM [8]) Propuneți un algoritm care să determine dacă în lista ini-
- țială există trei numere care adunate să aibă suma 0. Credeți că
- puteți un algoritm determinist care să rezolve problema în mai puțin
- de 𝑛2 pași? Dar dacă ați aborda problema în mod nedeterminist?
- Metoda greedy
- Un algoritm de tip greedy va încerca la fiecare pas să ia alegerea optimă, care
- îi dă un „câștig” maxim imediat (optim local). Mai multe informații despre
- principiile care stau la baza metodei greedy se pot găsi la [9] sau în [3].

### Pagina 3: 4 (Problema spectacolelor / intervalelor). [10] Suntem administratorii

- unui spital și vrem să ne asigurăm că avem tot timpul cel puțin un medic
- prezent la camera de gardă într-un anumit interval de timp. Presupunem că
- avem la dispoziție 𝑛 medici, care ar fi dispuși să stea de gardă fiecare între
- anumite ore. Vrem să asignăm câți mai puțini medici, ca ceilalți să se poată
- ocupa de alte urgențe.
- Problema formalizată: Fiind dat un interval [𝑎, 𝑏] și o mulțime de
- intervale [𝑎1 , 𝑏1 ], [𝑎2 , 𝑏2 ], … , [𝑎𝑛 , 𝑏𝑛 ], vrem să alegem un număr minim dintre
- acestea astfel încât, reunite, să includă intervalul inițial [𝑎, 𝑏].
- 1. Aceasta este o problemă de decizie sau de optimizare? Dar dacă
- ne-ar interesa doar să vedem dacă putem acoperi intervalul dat cu
- intervalele disponibile?
- 2. Propuneți un algoritm care să determine dacă măcar putem acoperi
- intervalul dat cu intervalele disponibile.
- 3. Propuneți un algoritm care să rezolve problema inițială. Demonstrați
- că algoritmul propus obține soluția optimă (adică că nu poate exista
- o altă soluție, diferită de cea obținută prin metoda voastră, care să
- folosească mai puține intervale).
- 3 Probleme
- Problema rucsacului
- Descrierea problemei. Se dă o mulțime de obiecte 𝑂 = { 𝑜1 , 𝑜2 , … , 𝑜𝑛 }.
- Pentru fiecare obiect 𝑜𝑖 știm cât este valoarea obiectului (pe care o vom
- nota 𝑣𝑎𝑙𝑖 ), respectiv greutatea obiectului (pe care o vom nota 𝑔𝑖 ).
- Scopul este să găsim o submulțime de obiecte 𝑆 ⊆ 𝑂 astfel încât suma
- greutăților obiectelor din 𝑆 să nu depășească o capacitate 𝐶 a unui rucsac
- (fixată de la început), iar valoarea totală a acestora să fie maximă.
- Formularea matematică. Să se găsească 𝑆 ⊆ 𝑂 care să maximizeze
- ∑ 𝑣𝑎𝑙𝑖
- 𝑜𝑖 ∈𝑆
- cu condiția că
- ∑ 𝑔𝑖 ≤ 𝐶
- 𝑜𝑖 ∈𝑆
- Observație. Toate submulțimile 𝑆 care respectă condiția de mai sus se vor
- numi soluții candidat. Dintre acestea, soluția (sau soluțiile) care maximi-
- zează valoarea totală se va numi soluția optimă.

### Pagina 4: Varianta fracționară [11]

- Elementele din 𝑆 pot fi fracțiuni din obiecte; cu alte cuvinte, pentru fiecare
- obiect 𝑜𝑖 reținem și procentul din el pe care îl luăm în considerare, 𝑝𝑖 ∈ [0, 1].
- Fiecare obiect din soluție contribuie la valoarea totală cu 𝑝𝑖 ⋅ 𝑣𝑎𝑙𝑖 , respectiv
- este contorizat spre greutatea totală cu 𝑝𝑖 ⋅ 𝑔𝑖 .
- Formularea matematică devine: să se găsească 𝑆 ⊆ 𝑂 care să maximizeze
- ∑ 𝑝𝑖 ⋅ 𝑣𝑎𝑙𝑖
- 𝑜𝑖 ∈𝑂
- cu condiția că
- ∑ 𝑝𝑖 ⋅ 𝑔𝑖 ≤ 𝐶
- 𝑜𝑖 ∈𝑂
- Complexitatea pe care ar trebui să o aibă soluția voastră: 𝒪(𝑛 log 𝑛)
- Varianta discretă [12]
- Elementele din 𝑆 pot fi doar obiecte luate cu totul; cu alte cuvinte, pentru
- fiecare obiect 𝑜𝑖 decidem dacă îl includem sau nu.
- Complexitatea pe care ar trebui să o aibă soluția voastră: 𝒪(𝑛 ⋅ 𝐶)
- Alte probleme pseudo-polinomiale
- Submulțime de elemente cu suma dată
- Se dă o mulțime de 𝑛 numere naturale și un număr natural 𝑀 < 10000. Să
- se determine, dacă există, o submulțime a mulțimii date de sumă egală cu
- 𝑀.
- Exemplu. Pentru 𝑛 = 6, mulțimea { 12, 1, 3, 4, 5, 7 } și 𝑀 = 14, o
- soluție este submulțimea { 3, 4, 7 }.
- Complexitatea pe care ar trebui să o aibă soluția voastră: 𝒪(𝑛 ⋅ 𝑀 )
- Împărțirea cadourilor
- Moș Crăciun a poposit la bradul a doi frați, unde și-a golit sacul. Când s-au
- trezit, frații au intrat într-o mare dilemă: cum își vor împărți ei cadourile?
- Știind că fiecare cadou are o valoare cuprinsă între 1 și 100 și că sunt maxim

### Pagina 5: 100 de cadouri, scrieți un program care să determine sumele cadourilor fra-

- ților precum și modul de împărțire, astfel încât sumele obținute să fie cât de
- apropiate posibil.
- Exemplu. Pentru 7 cadouri cu valorile { 28, 7, 11, 8, 9, 7, 27 }, sumele
- sunt 48 și 49, o împărțire a cadourilor fiind: { 28, 11, 9 }, respectiv { 7, 8, 7, 27 }.
- Complexitatea pe care ar trebui să o aibă soluția voastră: 𝒪(𝑛 ⋅ 𝑆),
- unde 𝑆 reprezintă valoarea totală a cadourilor.
- Alte probleme de programare dinamică
- Generalizarea problemei spectacolelor
- Se dau 𝑛 activități, pentru fiecare având: timpul de început, timpul
- de sfârșit și profitul asociat desfășurării activității (adică 𝑛 intervale de
- numere reale, fiecare cu o pondere asociată). Să se determine o submulțime
- de activități compatibile (intervale disjuncte două câte două) care au profitul
- total maxim. Se vor afișa profitul total și activitățile selectate.
- Exemplu. Pentru 𝑛 = 4 și activitățile:
- 𝐴1 = [1, 3] cu profitul 𝑝1 = 1
- 𝐴2 = [2, 6] cu profit 𝑝2 = 8
- 𝐴3 = [4, 7] cu profit 𝑝3 = 2
- 𝐴4 = [10, 15] cu profit 𝑝4 = 5
- O soluție optimă ar fi formată din activitățile 𝐴2 și 𝐴4 (adică intervalele
- [2, 6] și [10, 15]), cu profitul total 13.
- Complexitatea pe care ar trebui să o aibă soluția voastră: încercați să
- găsiți o soluție în 𝒪(𝑛 log 𝑛); dacă nu reușiți, încadrați-vă în cel mult 𝒪(𝑛2 ).
- Generalizarea problemei planificării activităților
- Se dă o listă de 𝑛 activități. Pentru fiecare activitate cunoaștem profitul
- (𝑝𝑖 ), termenul limită până la care trebuie efectuată (𝑡𝑖 ) și durata acesteia
- (𝑙𝑖 ). Trebuie să găsim o submulțime ordonată (o sublistă) de activități pentru
- a obține un profit total maxim.
- Exemplu. Pentru 𝑛 = 4 și activitățile:
- 𝐴1 cu 𝑝1 = 3, 𝑡1 = 5, 𝑙1 = 3

### Pagina 6: 𝐴2 cu 𝑝2 = 2, 𝑡2 = 2, 𝑙2 = 1

- 𝐴2 cu 𝑝2 = 2, 𝑡2 = 2, 𝑙2 = 1
- 𝐴3 cu 𝑝3 = 3, 𝑡3 = 2, 𝑙3 = 2
- 𝐴4 cu 𝑝4 = 5, 𝑡4 = 4, 𝑙4 = 3
- O soluție optimă se obține dacă planificăm activitățile în ordinea 𝐴2 , 𝐴4 ,
- profitul fiind 7.
- Observație. Problema discretă a rucsacului poate fi privită ca un caz par-
- ticular al acestei probleme (obiectele sunt activități de durată 𝑔𝑖 , profit 𝑐𝑖 și
- termen limită 𝐶).
- Complexitatea pe care ar trebui să o aibă soluția voastră: 𝒪(𝑛 ⋅ 𝑇 +
- 𝑛 log 𝑛), unde 𝑇 = max { 𝑡𝑖 }.
- Problema sumei țintă (Target Sum) [13]
- Descrierea problemei. Se dă o mulțime de 𝑛 numere naturale 𝐴 =
- {𝑎1 , 𝑎2 , … , 𝑎𝑛 } și un număr întreg 𝑇 (numit țintă). Pentru fiecare număr
- din mulțime, trebuie să îi atribuim un simbol matematic, fie + (plus), fie −
- (minus), astfel încât rezultatul operațiilor succesive să fie egal cu 𝑇 .
- Formularea matematică. Să se determine în câte moduri se pot alege
- coeficienții 𝑠𝑖 ∈ {−1, 1} astfel încât să fie satisfăcută egalitatea:
- 𝑛
- ∑ 𝑠𝑖 ⋅ 𝑎 𝑖 = 𝑇
- 𝑖=1
- Observație. Această problemă este o variantă a problemei submulțimii
- de sumă dată. Dacă notăm cu 𝑃 suma elementelor cu semnul + și cu 𝑁
- suma celor cu semnul −, avem:
- 1. 𝑃 − 𝑁 = 𝑇
- 2. 𝑃 + 𝑁 = 𝑆, unde 𝑆 = ∑ 𝑎𝑖
- Din cele două rezultă 2𝑃 = 𝑇 + 𝑆 ⟹ 𝑃 = 𝑇 +𝑆 2 . Problema se reduce la a
- găsi numărul de submulțimi care au suma exact 𝑃 .
- Exemplu. Pentru 𝑛 = 5, 𝐴 = {1, 1, 1, 1, 1} și 𝑇 = 3, există 5 variante
- (moduri) de a obține rezultatul (prin alegerea unui singur element care să
- aibă semnul minus).
- Complexitatea pe care ar trebui să o aibă soluția voastră: 𝒪(𝑛⋅𝑆),
- unde 𝑆 este suma elementelor din 𝐴. Deoarece depinde de valoarea numerică
- 𝑆, problema este pseudo-polinomială.

### Pagina 7: Referințe

- [1] Wikipedia contributors, Computational problem, url: https://en.
- wikipedia.org/wiki/Computational_problem.
- [2] Wikipedia contributors, Algorithm, url: https : / / en . wikipedia .
- org/wiki/Algorithm.
- [3] Thomas H. Cormen et al., Introduction to Algorithms, a 3-a ed., MIT
- Press, Iul. 2009, url: https://www.cs.mcgill.ca/~akroit/math/
- compsci/Cormen%20Introduction%20to%20Algorithms.pdf.
- [4] Wikipedia contributors, Heuristic, url: https://en.wikipedia.org/
- wiki/Heuristic_(computer_science).
- [5] Wikipedia contributors, Decision problem, url: https://en.wikipedia.
- org/wiki/Decision_problem.
- [6] Wikipedia contributors, Optimization problem, url: https : / / en .
- wikipedia.org/wiki/Optimization_problem.
- [7] Wikipedia contributors, Counting problem, url: https://en.wikipedia.
- org/wiki/Counting_problem_(complexity).
- [8] Wikipedia contributors, 3SUM, url: https://en.wikipedia.org/
- wiki/3SUM.
- [9] Karleigh Moore, Jimin Khim și Eli Ross, Greedy Algorithm, url: https:
- //brilliant.org/wiki/greedy-algorithm/.
- [10] Platforma CMS-FMI, Acoperire cu intervale, url: https://cms.fmi.
- unibuc.ro/problem/intervals.
- [11] Platforma CMS-FMI, Problema rucsacului - varianta fracționară, url:
- https://cms.fmi.unibuc.ro/problem/fractionalknapsack.
- [12] Platforma CMS-FMI, Problema rucsacului - varianta discretă, url:
- https://cms.fmi.unibuc.ro/problem/discreteknapsack.
- [13] LeetCode, Target Sum, url: https : / / leetcode . com / problems /
- target-sum/description/.

### Pagina 8: Pagina 8

_Nu s-a putut extrage text util din această pagină._

## Seminar 2

**Sursa:** `seminar2-alg-apox.pdf`

### Pagina 1: Seminar 2

- Stefan Popescu
- April 2023
- Vouchere de Vacant, ă
- (10p) George a intrat ı̂n concediu, şi ca atare doreşte să consume cât mai mult din pachetul său de vouchere
- de vacanţă. El şi-a făcut o listă cu n locaţii unde poate cheltui din suma alocată. Ştiind că George nu
- are de gând să cheltuiască din banii proprii decât pe transportul ı̂ntre locaţii şi că el se poate deplasa ı̂ntre
- oricare două locaţii, ajutaţi-l pe George să găsească o listă de locaţii pe care să le viziteze astfel ı̂ncât să ı̂şi
- folosească voucherele cât mai eficient.
- Cerinţe:
- Se cere un algoritm 1/2-aproximativ care rezolvă problema lui George ı̂n timp eficient din punct de vedere
- al complexităţii timp. (pseudocod + justificare)
- Algoritmul va avea ca output lista de locaţii şi suma totală ce va fi cheltuită.
- Notaţii şi indicaţii:
- Notăm cu S suma de bani pe care o are George sub formă de vouchere.
- Locaţiile sunt etichetate cu numerele 1, 2, ..., n. Costurile celor n locaţii sunt notate cu C1 , C2 , ..., Cn
- Suma de bani S este alocată pe un card, nu sub formă de tichete. Din cont se poate extrage orice sumă
- disponibilă.
- Se lucrează cu numere ı̂ntregi.
- Camioane ,si Transporturi
- (15p) Avem n colete de transportat, fiecare având greutatea de w1 , w2 , ..., wn . Pentru a le transporta,
- putem folosi un număr de camioane, fiecare având capacitatea de transport G. presupunem că w ≤ G,
- pentru orice i. Ne dorim sa minimizăm numărul de camioane folosite. Considerăm următorul plan de
- ı̂ncărcare a camioanelor:
- Odată ce avem la dispozit, ie un camion pentru a fi ı̂ncărcat, iterăm prin mult, imea coletelor, ı̂ncărcându-le
- ı̂n camion, până când dăm peste primul colet ce nu mai ı̂ncape. În acel moment considerat că am terminat
- de ı̂ncărcat camionul curent ,si trecem la următorul camion, prima dată ı̂ncărcând coletul care nu a mai
- ı̂ncăput ı̂n cel precedent.
- Cerint, e:
- a) Arătat, i, printr-un exemplu simplu, că metoda de mai sus nu furnizează solut, ia optimă. (5p)
- b) Arătat, i totus, i că solut, ia de mai sus este un algoritm 2-aproximativ pentru problema noastră. (10p)
- Notat, ii:
- n - numărul de colete
- G - capacitatea unui camion
- W - Lista cu greutăt, ile coletelor ı̂n ordinea ı̂n care sosesc spre a fi procesate.

### Pagina 2: cele n colete de greutate totală G

- OP T – solut, ia optimă care există: Numărul minim de camioane ce poate fi folosit pentru a transporta
- cele n colete de greutate totală G
- ALG – solut, ia oferită de algoritmul nostru: numărul de camioane folosite conform algoritmului
- G[i] - greutatea cu care este ı̂ncărcat camionul i ı̂n configurat, ia dată de algoritmul nostru. Evident
- G[i] ≤ G.
- Cadourile lui Mos, Crăciun
- (30p) O clasă de elevi este formată din m copii. La această clasă Mos, Crăciun aduce n cadouri, fiecare
- dintre ele având o valoare notată val1 , val2 , ..., valn . Mos, ul, grăbit fiind, lasă task-ul ı̂mpărt, irii cadourilor
- pe umerii profesorului de informatică. Acesta ı̂s, i alege următorul obiectiv pentru ı̂mpărt, irea cadourilor: sa
- maximizeze valoarea cadourilor primite de către copilul care primes, te cel mai put, in. (Altfel spus, copilul
- cel mai “vitregit” ı̂n urma ı̂mpărt, irii să primească totus, i cadouri de o valoare cât mai bună / Să existe un
- “spread” cât mai bun al cadourilor). În timp ce se gândes, te la o solut, ie de implementare, profesorul ı̂s, i
- amintes, te de la cursurile de algoritmică din facultate că astfel de probleme de optim sunt NP-hard! Fiind
- cuprins de groază (dar s, i de o nostalgie pentru cursurile de algoritmică din facultate) el vă cere vouă ajutorul.
- Notat, ii:
- OP T – solut, ia optimă care există: Valoarea totală a cadourilor primite de copilul cel mai “vitregit” ı̂n
- o configurat, ie optima
- ALG – solut, ia oferită de algoritmul vostru: Valoarea totală a cadourilor primite de copilul cel mai
- “vitregit” ı̂n urma algoritmului vostru
- C[k] - lista cadourilor primite de către copilul k la finalul algoritmului vostru
- W (K) – valoarea totala a cadourilor primite de către copilul k la finalul algoritmului vostru
- val(i) – valoarea cadoului i
- P
- V al = 1≤i≤n val(i) – valoarea totală a cadourilor
- Copiii vor fi indexat, i folosind variabile de forma k, q, k ′ , q ′ , etc. . . Cadourile vor fi indexate folosind
- variabile de forma i, j, i′ , j ′ , etc. . . .
- Restrict, ii: Considerăm că n ≥ m s, i că val(i) ≤ V2m
- al
- pentru oricare cadou i.
- Cerint, e:
- a) Descriet, i un algoritm ½ aproximativ pentru problema cadourilor in complexitate O(n log m) (10p)
- b) Fie k acel copil pentru care ALG = W (K). Fie i ultimul cadou primit de un copil oarecare q (q ̸= k).
- Care este relat, ia ı̂ntre W (K) s, i W (Q) − val(i)? Justificaţi. (5p)
- c) Pe baza punctului b) arătat, i că ALG ≥ V2m
- al
- (5p)
- d) Demonstrat, i că algoritmul descris la punctul a) este ½ aproximativ (5p)
- e) Dat, i un exemplu format din minimum 2 copii s, i 4 cadouri pentru care algoritmul vostru nu găses, te
- solut, ia optima. Spunet, i care este solut, ia optima. Spunet, i care este solut, ia dată de algoritmul vostru.
- (5p)

### Pagina 3: Pagina 3

_Nu s-a putut extrage text util din această pagină._

## Seminar 3

**Sursa:** `seminar3-alg-gen.pdf`

### Pagina 1: Algoritmi Avansaţi 2026

- Seminar 3 — Algoritmi Genetici
- Lect. Dr. Ştefan Popescu stefan.popescu@fmi.unibuc.ro
- Facultatea de Matematică şi Informatică, Universitatea din Bucureşti
- Recapitulare teoretică
- 1. Ce este un algoritm genetic?
- Un algoritm genetic (GA) este o metaheuristică inspirată din evoluţia biologică,
- utilizată pentru optimizarea funcţiilor în spaţii mari de căutare. Spre deosebire de
- algoritmii exacţi, GA nu garantează optimalitatea, dar produce soluţii bune în timp
- rezonabil. Se aplică în: robotică, bioinformatică, trafic, proiectare de circuite, teoria
- jocurilor, clustering.
- 2. Terminologie de bază
- Termen Semnificaţie în GA
- Cromozom O soluţie candidată codificată ca şir binar c =
- (g1 , . . . , gℓ ) ∈ {0, 1}ℓ .
- Genă O poziţie gk din cromozom; valoarea ei se numeşte alelă.
- Populaţie Mulţimea de n cromozomi ai generaţiei curente P (t); n
- este fix pe tot parcursul algoritmului.
- Fitness Funcţia f ≥ 0 care măsoară calitatea unui individ; valori
- mai mari = individ mai bun.
- Generaţie O iteraţie a buclei principale; P (t) → P (t + 1).
- Selecţie Alegerea indivizilor care vor produce următoarea gene-
- raţie, favorizând fitness-ul ridicat.
- Încrucis, are Combinarea a doi părinţi pentru a produce descendenţi
- care moştenesc de la ambii.
- Mutaţie Modificarea aleatorie a unor gene; asigură diversitatea
- populaţiei.
- Elitism Trecerea explicită a celui mai bun individ în generaţia
- următoare (opţional).

### Pagina 2: 3. Schema algoritmului

- 1. Iniţializare: generează aleator populaţia P (0) cu n cromozomi.
- 2. Repetă până la criteriul de terminare:
- 1. Evaluare: calculează f (Xi ) pentru fiecare individ.
- 2. Selecţie: obţine P1 (t) din P (t).
- 3. Încrucis, are: aplică operatorul cu probabilitate pc ; obţine P2 (t).
- 4. Mutaţie: aplică operatorul cu probabilitate pm ; obţine P (t + 1).
- 5. (Opţional) Elitism: copiază cel mai bun individ din P (t) în P (t + 1).
- 3. Return: cel mai bun individ găsit.
- Condiţii de terminare: număr maxim de generaţii, stagnarea fitness-ului me-
- diu/maxim, atingerea unui prag de calitate.
- 4. Codificarea binară şi decodificarea
- Pentru domeniul [a, b] cu precizie p zecimale, intervalul se discretizează în (b − a) ·
- 10p subintervale egale — numărul de valori distincte pe care vrem să le reprezentăm.
- Lungimea minimă a cromozomului este:
- ℓ = log2 (b − a) · 10p .
-  
- De ce log2 ? Un şir de ℓ biţi poate lua 2ℓ valori distincte. Vrem 2ℓ ≥ (b − a) · 10p , deci
- ℓ ≥ log2 ((b − a) · 10p ). Plafonăm (ceiling) pentru a obţine un număr întreg.
- Decodificare (cromozom binar → valoare reală):
- Pasul 1 — valoarea întreagă:
- ℓ
- X
- v= gk · 2ℓ−k = g1 · 2ℓ−1 + g2 · 2ℓ−2 + · · · + gℓ · 20 .
- k=1
- Aceasta este pur şi simplu conversia din binar în zecimal: gena g1 este bitul cel mai
- semnificativ (MSB ), gena gℓ este bitul cel mai puţin semnificativ (LSB ). Rezultatul
- v ∈ {0, 1, . . . , 2ℓ − 1} reprezintă un indice în şirul de valori discrete.
- Pasul 2 — translat, ie liniară:
- b−a
- x=a+v· .
- 2ℓ − 1
- b−a
- Factorul este “pasul” dintre două valori consecutive din grilă: intervalul [a, b] de
- 2ℓ − 1
- lungime b − a se împarte în 2ℓ − 1 paşi egali (pentru 2ℓ puncte). Când v = 0 obţinem
- x = a (extrema stângă); când v = 2ℓ − 1 obţinem x = b (extrema dreaptă).

### Pagina 3: Codificarea (valoare reală → cromozom binar) se face invers:

- 2ℓ − 1
-  
- v = round (x − a) · ,
- b−a
- după care v se exprimă în binar pe ℓ biţi.
- 5. Selecţia
- Metodă Descriere
- pi = f (Xi )/ j f (Xj ); fiecare individ este ales cu
- P
- Proporţională (ru-
- letă) probabilitate proporţională cu fitness-ul.
- Elitistă Cel mai bun individ trece direct în generaţia ur-
- mătoare.
- Turneu Se aleg aleatoriu k indivizi; cel mai bun dintre ei
- este selectat.
- Bazată pe rang Probabilităţile depind de rangul (poziţia în clasa-
- ment), nu de valoarea absolută a fitness-ului.
- Metoda ruletei — implementare: se calculează probabilităţile cumulative qj =
- p1 + · · · + pj , se generează u ∼ U [0, 1) şi se selectează Xj cu qj−1 ≤ u < qj .
- 6. Încrucis, area
- Tip Descriere
- Un punct de tăiere Se alege k ∈ {1, . . . , ℓ − 1}; D1 ia primele k gene
- din A şi restul din B; D2 invers.
- Două puncte Se aleg k1 < k2 ; segmentele se alternează între
- părinţi.
- Uniformă Fiecare genă a lui D1 se alege din A cu prob. 1/2,
- din B cu prob. 1/2; D2 ia genele complementare.
- 7. Mutaţia
- Variantă Descriere
- Rară (per cromo- Cu prob. pm , cromozomul suferă o mutaţie la o
- zom) poziţie aleatorie k: gk ← 1 − gk .
- Per genă Fiecare genă gj este complementată independent
- cu prob. pm . E(mutaţii per cromozom) = ℓ · pm .

### Pagina 4: Regulă practică: pc ∈ [0,6, 0,9], pm ∈ [0,001, 0,1] (sau 1/ℓ).

- 8. Parametrii algoritmului şi influenţa lor
- Parametru Efect
- n mare Diversitate mai mare, convergenţă mai lentă,
- cost/generaţie mai mare.
- pc mic Puţină încrucis, are; GA se comportă ca n mutaţii paralele.
- pm mare Diversitate mare, dar informaţia acumulată se pierde; că-
- utare aleatoare.
- pm mic Risc de convergenţă prematură către un optim local.
- Elitism activ Monotonie garantată a celui mai bun fitness; risc de con-
- vergenţă prematură.
- Codificare şi decodificare
- Exerciţiul 1 — Lungimea cromozomului
- Fie domeniul de căutare D = [1, 3] şi precizia p = 4 zecimale.
- a) Calculaţi numărul de subintervale necesare pentru discretizarea lui D.
- b) Determinaţi lungimea minimă ℓ a unui cromozom binar care să asigure
- precizia cerută.
- c) Câte poziţii distincte sunt efectiv codificate cu ℓ biţi? Este rezoluţia efectivă
- mai bună sau mai slabă decât cea cerută?
- Exerciţiul 2 — Decodificarea unui cromozom
- Fie domeniul D = [0, 1], precizia p = 2 zecimale şi cromozomul binar c =
- (1, 0, 1, 1, 0, 0, 1).
- a) Verificaţi că lungimea ℓ = 7 este suficientă pentru precizia p = 2.
- b) Calculaţi valoarea întreagă v a cromozomului.
- c) Decodificaţi c la o valoare reală x ∈ [0, 1] prin translaţie liniară.

### Pagina 5: Exerciţiul 3 — Codificarea unui număr real

- Fie D = [−2, 2], p = 3 zecimale.
- a) Determinaţi ℓ.
- b) Codificaţi valoarea x = 0,5 ca un cromozom binar. (Indiciu: calculaţi mai
- întâi v, apoi converitiţi în binar.)
- c) Ce valoare reală se obţine prin decodificarea cromozomului
- (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1)?
- Selecţia
- Exerciţiul 4 — Selecţia proporţională
- O populaţie are n = 5 indivizi cu următoarele valori de fitness:
- f (X1 ) = 2,0, f (X2 ) = 5,0, f (X3 ) = 1,5, f (X4 ) = 3,5, f (X5 ) = 3,0.
- a) Calculaţi probabilităţile de selecţie pi pentru fiecare individ.
- b) Calculaţi probabilităţile cumulative qi .
- c) Presupunând că se generează n = 5 numere aleatoare u =
- (0,14, 0,62, 0,31, 0,88, 0,05), determinaţi ce indivizi sunt selectaţi (metoda
- ruletei).
- d) Câte copii ale fiecărui individ apar în populaţia selectată? Comentati re-
- zultatul în raport cu fitness-ul.
- Exerciţiul 5 — Selecţie turneu
- Fie aceiaşi n = 5 indivizi din exerciţiul anterior. Simulaţi selecţia turneu cu k = 2
- pentru obţinerea a 5 indivizi, folosind următoarele perechi aleatoare: (X3 , X5 ),
- (X1 , X2 ), (X4 , X3 ), (X2 , X5 ), (X1 , X4 ). Comparaţi rezultatul cu selecţia propor-
- ţională.
- Încrucis, area
- Exerciţiul 6 — Încrucis, are cu un punct
- Fie doi cromozomi de lungime ℓ = 8:
- A = (1, 1, 0, 0, 1, 0, 1, 1), B = (0, 1, 1, 1, 0, 0, 0, 1).

### Pagina 6: a) Aplicaţi încrucis, area cu punct de tăiere k = 3. Scrieţi descendenţii D1 şi

- D2 .
- b) Aplicaţi încrucis, area cu două puncte de tăiere k1 = 2, k2 = 6. Scrieţi
- descendenţii.
- c) Aplicaţi încrucis, area uniformă cu masca M = (1, 0, 1, 1, 0, 1, 0, 1) (1 = ia
- din A, 0 = ia din B). Scrieţi descendenţii.
- Mutaţia
- Exerciţiul 7 — Mutaţie per genă
- Fie cromozomul X = (1, 0, 0, 1, 1, 0, 1, 0) de lungime ℓ = 8 şi probabilitatea de
- mutaţie pm = 0,1.
- a) Presupunând că se generează valorile u =
- (0,03, 0,72, 0,15, 0,91, 0,08, 0,44, 0,02, 0,67) (câte una per genă), aplicaţi
- Varianta 2 a mutaţiei. Scrieţi cromozomul rezultat.
- b) Care este numărul aşteptat de mutaţii per cromozom pentru pm = 1/ℓ?
- c) Dacă pm este prea mare, ce efect negativ poate apărea? Dacă pm este prea
- mică?
- Exerciţii integratoare
- Exerciţiul 8 — O generaţie completă
- Fie problema de maximizare a funcţiei f (x) = x2 pe D = [0, 31] cu codificare pe
- ℓ = 5 biţi (deci 25 = 32 valori, x = v direct).
- Populaţia iniţială:
- Individ Cromozom Fitness f (x) = x2
- X1 (0, 1, 1, 0, 1) ?
- X2 (1, 1, 0, 0, 0) ?
- X3 (0, 1, 0, 0, 0) ?
- X4 (1, 0, 0, 1, 1) ?
- a) Calculaţi fitness-ul fiecărui individ.
- b) Calculaţi probabilităţile de selecţie şi probabilităţile cumulative.
- c) Folosind numerele aleatoare u = (0,40, 0,81, 0,18, 0,63), determinaţi po-
- pulaţia selectată P1 .

### Pagina 7: cu punctele de tăiere k = 3 şi k = 2.

- d) Aplicaţi încrucis, area cu un punct între perechile (X1sel , X2sel ) şi (X3sel , X4sel ),
- cu punctele de tăiere k = 3 şi k = 2.
- e) Aplicaţi mutaţia rară cu pm = 0,1: individul D3 muted la poziţia k = 4.
- Scrieţi populaţia finală P (1).
- f) Calculaţi fitness-ul mediu al lui P (0) şi al lui P (1). S-a îmbunătăţit popu-
- laţia?
- Exerciţiul 9 — Convergenţă şi diversitate
- Răspundeţi la următoarele întrebări teoretice:
- a) Ce este convergenţa prematură într-un algoritm genetic şi ce o cauzează?
- b) Cum contribuie elitismul la performanţa algoritmului? Ce risc introduce?
- c) Explicaţi de ce un algoritm genetic cu pc = 0 (fără încrucis, are) şi pm mic
- se comportă similar cu un algoritm de căutare locală.
- d) Propuneţi o strategie de adaptare dinamică a lui pm pe parcursul evoluţiei.
- Exerciţiul 10 — Aplicare la Problema Rucsacului (Knapsack)
- Fie problema rucsacului 0/1 cu n = 6 obiecte şi capacitate W = 10:
- Obiect i Valoare vi Greutate wi
- 1 6 2
- 2 5 3
- 3 8 4
- 4 4 2
- 5 7 5
- 6 3 1
- a) Propuneţi o codificare binară naturală pentru soluţiile acestei probleme
- (lungimea cromozomului, semnificaţia fiecărei gene).
- b) Definiţi o funcţie de fitness potrivită (care să trateze şi soluţiile infezabile,
- adică cele care depăşesc capacitatea).
- c) Evaluaţi fitness-ul cromozomilor c1 = (1, 1, 0, 1, 0, 1) şi c2 = (1, 1, 1, 0, 1, 0).
- d) Aplicaţi încrucis, area cu punct k = 3 între c1 şi c2 şi evaluaţi descendenţii.

### Pagina 8: Probleme suplimentare

- Problemă suplimentară
- (Provocare) Aplicaţi un algoritm genetic pentru rezolvarea problemei de acope-
- rire a vârfurilor (VCP) pe un graf cu 10 vârfuri. Codificaţi soluţiile ca şiruri
- binare de lungime 10, definiţi o funcţie de fitness adecvată şi comparaţi soluţia
- GA cu cea a algoritmului ApproxVertexCover din Capitolul 4.

### Pagina 9: Soluţii

- Soluţie Exerciţiul 1 — Lungimea cromozomului
- a) Număr de subintervale: (b − a) · 10p = (3 − 1) · 104 = 20 000.
- b) Lungimea cromozomului: ℓ = ⌈log2 (20 000)⌉ = ⌈14,29⌉ = 15 biţi.
- c) Poziţii distincte: 215 = 32 768 > 20 000. Rezoluţia efectivă este 2/(215 −
- 1) ≈ 6,1 · 10−5 , mai fină decât 10−4 . ✓
- Soluţie Exerciţiul 2 — Decodificarea unui cromozom
- a) (b − a) · 10p = 1 · 100 = 100 subintervale; ⌈log2 (100)⌉ = 7. ✓
- b) v = 1 · 64 + 0 · 32 + 1 · 16 + 1 · 8 + 0 · 4 + 0 · 2 + 1 · 1 = 89.
- 1−0 89
- c) x = 0 + 89 · 7
- = ≈ 0,7008.
- 2 −1 127
- Soluţie Exerciţiul 3 — Codificarea unui număr real
- a) (4) · 103 = 4000; ℓ = ⌈log2 (4000)⌉ = ⌈11,97⌉ = 12 biţi.
-  ℓ −1
- 
- b) v = round (x − a) · 2b−a = (0,5 − (−2)) · 4095
- = 2,5 · 1023,75 ≈ 2559. În
- binar pe 12 biţi: 2559 = (1001 1111 1111)2 .
- c) v = 1; x = −2 + 1 · 4095
- ≈ −1,9990.
- Soluţie Exerciţiul 4 — Selecţia proporţională
- a) Suma: fi = 15. Probabilităţi: p1 = 0,133, p2 = 0,333, p3 = 0,100,
- P
- p4 = 0,233, p5 = 0,200.
- b) Cumulative: q0 = 0, q1 = 0,133, q2 = 0,467, q3 = 0,567, q4 = 0,800,
- q5 = 1,000.
- c) Selecţii:
- u = 0,14 ∈ [0,133, 0,467) ⇒ X2
- u = 0,62 ∈ [0,567, 0,800) ⇒ X4
- u = 0,31 ∈ [0,133, 0,467) ⇒ X2
- u = 0,88 ∈ [0,800, 1,000) ⇒ X5
- u = 0,05 ∈ [0,000, 0,133) ⇒ X1
- Populaţia selectată: {X2 , X4 , X2 , X5 , X1 }.
- d) X2 apare de 2 ori (cel mai bun fitness), X3 deloc (cel mai slab). Selecţia
- favorizează indivizii performanţi şi elimină pe cei slabi.

### Pagina 10: Soluţie Exerciţiul 5 — Selecţie turneu

- Câştigători după turneu:
- (X3 , X5 ): f (X5 ) = 3,0 > f (X3 ) = 1,5 ⇒ X5
- (X1 , X2 ): f (X2 ) = 5,0 > f (X1 ) = 2,0 ⇒ X2
- (X4 , X3 ): f (X4 ) = 3,5 > f (X3 ) = 1,5 ⇒ X4
- (X2 , X5 ): f (X2 ) = 5,0 > f (X5 ) = 3,0 ⇒ X2
- (X1 , X4 ): f (X4 ) = 3,5 > f (X1 ) = 2,0 ⇒ X4
- Populaţie: {X5 , X2 , X4 , X2 , X4 }. Turneul favorizează puternic X2 şi X4 ; X1 şi
- X3 nu apar deloc — presiune de selecţie mai mare decât ruleta în acest caz.
- Soluţie Exerciţiul 6 — Încrucis, are cu un punct
- a) k = 3: D1 = (1, 1, 0 | 1, 0, 0, 0, 1), D2 = (0, 1, 1 | 0, 1, 0, 1, 1).
- b) k1 = 2, k2 = 6: D1 = (1, 1 | 1, 1, 0, 0 | 1, 1), D2 = (0, 1 | 0, 0, 1, 0 | 0, 1).
- c) Maskă (1, 0, 1, 1, 0, 1, 0, 1): D1 = (1, 1, 0, 0, 0, 0, 0, 1) (gene cu masă 1 din A,
- restul din B). D2 = (0, 1, 1, 1, 1, 0, 1, 1) (invers).
- Soluţie Exerciţiul 7 — Mutaţie per genă
- a) Gene mutate (u < 0,1): poziţiile 1, 3, 5, 7 (u = 0,03, 0,15, 0,08, 0,02).
- Cromozom iniţial: (1, 0, 0, 1, 1, 0, 1, 0). Rezultat: (0, 0, 1, 1, 0, 0, 0, 0).
- b) E[mutaţii] = ℓ · pm = ℓ · (1/ℓ) = 1.
- c) pm prea mare: algoritmul degenerează într-o căutare aleatoare, pierzând
- informaţia acumulată. pm prea mică: diversitate insuficientă, convergenţă
- prematură către un optim local.
- Soluţie Exerciţiul 8 — O generaţie completă
- a) Valorile şi fitness-urile:
- X1 = (01101)2 = 13; f = 169
- X2 = (11000)2 = 24; f = 576
- X3 = (01000)2 = 8; f = 64
- X4 = (10011)2 = 19; f = 361
- Fitness total: 169 + 576 + 64 + 361 = 1170.
- b) p1 = 0,144, p2 = 0,492, p3 = 0,055, p4 = 0,309. q1 = 0,144, q2 = 0,636,
- 10

### Pagina 11: q3 = 0,691, q4 = 1,000.

- c) Selecţii: 0,40 ∈ [0,144, 0,636) ⇒ X2 ; 0,81 ∈ [0,691, 1,000) ⇒ X4 ; 0,18 ∈
- [0,144, 0,636) ⇒ X2 ; 0,63 ∈ [0,144, 0,636) ⇒ X2 . P1 = {X2 , X4 , X2 , X2 } cu
- cromozomii (11000), (10011), (11000), (11000).
- d) Încrucis, are k = 3 între (11000) şi (10011): D1 = (110 11), D2 = (100 00).
- Încrucis, are k = 2 între (11000) şi (11000): D3 = (11 000), D4 = (11 000)
- (identice cu părinţii).
- e) Mutaţie D3 la poziţia 4: (11000) → (11010). P (1) =
- {(11011), (10000), (11010), (11000)}.
- f) Fitness-uri P (1): 272 = 729, 162 = 256, 262 = 676, 242 = 576. Media
- P (1) = (729 + 256 + 676 + 576)/4 = 559,25. Media P (0) = 1170/4 = 292,5.
- Fitness mediu aproape dublu — populaţia s-a îmbunătăţit semnificativ
- într-o singură generaţie.
- Soluţie Exerciţiul 9 — Convergenţă şi diversitate
- a) Convergenţa prematură apare când populaţia pierde diversitatea înainte
- de a găsi optimul global — toţi indivizii devin similari şi sunt capturaţi de
- un optim local. Cauze: presiune de selecţie prea mare (ex. pc mic, k mare
- la turneu), populaţie mică, pm prea mică.
- b) Elitismul garantează monotonia îmbunătăţirii: cel mai bun individ nu se
- pierde. Riscul: favorizează convergenţa prematură, mai ales dacă numărul
- elitiştilor este mare.
- c) Fără încrucis, are, fiecare individ evoluează independent prin mutaţii mici;
- aceasta este echivalent cu n căutări locale paralele. Nu există combinare
- de informaţie între indivizi — principalul avantaj al GA-ului este eliminat.
- d) Strategie posibilă: adaptive mutation — scadem pm când fitness-ul mediu
- creşte rapid (explorare eficientă), creştem pm când stagneză (nevoie de
- diversificare). Alternativ: self-adaptive GA — pm este el însuşi codificat în
- cromozom şi evoluează odată cu populaţia.
- Soluţie Exerciţiul 10 — Aplicare la Problema Rucsacului (Knapsack)
- a) Cromozom de lungime ℓ = 6: gena i este 1 dacă obiectul i este inclus în
- rucsac, 0 altfel.
- 11

### Pagina 12: b) O funcţie de fitness cu penalizare:

- 
- P dacă
- P
- i:gi =1 vi i:gi =1 wi ≤ W,
- f (c) =
- 0 altfel (soluţie infezabilă).
- Alternativ: penalizare proporţională cu depăşirea.
- c) c1 = (1, 1, 0, 1, 0, 1): obiecte {1, 2, 4, 6}, greutate 2 + 3 + 2 + 1 = 8 ≤ 10 ✓,
- valoare 6 + 5 + 4 + 3 = 18; f (c1 ) = 18.
- c2 = (1, 1, 1, 0, 1, 0): obiecte {1, 2, 3, 5}, greutate 2 + 3 + 4 + 5 = 14 > 10
- — infezabil; f (c2 ) = 0.
- d) Încrucis, are k = 3: D1 = (1, 1, 1 | 0, 1, 0): obiecte {1, 2, 3, 5}, greutate 14 >
- 10 — infezabil, f = 0. D2 = (1, 1, 0 | 1, 0, 1) = c1 : f = 18. Observaţie:
- încrucis, area nu a produs îmbunătăţire în acest caz.
- 12

### Pagina 13: Pagina 13

_Nu s-a putut extrage text util din această pagină._
