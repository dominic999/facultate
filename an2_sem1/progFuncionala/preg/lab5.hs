ex1 :: [Int] -> Int
ex1 x = 
  foldr (+) 0 (filter odd x) 

ex2 :: [Bool] -> Bool
ex2 x = foldr (&&) True x

factori :: Int -> [Int]
factori x = 
  [y | y <- [1..x], mod x y == 0]

prim :: Int -> Bool
prim x 
  | (length (factori x) == 2) = True
  | otherwise = False

allVerifies :: (Int -> Bool) -> [Int] -> Bool
allVerifies f x =
  foldr (&&) True (map f x)

anyVerifies :: (Int -> Bool) -> [Int] -> Bool
anyVerifies f x =
  foldr (||) False (map f x)


mapFoldr :: [a] -> (a -> b) -> [b]
mapFoldr x f =
  foldr (\y acc-> f y : acc) [] x

filterFoldr :: [a] -> (a -> Bool) -> [a]
filterFoldr x f = 
  foldr (\y acc -> if f y then y : acc else acc) [] x 
    

listToInt :: [Integer]-> Integer
listToInt x =
  foldl (\acc y -> acc*10 + y) 0 x

rmChar :: Char -> String -> String
rmChar c l =  
  foldl (\acc y -> if y == c then acc else acc ++ [y]) "" l

rmCharsRec :: String -> String -> String
rmCharsRec [] str = str
rmCharsRec (x:xs) str2 = 
  rmCharsRec xs (rmChar x str2)
  

rmCharsFold :: String -> String -> String
rmCharsFold str1 str2 =
  foldr rmChar str2 str1 
    
myReverse :: [Int] -> [Int]
myReverse x = 
  foldr (\y acc -> y:acc) [] x

myUnzip :: [(a, b)] -> ([a], [b])
myUnzip x =
  foldl (\acc y -> (fst y : fst acc, snd y : snd acc)) ([], []) x

union :: [Int] -> [Int] -> [Int]
union a b =
  foldl (\acc y -> if y `elem` acc then acc else y:acc) [] (a++b)

intersect :: [Int] -> [Int] -> [Int]
intersect a b =
  foldl (\acc y -> if (y `elem` a &&  y `elem` b && not (y `elem` acc)) then y:acc else acc) [] (a++b)


-- [1,2,3] -> [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]
insertEverywhere :: Int -> [Int] -> [[Int]]
insertEverywhere x l =
  [ take i l ++ [x] ++ drop i l | i <- [0 .. length l] ]

permutations :: [Int] -> [[Int]] 
permutations a =
  foldl (\acc y -> concat (map (\x -> insertEverywhere y x) acc)) [[]] a
    
