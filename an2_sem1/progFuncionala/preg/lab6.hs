data Fruct
  = Mar String Bool
  | Portocala String Int

ionatanFaraVierme = Mar "Ionatan" False
goldenCuVierme = Mar "Golden Delicious" True
portocalaSicilia10 = Portocala "Sanguinello" 10
listaFructe = [Mar "Ionatan" False,
                Portocala "Sanguinello" 10,
                Portocala "Valencia" 22,
                Mar "Golden Delicious" True,
                Portocala "Sanguinello" 15,
                Portocala "Moro" 12,
                Portocala "Tarocco" 3,
                Portocala "Moro" 12,
                Portocala "Valencia" 2,
                Mar "Golden Delicious" False,
                Mar "Golden" False,
                Mar "Golden" True]

ePortocalaDeSicilia :: Fruct -> Bool
ePortocalaDeSicilia (Mar _ _) = False 
ePortocalaDeSicilia (Portocala tip _) = (tip `elem` ["Tarocco", "Moro" , "Sanguinello"])
  
test_ePortocalaDeSicilia1 =
    ePortocalaDeSicilia (Portocala "Moro" 12) == True
test_ePortocalaDeSicilia2 =
    ePortocalaDeSicilia (Mar "Ionatan" True) == False

--2
nrFeliiFruct :: Fruct -> Int
nrFeliiFruct (Mar _ _) = 0
nrFeliiFruct (Portocala tip nr) 
  | (elem tip ["Tarocco", "Moro" , "Sanguinello"]) = nr
  | otherwise = 0

nrFeliiSicilia :: [Fruct] -> Int
nrFeliiSicilia a =
  foldl (+) 0 (map nrFeliiFruct a)
  

test_nrFeliiSicilia = nrFeliiSicilia listaFructe == 52

--3
areViermi :: Fruct -> Bool
areViermi (Portocala _ _) = False
areViermi (Mar _ are) = are

nrMereViermi :: [Fruct] -> Int
nrMereViermi f = 
  length (filter areViermi f)

test_nrMereViermi = nrMereViermi listaFructe == 2


type NumeA = String
type Rasa = String
data Animal = Pisica NumeA | Caine NumeA Rasa
    deriving Show

--4
vorbeste :: Animal -> String
vorbeste (Pisica _ ) = "Meow"
vorbeste (Caine _ _) = "Woof"

rasa :: Animal -> Maybe String
rasa (Pisica _ ) = Nothing
rasa (Caine _ r) = Just r


--
data Linie = L [Int]
   deriving Show
data Matrice = M [Linie]
   deriving Show

--5
verifica :: Matrice -> Int -> Bool
verifica (M a) n= 
  foldl (\acc (L y) -> sum y == n) True a

test_verif1 = verifica (M[L[1,2,3], L[4,5], L[2,3,6,8], L[8,5,3]]) 10 == False
test_verif2 = verifica (M[L[2,20,3], L[4,21], L[2,3,6,8,6], L[8,5,3,9]]) 25 == True


--6
liniePozitiva :: Linie -> Bool
liniePozitiva (L l) =
  foldl (\acc y -> acc && y > 0) True l

doarPozN :: Matrice -> Int -> Bool
doarPozN (M m) n =
   foldl (\acc (L l) -> acc && (liniePozitiva (L l))) True (filter (\(L l) -> length l == n) m)

testPoz1 = doarPozN (M [L[1,2,3], L[4,5], L[2,3,6,8], L[8,5,3]]) 3 == True

testPoz2 = doarPozN (M [L[1,2,-3], L[4,5], L[2,3,6,8], L[8,5,3]]) 3 == False

--7
lungime :: Linie -> Int
lungime (L l)  = length l

corect :: Matrice -> Bool
corect (M m) = 
  foldl (\acc y -> acc && y == lungime (head m)) True (map lungime m) 


testcorect1 = corect (M[L[1,2,3], L[4,5], L[2,3,6,8], L[8,5,3]]) == False
testcorect2 = corect (M[L[1,2,3], L[4,5,8], L[3,6,8], L[8,5,3]]) == True
