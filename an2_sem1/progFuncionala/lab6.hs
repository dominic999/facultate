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

-- ex 1
-- a)
ePortocalaDeSicilia :: Fruct -> Bool

ePortocalaDeSicilia (Portocala soi _) =
    elem soi ["Tarocco","Moro","Sanguinello"]

ePortocalaDeSicilia _ = False 

test_ePortocalaDeSicilia1 =
    ePortocalaDeSicilia (Portocala "Moro" 12) == True
test_ePortocalaDeSicilia2 =
    ePortocalaDeSicilia (Mar "Ionatan" True) == False

-- b)
nrFeliiSicilia :: [Fruct] -> Int

nrFeliiSicilia [] = 0
nrFeliiSicilia (x:xs)
  | ePortocalaDeSicilia x = getFelii x + nrFeliiSicilia xs
  | otherwise             = nrFeliiSicilia xs
  where
    getFelii (Portocala _ f) = f 
    getFelii _ = 0 


test_nrFeliiSicilia = nrFeliiSicilia listaFructe == 52

-- c)
nrMereViermi :: [Fruct] -> Int

nrMereViermi [] = 0
nrMereViermi (Mar _ True : xs) = 1 + nrMereViermi xs
nrMereViermi (_ : xs) = nrMereViermi xs

test_nrMereViermi = nrMereViermi listaFructe == 2


-- ex 2

type NumeA = String
type Rasa = String
data Animal = Pisica NumeA | Caine NumeA Rasa
    deriving Show

-- a)

vorbeste :: Animal -> String
vorbeste (Pisica _)   = "Meow!"
vorbeste (Caine _ _)  = "Woof!"

-- b)

rasa :: Animal -> Maybe String
rasa (Pisica _)    = Nothing
rasa (Caine _ r)   = Just r

-- ex 3

data Linie = L [Int]
   deriving Show
data Matrice = M [Linie]
   deriving Show

-- a) 
verifica :: Matrice -> Int -> Bool
verifica (M linii) n =
  foldr (\(L xs) acc -> sum xs == n && acc) True linii

test_verif1 = verifica (M[L[1,2,3], L[4,5], L[2,3,6,8], L[8,5,3]]) 10 == False
test_verif2 = verifica (M[L[2,20,3], L[4,21], L[2,3,6,8,6], L[8,5,3,9]]) 25 == True

-- b)

doarPozN :: Matrice -> Int -> Bool
doarPozN (M linii) n = foldr (verifLinie n) True linii

verifLinie :: Int -> Linie -> Bool -> Bool
verifLinie n (L xs) acc
  | length xs == n = all (>0) xs && acc
  | otherwise      = acc


testPoz1 = doarPozN (M [L[1,2,3], L[4,5], L[2,3,6,8], L[8,5,3]]) 3 == True

testPoz2 = doarPozN (M [L[1,2,-3], L[4,5], L[2,3,6,8], L[8,5,3]]) 3 == False

-- c)

corect :: Matrice -> Bool
corect (M []) = True
corect (M (L xs : linii)) = foldr (verifLungime (length xs)) True linii

verifLungime :: Int -> Linie -> Bool -> Bool
verifLungime lenInit (L ys) acc = (length ys == lenInit) && acc


testcorect1 = corect (M[L[1,2,3], L[4,5], L[2,3,6,8], L[8,5,3]]) == False
testcorect2 = corect (M[L[1,2,3], L[4,5,8], L[3,6,8], L[8,5,3]]) == True
