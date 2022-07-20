-- q1
double :: Integer -> Double
double x = fromInteger x :: Double
--q2
successor :: Integer -> Integer
successor x = x + 1
--q3
even :: Integer -> Bool
even x = if x `mod` 2 == 0 then True else False
--q4
even' :: Integer -> String
even' x = if mod x 2 == 0 then "Even" else "Odd"
--q5
abs :: Integer -> Integer
abs x = if x < 0 then - x else x

--q6
evenGuard :: Integer -> Bool
evenGuard x
    | mod x 2 == 0 = True
    | otherwise = False
--q7
absGuard :: Integer -> Integer
absGuard x
    | x < 0 = - x
    | otherwise = x
--q8
max :: Integer -> Integer -> Integer
max x y
    | x > y = x
    | otherwise = y

--q9
max3 :: Integer -> Integer -> Integer -> Integer
max3 x y z
    | x > y && y > z = x
    | y > x && x > z = y
    | otherwise = z
--q10
power :: Float -> Integer -> Float
power x 0 = 1
power x y = x ^ y
--q11
isValidName :: String -> String
isValidName "" = "Empty String"
isValidName x = x
--q12
checkEligible :: RealFloat a => a -> a -> String
checkEligible weight height
    | x <= 18.5 = "u r underweight"
    | x <= 25.0 = "u r normal"
    | x <= 30.0 = "u r fat"
    | otherwise = "u r a whale"
    where
    x = weight / height ^ 2
--q13
leap :: Int -> Bool
leap year =
    if (year `mod` 4 == 0)
        then
            if (year `mod` 100 == 0)
                then if (year `mod` 400 == 0) then True else False
                else True
            else False
--q14
modulus :: Float -> Float -> Float
modulus x y = sqrt $ (x ** 2) + (y ** 2)


-- q15
boolToInt :: Bool -> Int
boolToInt True = 1
boolToInt False = 0
intToBool :: Int -> Bool
intToBool 0 = False
intToBool _ = True
--q16
f1 a b x = (a * x) + b
f2 a b c x = (a * (x ** 2)) + (b * x) + c
f3 n x = (sin (x)) ** n + (cos (x)) ** n
f4 r s = (pi ** 2) * (r + s) * ((r - s) ** 2) * 0.25
f5 x y = y ** (1.0 / x)
