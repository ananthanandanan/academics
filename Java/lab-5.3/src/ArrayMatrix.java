
import java.util.Scanner;

public class ArrayMatrix {

    int[][] intArray;

    ArrayMatrix(int row,int col)
		{
			intArray= new int[row][col];
			Scanner in = new Scanner(System.in);  
			System.out.println("Enter the elements");
			for (int i=0; i<row; i++)
		{
				for (int j=0; j<col; j++)
			{
					intArray[i][j] = in.nextInt();
			}
		}
        }

    void AntiDiag(int row, int col) {
        int sum = 0;
        for (int i = 0; i < row; i++) {
            sum += intArray[i][row - i - 1];
        }
        System.out.println("The sum of anti diagonals are :" + sum);
    }

    void Display(int row, int col) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(intArray[i][j] + " ");
            }
            System.out.println(" ");
        }

    }

}