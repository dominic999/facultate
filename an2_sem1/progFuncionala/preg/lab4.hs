{-
[x^2 |x <- [1..10], x `rem` 3 == 2]
[(x,y) | x <- [1..5], y <- [x..(x+2)]]
[(x,y) | x <- [1..3], let k = x^2, y <- [1..k]]
[x | x <- "Facultatea de Matematica si Informatica", elem x ['A'..'Z']]
[[x..y] | x <- [1..5], y <- [1..5], x < y]
-}
factori :: Int -> [Int]
factori x = 
  [y | y <- [1..x], mod x y == 0]

prim :: Int -> Bool
prim x 
  | (length (factori x) == 2) = True
  | otherwise = False

numerePrime :: Int -> [Int]
numerePrime n =
  [y | y <- [1..n], prim y]

myZip3 :: [a] -> [b] -> [c] -> [(a,b,c)]
myZip3 (x:xs) (y:ys) (z:zs) = (x,y,z) : myZip3 xs ys zs
myZip3 _ _ _ = []

first :: (a,b) -> a
first (a,b) = a

second:: (a,b) -> b
second (a,b) = b

firstEl :: [(a,b)] -> [a]
firstEl x = 
  map (first) x
  
sumList :: [[Int]] -> [Int]
sumList x = 
  map (sum) x


ajutor :: Int -> Int
ajutor x 
  | (mod x 2 == 0) = div x 2
  | otherwise = x * 2
prel2 :: [Int] -> [Int]
prel2 x = 
  map (ajutor) x

ex9 :: Char -> [String] -> [String]
ex9 c l =
  filter (elem c) l

ex10 :: [Int] -> [Int]
ex10 x =
  map (^2) (filter (odd) x)

ex11 :: [Int] -> [Int]
ex11 x =
  map (\f -> (first f)^2) (filter (\f -> odd (second f)) (zip x [1..(length x)])) 

numaiVocale :: [String] -> [String]
numaiVocale s =
  map (\x -> filter (`elem` "aeiouAEIOU") x) s

myMap :: [a] -> (a->b) -> [b]
myMap [] _ = []
myMap (x:xs) f = f x : myMap xs f

myFilter :: [a] -> (a->Bool) -> [a]
myFilter [] _ = []
myFilter (x:xs) f 
  | (f x) = x : myFilter xs f
  | otherwise = myFilter xs f
  

ordonataNat :: [Int] -> Bool
ordonataNat [] = True
ordonataNat [x] = True
ordonataNat (x:xs) = undefined
ordonata :: [a] -> (a -> a -> Bool) -> Bool
ordonata = undefined
 
