class Collection c where
  empty :: c key value
  singleton :: key -> value -> c key value
  insert
      :: Ord key
      => key -> value -> c key value -> c key value
  clookup :: Ord key => key -> c key value -> Maybe value
  delete :: Ord key => key -> c key value -> c key value
  toList :: c key value -> [(key, value)]

  keys :: c key value -> [key]
  keys = map fst . toList

  values :: c key value -> [value]
  values = map snd . toList

  fromList :: Ord key => [(key,value)] -> c key value
  fromList = foldr (\(k, v) acc -> insert k v acc) empty

-- ex 2

newtype PairList k v
  = PairList { getPairList :: [(k, v)] }

instance Collection PairList where
  empty = PairList []

  singleton k v = PairList [(k,v)]

  insert k v (PairList xs) =
    PairList ( (k,v) : filter (\(k1,_) -> k1 /= k) xs )

  clookup k (PairList xs) = lookup k xs

  delete k (PairList xs) = PairList (filter (\(k1,_) -> k1 /= k) xs)

  toList = getPairList

-- ex 3

data SearchTree key value
  = Empty
  | BNode
      (SearchTree key value) -- elemente cu cheia mai mica
      key                    -- cheia elementului
      (Maybe value)          -- valoarea elementului
      (SearchTree key value) -- elemente cu cheia mai mare


instance Collection SearchTree where
  empty = Empty

  singleton k v = BNode Empty k (Just v) Empty

  clookup _ Empty = Nothing
  clookup k (BNode l k0 v0 r)
    | k < k0    = clookup k l
    | k > k0    = clookup k r
    | otherwise = v0

  insert k v Empty = singleton k v
  insert k v (BNode l k0 v0 r)
    | k < k0    = BNode (insert k v l) k0 v0 r
    | k > k0    = BNode l k0 v0 (insert k v r)
    | otherwise = BNode l k0 (Just v) r

  delete k Empty = Empty
  delete k (BNode l k0 v0 r)
    | k < k0    = BNode (delete k l) k0 v0 r
    | k > k0    = BNode l k0 v0 (delete k r)
    | otherwise = BNode l k0 Nothing r

  toList Empty = []
  toList (BNode l k (Just v) r) = toList l ++ [(k,v)] ++ toList r
  toList (BNode l _ Nothing r) = toList l ++ toList r


-- ex 4
data Punct = Pt [Int]

instance Show Punct where
  show (Pt []) = "()"                                      
  show (Pt [x]) = "(" ++ show x ++ ")"                     
  show (Pt (x:xs)) = "(" ++ show x ++ rest xs ++ ")"      
    where
      rest [] = ""                                         
      rest [y] = ", " ++ show y
      rest (y:ys) = ", " ++ show y ++ rest ys


-- ex 5

data Arb = Vid | F Int | N Arb Arb
  deriving Show

class ToFromArb a where
  toArb :: a -> Arb
  fromArb :: Arb -> a

instance ToFromArb Punct where
  toArb (Pt []) = Vid
  toArb (Pt (x:xs)) = N (F x) (toArb (Pt xs))

  fromArb Vid = Pt []
  fromArb (F x) = Pt [x]
  fromArb (N a b) =
    let Pt la = fromArb a
        Pt lb = fromArb b
    in Pt (la ++ lb)

-- Pt [1,2,3]
-- (1, 2, 3)

-- Pt []
-- ()

-- toArb (Pt [1,2,3])
-- N (F 1) (N (F 2) (N (F 3) Vid))
-- fromArb $ N (F 1) (N (F 2) (N (F 3) Vid)) :: Punct
--  (1,2,3)

data Geo a = Square a | Rectangle a a | Circle a
    deriving Show

class GeoOps g where
  perimeter :: (Floating a) => g a -> a
  area :: (Floating a) =>  g a -> a

-- ghci> pi
-- 3.141592653589793





