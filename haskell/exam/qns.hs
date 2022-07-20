import Data.Char
data Pet = Cat | Dog | Fish | Parrot String 


hello :: Pet -> String
hello x = 
    case x of 
        Cat -> "meow"
        Dog -> "woff"
        Fish -> "bubble"
        Parrot name -> "pretty" ++ name 

conv :: p -> Int
conv x = digitToInt 'a'

fibpair 0 = (0,1)
fibpair n = (y, x+y)
    where (x,y) = fibpair (n-1)
fib 0 = 0
fib n = snd (fibpair (n-1))

zipWith' _ [] _ = []
zipWith' _ _ [] = []
zipWith' f (x:xs) (y:ys) = f x y : zipWith' f xs ys
