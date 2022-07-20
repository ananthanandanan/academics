import Data.List
import System.IO 
{- 
Int
Char
Integer
Float
Double
Tuple
Bool
-}

sumOfNum = sum[1..100] 

addEx = 5+4
subEx = 5+4
mulEx = 5+4
divEx = 5 / 4

modEx = mod 5 4
modEx2 = 5 `mod` 4

negNumEx = 5 + (-4)

num9 = 9 ::Int

sqrtOf9 = sqrt (fromIntegral num9) -- square root works with float, so change float to Int, there are other fns

trueandFalse = (True && False)
trueorFalse = True || False
notTrue = not(True) -- viseversa

primeNumber = [1,3,5]
morePrime = primeNumber ++ [13, 17]
--combine numbers to list
combinenumList = 1 : 2 : 34 :[]
