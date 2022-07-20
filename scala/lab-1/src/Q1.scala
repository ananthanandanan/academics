import scala.io.StdIn._

object Q1 {

    def main(args: Array[String]):Unit =  {
    val a = 10
    val b = 20
    println("Enter the limit")
    val limit = readInt()
    readInts(limit)
    // findLarge(a, b)
    }

    def findLarge(x: Int, y: Int) = {
        if(x > y) {
        println(x)
        }
        else
            {
                println(y)
            
            }

    }

    def readInts(limit:Int):Unit = {
        val arr:Array[Int] = new Array(limit)

        for (i <- 0 to limit-1) {
            arr(i) = readInt()
        }
        sumInts(arr)
    }

    def sumInts(arr:Array[Int]):Unit = {
        var sums = 0
        for (i <- 0 to arr.length-1) {
            sums+=arr(i)
        }
        println("sum is "+sums)
    }

}