import Data.List
import System.IO

thrice x = [x, x, x]

sums (x : y : ys) = x : sums (x + y : ys)
sums xs           = xs

product' :: Num a => [a] -> a
product' [] = 1
product' [n] = n
product' (n:ns) = n * product' ns

second xs = head (tail xs)
swap (x, y) = (y, x)
pair x y = (x, y)
double x = x * 2
palindrome xs = reverse xs == xs
always0 :: Int -> Int
always0 n = 0

subtract' :: Float -> Float -> Float 
subtract' x y = x - y


addmult :: Int -> Int -> Int -> Int 

addmult a b c = (a+b)*c
