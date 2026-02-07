import Data.List
myInt = 31415926535897932384626433832795028841971693993751058209749445923

double :: Integer -> Integer
double x = x+x

maxim :: Integer -> Integer -> Integer
maxim x y = 
  if (x > y)
    then x
    else y

-- max3 x y z = 
--   let u = maxim x y in (maxim  u z)

max3 :: Integer -> Integer -> Integer -> Integer 
max3 x y z 
  | (x>maxim y z) = x
  | (y > maxim x z) = y
  | otherwise = z

max4 :: Integer -> Integer -> Integer -> Integer -> Integer
max4 x y z w = 
  let u = max3 x y z in max u w

patrat :: Integer -> Integer -> Integer
patrat x y = 
  x^2 + y^2

par :: Integer -> String
par x =
  if (x`mod`2 == 0)
    then "par" 
  else "impar" 

factorial :: Integer -> Integer
factorial 0 = 1
factorial x = x * factorial (x-1)

elMax :: [Integer] -> Integer
elMax [] = 0
elMax (x:xs)
  | (x > elMax xs) = x
  | otherwise = elMax xs

-- eeny :: Integer -> String
-- eeny = undefined
--
fizzbuzz :: Integer -> String
fizzbuzz x 
  | (mod x 3 == 0 && mod x 5 == 0) = "FizzBuzz"
  | (mod x 3 == 0) = "Fizz"
  | (mod x 5 == 0) = "Buzz"
  | otherwise = ""
--
-- fibonacciCazuri :: Integer -> Integer
-- fibonacciCazuri n
--     | n < 2     = n
--     | otherwise = fibonacciCazuri (n - 1) + fibonacciCazuri (n - 2)
--
-- fibonacciEcuational :: Integer -> Integer
-- fibonacciEcuational 0 = 0
-- fibonacciEcuational 1 = 1
-- fibonacciEcuational n =
--     fibonacciEcuational (n - 1) + fibonacciEcuational (n - 2)
--
-- tribonacci :: Integer -> Integer
-- tribonacci = undefined
--
binomial :: Integer -> Integer -> Integer
binomial n k 
  | (k == 0) = 1
  | (n == 0) = 0
  | otherwise = binomial (n-1) k + binomial (n-1) (k-1)
--
--
