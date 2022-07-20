import Data.List
import System.IO 
import Control.Arrow (Arrow(first))

primNo = [1,3,5,7]

lenPrime = length primNo

revPrime = reverse primNo 

secondPrim = primNo !! 1 --Get element by index

firstPrime = head primNo
lastPrime = tail primNo
