import scala.io.StdIn._
import Array._

object Q2 {
    def main(args: Array[String]): Unit = {
        println("Enter the nof Columns")
        val col = readInt()
        println("Enter the nof rows")
        val row = readInt()
        val matrix = readMatrix(row,col)
        val result = ComputeProduct(matrix)
        printRecord(result)
    }
    
    def readMatrix(row:Int, col:Int) = {
        var myMatrix = ofDim[Int](row, col)

        for (i <- 0 to row-1){
            for (j <- 0 to col-1){
                myMatrix(i)(j) = readInt()
            }
        }
        myMatrix
    }

    def printRecord(matrix: Array[Array[Int]]): Unit = {
		println("  --------------");
		// Assume  N x N Matrix size
		var row: Int = matrix.length;
		var col: Int = matrix(0).length;
		var i: Int = 0;
		// Iterate the row element
		while (i < row)
		{
			var j: Int = 0;
			// Iterate the column element
			while (j < col)
			{
				// Display element value
				print("  " + matrix(i)(j));
				j += 1;
			}
			// Add new line
			println();
			i += 1;
		}
		println();
	}

    def ComputeProduct(matrix:Array[Array[Int]]) = {

    var row: Int = matrix.length;
	var col: Int =matrix(0).length;
		// This matrix are store the result of multiplication 
		var result: Array[Array[Int]] = Array.fill[Int](row, col)(0);
		var i: Int = 0;
		while (i < row)
		{
			var j: Int = 0;
			while (j < col)
			{
				result(i)(j) = 0;
				var k: Int = 0;
				while (k < row)
				{
					result(i)(j) = result(i)(j) + (a(i)(k) * b(k)(j))
					k += 1;
				}
				j += 1;
			}
			i += 1;
		}
        result

    }

}