import Data.List.Split (splitOn)
-- Q1

factors :: Int -> [Int]
factors y = [ x | x <- [1..y], y `mod` x == 0]

--Q2

findprime :: Int -> Bool
findprime n = factors n == [1,n]

--Q3

pairs :: [a] -> [(a, a)]
pairs n = zip <*> tail $ n


--Q4
sorted :: Ord a => [a] -> Bool
sorted [] = True
sorted  n =  and [x<=y | (x,y) <- pairs n]

--Q5

positions :: Eq a => [a] -> a -> [Int]
positions n s = [y-1 | (x,y) <-  zip n [1..length n], x==s]

count :: [Char] -> [Char] -> Int
count c str = length [ x | x <- splitOn "" str, x==c]