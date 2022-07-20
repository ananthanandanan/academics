--q1
max3 :: Int -> Int -> Int -> Int
max3 x y z = if x>y && x>z 
             then x 
             else if y>x && y>z 
                  then y 
                  else z

--q2
even1 :: Int -> String
even1 x = if mod x 2 == 0 
          then "even"
          else "odd"
          
--q3
largest :: Int -> Int -> Int
largest x y
 | x>y = x
 | otherwise = y

--q4
distance :: Float -> Float -> Float -> Float -> Float
distance x1 y1 x2 y2 = d
 where d = sqrt ((x2-x1)**2 + (y2-y1)**2)

--q5
min :: (Ord a) => a -> a -> a
min x y
 | x<y = x
 | otherwise = y

max :: (Ord a) => a -> a -> a
max x y
 | x>y = x
 | otherwise = y

--q6
dividesIf :: Int -> Int -> Bool
dividesIf x y = if mod y x == 0 then True else False

dividesGuard :: Int -> Int -> Bool
dividesGuard x y
 | mod y x == 0 = True
 | otherwise = False

dividesMult :: Int -> Int -> Bool
dividesMult 0 y = False
dividesMult x y = if mod y x == 0 then True else False

--q7
f7 :: Int -> Int
f7 0 = 7
f7 x = 3 * (x^2) - 2

--q8
stirling :: Float -> Float
stirling n = sqrt(2 * pi * n) * (n / 2.718281828459045)**n

--q9
noOfSol :: Int -> Int -> Int -> String
noOfSol a b c
 | d < 0 = "no solution"
 | d == 0 = "one solution"
 | otherwise = "two solutions"
 where d = (b^2) - 4 * a * c

--q10
rootsOfQuadraticEqu :: Float -> Float -> Float -> (Float, Float)
rootsOfQuadraticEqu a b c = if d < 0 then error "0" else (x,y)
                               where 
                                    x = e + sqrt d / (2 * a)
                                    y = e - sqrt d / (2 * a)
                                    d = (b^2) - 4 * a * c
                                    e = - b / (2 * a)  
