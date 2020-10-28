import java.util.*;

public class Q1 {

    public static void main(String[] args) {

        try {
            int n = -1;
            int a[] = new int[-1];
        }

        catch (NegativeArraySizeException ex) {
            System.out.println("negative not allowed");
        }

        System.out.println("OUT OF CATCH");
    }

}
