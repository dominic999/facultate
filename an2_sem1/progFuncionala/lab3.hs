main :: IO () 

verifL :: [Int] -> Bool 
verifL a = length a `mod` 2 == 0

takefinal :: [Int] -> Int -> [Int]
takefinal l n = 
  if length l < n
    then l 
  else
    drop (length l - n) l

remove :: [Int] -> Int -> [Int]
remove l n =  take (n-1) l ++ drop n l

evenEl :: [Int] -> [Int]
evenEl [] = []
evenEl (h:t) 
  | even h = h `div` 2 : t'
  | otherwise = t'
  where t' = evenEl t
  

myreplicate :: Int -> Int -> [Int] -> [Int]
myreplicate a b l 
  | length l < a = myreplicate a b (b:l)
  | otherwise = l

sumImp :: [Int] -> Int -> Int
sumImp [] sum = sum
sumImp l sum
  | odd (last l) = sumImp (take ((length l) - 1) l) (sum + (last l))
  | otherwise = sumImp (take ((length l) - 1) l) sum

totalLen :: [String] -> Int
totalLen [] = 0
totalLen (x:xs)
| startsWithA x = length x + totalLen xs
| otherwise     = totalLen xs
where
  startsWithA ('A':_) = True
  startsWithA _ = Falsen

main = do
  -- print(verifL [1,2,3])
  -- print(takefinal [1,2,3] 4)
  -- print(remove [1,2,3,4,5] 3)
  -- print(evenEl [1,2,3,4,5,6])
  -- print(myreplicate 3 2 [])
  -- print(sumImp [1,3,2,5] 0)


