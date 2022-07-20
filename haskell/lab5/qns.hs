-- Q1
secondLast :: [a] -> a
secondLast xs = head(tail(reverse xs))

-- Q2

findk :: [a] -> Int -> a
findk xs k = xs !! k

--Q3

palindrome :: String -> Bool
palindrome input = input == reverse input

-- Q4
removeDuplicates :: Eq a => [a] -> [a]
removeDuplicates [] = []
removeDuplicates (x:xs)
    | x `elem` xs = removeDuplicates xs
    | otherwise = x : removeDuplicates xs

-- Q5

makeDuplicates :: Eq a=> [a] -> [a]
makeDuplicates xs = foldr dup [] xs
    where dup x y = x:x:y

-- Q6

replicateN :: Int -> [b] -> [b]
replicateN n xs = xs >>= replicate n

-- Q7

dropEveryN :: Int -> [a] -> [a]
dropEveryN n xs = take(n-1) xs ++ dropEveryN n(drop n xs)

--Q8

splitList :: Int -> [a] -> ([a], [a])
splitList 0 xs     = ([], xs)
splitList _ []     = ([], [])
splitList n (x:xs) = (x:xs', xs'')
    where
    (xs', xs'') = splitList (n - 1) xs

-- Q9

slice :: [a] -> Int -> Int -> [a]
slice xs i k | i>0 = take (k-i+1) $ drop (i-1) xs

-- Q10

removeAt :: Int -> [a] -> [a]
removeAt n xs = take (n-1) xs ++ drop n xs

-- Q11

insert :: a -> Int -> [a] -> [a]
insert n _ [] = [n]
insert n i (x:xs)
    | i<=0 = n:x:xs
    |otherwise  = x : insert n (i-1) xs