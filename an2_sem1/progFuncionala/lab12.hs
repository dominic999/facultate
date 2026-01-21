{- 
class Functor f where 
     fmap :: (a -> b) -> f a -> f b 
class Functor f => Applicative f where
    pure :: a -> f a
    (<*>) :: f (a -> b) -> f a -> f b

Just length <*> Just "world"

Just (++" world") <*> Just "hello,"
pure (+) <*> Just 3 <*> Just 5
pure (+) <*> Just 3 <*> Nothing
(++) <$> ["ha","heh"] <*> ["?","!"]
-}
data List a = Nil | Cons a (List a) deriving (Eq, Show)

append :: List a -> List a -> List a
append Nil ys = ys
append (Cons x xs) ys = Cons x (append xs ys)

instance Functor List where
    fmap _ Nil = Nil
    fmap f (Cons x xs) = Cons (f x) (fmap f xs)

instance Applicative List where
    pure x = Cons x Nil
    Nil <*> _ = Nil
    (Cons f fs) <*> xs = append (fmap f xs) (fs <*> xs)

f = Cons (+1) (Cons (*2) Nil)
v = Cons 1 (Cons 2 Nil)
test1 = (f <*> v) == Cons 2 (Cons 3 (Cons 2 (Cons 4 Nil))) -- True

data Dog = Dog {
    name :: String
    , age :: Int
    , weight :: Int
    } deriving (Eq, Show)

noEmpty :: String -> Maybe String
noEmpty s
  | null s    = Nothing
  | otherwise = Just s

noNegative :: Int -> Maybe Int
noNegative n
  | n < 0     = Nothing
  | otherwise = Just n

test21 = noEmpty "abc" == Just "abc"
test22 = noNegative (-5) == Nothing 
test23 = noNegative 5 == Just 5 

dogFromString :: String -> Int -> Int -> Maybe Dog
dogFromString s a w = Dog <$> noEmpty s <*> noNegative a <*> noNegative w

test24 = dogFromString "Toto" 5 11 == Just (Dog {name = "Toto", age = 5, weight = 11})

newtype Name = Name String deriving (Eq, Show)
newtype Address = Address String deriving (Eq, Show)

data Person = Person Name Address
    deriving (Eq, Show)

validateLength :: Int -> String -> Maybe String
validateLength n s
    | length s > n = Nothing
    | otherwise    = Just s

test31 = validateLength 5 "abc" == Just "abc"
mkName :: String -> Maybe Name
mkName s = fmap Name (validateLength 25 s)

mkAddress :: String -> Maybe Address
mkAddress s = fmap Address (validateLength 100 s)

test32 = mkName "Popescu" ==  Just (Name "Popescu")
test33 = mkAddress "Str Academiei" ==  Just (Address "Str Academiei")

mkPerson :: String -> String -> Maybe Person
mkPerson s a = Person <$> mkName s <*> mkAddress a

test34 = mkPerson "Popescu" "Str Academiei" == Just (Person (Name "Popescu") (Address "Str Academiei"))
