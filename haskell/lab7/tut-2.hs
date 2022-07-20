
applyTwice :: (t -> t) -> t -> t
applyTwice f x = f (f x)

zipWidths _[]_ = []
zipWidths _ _ [] = []
zipWidths f (x:xs) (y:ys) = f x y : zipWidths f xs ys

maps :: (a-> b) -> [a] -> [b]
maps _ [] = []
maps f (x:xs) = f x : maps f xs

filters :: (a -> Bool) -> [a] -> [a]
filters _ [] = []

filters p (x:xs)
    |p x  = x: filter p xs
    | otherwise = filter p xs
