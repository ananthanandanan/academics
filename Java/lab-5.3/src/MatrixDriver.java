
import java.util.Scanner;



public class MatrixDriver {

	public static void main(String[] args) {

		System.out.println("Enter Row and column of the matrix");
		Scanner in = new Scanner(System.in);  
		int row=in.nextInt();
		int col=in.nextInt();
		ArrayMatrix myobj=new ArrayMatrix(row,col);
        myobj.Display(row,col);
        myobj.AntiDiag(row,col);
		

	}

}