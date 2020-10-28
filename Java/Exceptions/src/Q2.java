
import java.util.*;

public class Q2 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int a[] = new int[10];
        int i = 0;
        String item;

        try {
            System.out.println("enter the index");
            i = in.nextInt();
            in.nextLine();

            try {
                System.out.println("Enter the input");
                item = in.nextLine();
                
                a[i] = Integer.parseInt(item);

            } catch (NumberFormatException e) {
                System.out.println("The input is not an integer");
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index is out of bounds");
        }

        System.out.println(i);
    }

}
