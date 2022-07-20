--Q1

lengthr xs = foldr (\x acc -> acc+1) 0 xs

lengthFoldl :: [Int] -> Int
lengthFoldl xs = foldl (\y _ -> y+1) 0 xs

--Q2

minr xs = foldr(\x acc -> if x < acc then x else acc) 100 xs

minl xs = foldl(\ acc x  -> if x > acc then acc else x) 100 xs