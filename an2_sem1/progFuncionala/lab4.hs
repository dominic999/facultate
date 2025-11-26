
-- ex 2

factori :: Int -> [Int]
factori n = [x | x <- [1..n], n mod x == 0]

-- ex 3 

prim :: Int -> Bool
prim n 
    | length(factori n) == 2     = True 
    | otherwise                 = False 

-- ex 4

numerePrime :: Int -> [Int]
numerePrime n = [x | x <- [2..n], prim x]

-- ex 5 

myzip3 :: [a] -> [b] -> [c] -> [(a,b,c)]
myzip3 (x:xs) (y:ys) (z:zs) = (x,y,z) : myzip3 xs ys zs
myzip3 _ _ _ = []

-- ex 6

firstEl :: [(a,b)] -> [a]
firstEl = map fst

-- ex 7

sumList :: [[Int]] -> [Int] 
sumList = map sum

-- ex 8 

prel :: Int -> Int 
prel x
    | even x    = x div 2 
    | otherwise = x * 2
prel2 :: [Int] -> [Int]
prel2 = map prel

-- ex 9

contine :: Char -> String -> Bool 
contine caracter sir
    | elem caracter sir     = True 
    | otherwise             = False

contin :: Char -> [String] -> [String] 
contin caracter = filter (contine caracter)

-- ex 10

listaPatrateImpare :: [Int] -> [Int] 
listaPatrateImpare lista = map (^2) (filter odd lista)

-- ex 11

listaPatratePozImpare :: [Int] -> [Int] 
listaPatratePozImpare lista = 
   map (^2) (map fst (filter (\(_, p) -> odd p) (zip lista [1..])))

-- ex 12

eliminaConsoane :: String -> String 
eliminaConsoane [] = []
eliminaConsoane (lit : rest)
    | not (elem lit "AEIOUaeiou")     = eliminaConsoane rest 
    | otherwise                 = lit : eliminaConsoane rest 

numaiVocale :: [String] -> [String]
numaiVocale = map eliminaConsoane

-- ex 13

mymap :: (a -> b) -> [a] -> [b]
mymap f [] = []
mymap f (el : rest) = f el : mymap f rest

myFilter :: (a -> Bool) -> [a] -> [a]
myFilter f [] = []
myFilter f (el : rest)
    | f el      = el : myFilter f rest 
    | otherwise = myFilter f rest
