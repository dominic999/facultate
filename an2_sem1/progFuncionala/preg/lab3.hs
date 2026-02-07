verifL :: [Integer] -> Bool
verifL [] = True
verifL (x:xs) = not (verifL xs)

takefinal :: [Int] -> Int -> [Int]
takefinal a 0 = []
takefinal (x:xs) l 
  | (length (x:xs) <= l) = (x:xs)
  | otherwise = takefinal xs l

remove :: [Int] -> Int -> [Int]
remove x n = 
  take (n-1) x ++ drop n x


-- semiPareRec [0,2,1,7,8,56,17,18] == [0,1,4,28,9]
semiPareRec :: [Int] -> [Int]
semiPareRec [] = []
semiPareRec (h:t)
 | even h    = h `div` 2 : t'
 | otherwise = t'
 where t' = semiPareRec t

myRep :: Int -> p -> [p]
myRep 0 _ = []
myRep n v = v : myRep (n-1) v

sumImp :: [Int] -> Int
sumImp [] = 0
sumImp (x:xs) 
  | (mod x 2 == 1) = x + sumImp xs 
  | otherwise = 0 + sumImp xs
 
totalLen :: [String] -> Int
totalLen [] = 0
totalLen (x:xs) 
  | (head x == 'A') = length x + totalLen xs
  | otherwise = totalLen xs



vocaleCuvant :: String -> Int
vocaleCuvant [] = 0
vocaleCuvant (x:xs) 
  | (elem x "aeiou") = 1 + vocaleCuvant xs
  | otherwise = vocaleCuvant xs

nrVocale :: [String] -> Int
nrVocale [] = 0 
nrVocale (x:xs) 
  | (x == reverse x) = vocaleCuvant x + nrVocale xs
  | otherwise = nrVocale xs

-- nrVocale ["sos", "civic", "palton", "desen", "aerisirea"] == 9

-- f 3 [1,2,3,4,5,6] = [1,2,3,3,4,3,5,6,3]

semiPareComp :: [Int] -> [Int]
semiPareComp l = [ x `div` 2 | x <- l, even x ]

-- divizori 4 == [1,2,4]
divizori :: Int -> [Int]
divizori x = [y | y <- [1..x], mod x y == 0]

listadiv :: [Int] -> [[Int]]
listadiv [] = []
listadiv (x:xs) = divizori x : listadiv xs 
  -- listadiv [1,4,6,8] == [[1],[1,2,4],[1,2,3,6],[1,2,4,8]]

-- inInterval 5 10 [1..15] == [5,6,7,8,9,10]
-- inInterval 5 10 [1,3,5,2,8,-1] == [5,8]
-- inInterval :: Int -> Int -> [Int] -> [Int]
-- inInterval a b [] = []
-- inInterval a b (x:xs)
--   | (x >= a && x <=b) = x : inInterval a b xs
--   | otherwise = inInterval a b xs
inInterval :: Int -> Int -> [Int] -> [Int]
inInterval a b x = [y | y <- x, y>=a && y<=b]

-- pozitive [0,1,-3,-2,8,-1,6] == 3

pozitiiImpare :: [Int] -> [Int]
pozitiiImpare x = [b | (a,b) <- zip x [0..length x], mod a 2 ==1 ]

pozitiiImpareRec :: [Int] -> Int -> [Int]
pozitiiImpareRec [] _ = []
pozitiiImpareRec (x:xs) y 
  | (mod x 2 == 1) = y : pozitiiImpareRec xs (y+1)
  | otherwise = pozitiiImpareRec xs (y+1)
-- pozitiiImpare [0,1,-3,-2,8,-1,6,1] == [1,2,5,7]

-- multDigits "No digits here!" == 1
multDigits :: String -> Int 
multDigits [] = 1
-- multDigits (x:xs) 
--   | (elem x "0123456789") = (fromEnum x - fromEnum '0') * multDigits xs
--   | otherwise = multDigits xs

multDigits x = 
  product [fromEnum y - fromEnum '0' | y <- x, elem y "1234567890"]
test1 = multDigits "The time is 4:25" 
test2 = multDigits "The time is 4:20" 
test3 = multDigits "The time is 9:21" 
