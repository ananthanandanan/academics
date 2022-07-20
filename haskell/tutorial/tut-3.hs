import Data.List
ys :: [a]
ys = []


xs :: [Integer]
xs = 12 : 34 : 24 : []

isPalindrome word = word == reverse word

takenLast n nLast = reverse(take n (reverse nLast))

assignToGroups n aList = zip groups aList

    where groups = cycle [1..n]

somevalue = [x + 1 | x <- fromTo 0 9]

