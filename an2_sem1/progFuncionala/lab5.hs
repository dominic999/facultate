--1

sumaPatrateImpare :: [Int] -> Int 
sumaPatrateImpare xs = foldr (+) 0 (listaPatrateImpare xs) 

listaPatrateImpare :: [Int] -> [Int] 
listaPatrateImpare xs = map (^2) (listaImpare xs) 

listaImpare :: [Int] -> [Int] 
listaImpare xs = filter odd xs 

sumPatrImpare :: [Int] -> Int
sumPatrImpare xs = foldr (+) 0 $ map (^2) $ filter odd xs

-- 2

areAllTrue :: [Bool] -> Bool 
areAllTrue xs = foldr (&&) True xs

-- 3

allVerifies :: (Int -> Bool) -> [Int] -> Bool
allVerifies prop xs = foldr (&&) True (map prop xs)

-- 4 

anyVerifies :: (Int -> Bool) -> [Int] -> Bool
anyVerifies prop xs = foldr (||) False (map prop xs)

-- 5 
mapFoldr :: (a -> b) -> [a] -> [b]
mapFoldr f = foldr ((:) . f) []

filterFoldr :: (a -> Bool) -> [a] -> [a]
filterFoldr f = foldr (\x prevElems -> if f x then x : prevElems else prevElems) []

-- 6 

listToInt :: [Integer] -> Integer
listToInt = foldl step 0
    where
        step acc x = acc * 10 + x
 
-- 7 a)

rmChar :: Char -> String -> String
-- rmChar c = filter (/= c)
rmChar c = foldr (\x acc -> if x == c then acc else x : acc) []

-- 7 b) 

rmCharsRec :: String -> String -> String
rmCharsRec []     text = text
rmCharsRec (c:cs) text = rmCharsRec cs (rmChar c text)

-- 7 c)

rmCharsFold :: String -> String -> String
rmCharsFold chars text = foldr rmChar text chars

-- 8

myReverse :: [Int] -> [Int]
myReverse = foldl (flip (:)) []

-- 9

myElem :: Int -> [Int] -> Bool
myElem x = foldr (\y acc -> (y == x) || acc) False

-- 10

myUnzip :: [(a, b)] -> ([a], [b])
myUnzip = foldr (\(x, y) (xs, ys) -> (x:xs, y:ys)) ([], [])

