
import java.util.Scanner;

public class ArrayMain {

    public static void main(String[] args) {
        System.out.println("Enter limit");
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        int[] myList = new int[size];
        System.out.println("Enter the elements");
        for (int i = 0; i < size; i++) {
            myList[i] = in.nextInt();
        }
        System.out.println("Display the array");
        for (int i = 0; i < myList.length; i++)
            System.out.println(myList[i]);

        int j = 0, sum = 0;
        System.out.println("Find the sum");
        for (int num : myList) {
            System.out.println(myList[j]);
            j++;
            sum = sum + num;
        }
        System.out.println("Sum" + sum);
    }

}
