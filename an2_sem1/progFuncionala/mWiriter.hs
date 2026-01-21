--- Monada Writer

newtype WriterS a = Writer { runWriter :: (a, String) }
  deriving (Show)

instance Monad WriterS where
  return va = Writer (va, "")
  ma >>= k = let (va, log1) = runWriter ma
                 (vb, log2) = runWriter (k va)
             in  Writer (vb, log1 ++ log2)

instance Applicative WriterS where
  pure = return
  mf <*> ma = do
    f <- mf
    a <- ma
    return (f a)

instance Functor WriterS where
  fmap f ma = pure f <*> ma

tell :: String -> WriterS ()
tell log = Writer ((), log)

logIncrement :: Int -> WriterS Int
logIncrement x = Writer (x + 1, "increment:" ++ show x ++ "\n")

logIncrement2 :: Int -> WriterS Int
logIncrement2 x = do
    y <- logIncrement x
    logIncrement y

logIncrementN :: Int -> Int -> WriterS Int
logIncrementN x 0 = return x
logIncrementN x n = do
    y <- logIncrement x
    logIncrementN y (n - 1)

newtype WriterLS a = WriterLS { runWriterLS :: (a, [String]) }
  deriving (Show)

instance Monad WriterLS where
    return x = WriterLS (x, [])
    ma >>= f = let (x, log1) = runWriterLS ma
                   (y, log2) = runWriterLS (f x)
               in WriterLS (y, log1 ++ log2)

instance Applicative WriterLS where
  pure = return
  mf <*> ma = do
    f <- mf
    a <- ma
    return (f a)

instance Functor WriterLS where
  fmap f ma = pure f <*> ma

logIncrementLS :: Int -> WriterLS Int
logIncrementLS x = WriterLS (x + 1, ["increment:" ++ show x])

logIncrementN_LS :: Int -> Int -> WriterLS Int
logIncrementN_LS x 0 = return x
logIncrementN_LS x n = do
    y <- logIncrementLS x
    logIncrementN_LS y (n - 1)