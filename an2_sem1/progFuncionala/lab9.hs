-- 1

data Tree = Empty
  | Node Int Tree Tree Tree
  deriving (Show)

extree :: Tree
extree = Node 4 (Node 5 Empty Empty Empty) 
                (Node 3 Empty Empty (Node 1 Empty Empty Empty)) Empty

class ArbInfo t where
  level :: t -> Int -- intoarce inaltimea arborelui; 
                    -- consideram ca un arbore vid are inaltimea 0
  sumval :: t -> Int -- intoarce suma valorilor din arbore
  nrFrunze :: t -> Int -- intoarce nr de frunze al arborelui

instance ArbInfo Tree where
  level Empty = 0
  level (Node _ t1 t2 t3) = 1 + max (level t1) (max (level t2) (level t3))

  sumval Empty = 0
  sumval (Node v t1 t2 t3) = v + sumval t1 + sumval t2 + sumval t3

  nrFrunze Empty = 0
  nrFrunze (Node _ Empty Empty Empty) = 1 
  nrFrunze (Node _ t1 t2 t3) = nrFrunze t1 + nrFrunze t2 + nrFrunze t3


-- 2


class Scalar a where
  zero :: a
  one :: a
  adds :: a -> a -> a
  mult :: a -> a -> a
  negates :: a -> a
  recips :: a -> a

instance Scalar Double where
  zero = 0.0
  one = 1.0
  adds = (+)
  mult = (*)
  negates = negate
  recips x = 1.0 / x

--3 

class (Scalar a) => Vector v a where
  zerov :: v a
  onev :: v a
  addv :: v a -> v a -> v a -- adunare vector
  smult :: a -> v a -> v a  -- inmultire cu scalare
  negatev :: v a -> v a -- negare vector


data V2 a = V2 (a, a) 
  deriving (Show)

instance (Scalar a) => Vector V2 a where
  zerov = V2 (zero, zero)

  onev = V2 (one, one)

  addv (V2 (x1, y1)) (V2 (x2, y2)) = V2 (x1 adds x2, y1 adds y2)

  smult s (V2 (x, y)) = V2 (s mult x, s mult y)

  negatev (V2 (x, y)) = V2 (negates x, negates y)



data V3 a = V3 (a, a, a)
  deriving (Show)

instance (Scalar a) => Vector V3 a where
  zerov = V3 (zero, zero, zero)

  onev = V3 (one, one, one)

  addv (V3 (x1, y1, z1)) (V3 (x2, y2, z2)) = V3 (x1 adds x2, y1 adds y2, z1 adds z2)

  smult s (V3 (x, y, z)) = V3 (s mult x, s mult y, s mult z)

  negatev (V3 (x, y, z)) = V3 (negates x, negates y, negates z)
