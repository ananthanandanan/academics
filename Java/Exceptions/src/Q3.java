import java.util.*;



public class Q3 {
    public static void main(String[] args) {
        
        String NULL = null;

        try {
            if(NULL.equals("hello")){
                System.out.println("equal");

            }

            else{
                System.out.println("not equal");
            }
        } catch (NullPointerException e) {
            System.out.println("There was a null pointer exception");
        } finally {
            System.out.println("finally block executed");
        }
    }
}
