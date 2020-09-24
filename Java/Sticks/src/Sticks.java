
import java.util.*;


public class Sticks {


    static void Assign(int arr[], int n, Scanner in){
        for(int i=0;i<n;i++){
            arr[i]= in.nextInt();
        }
    }
public static void main(String[] args) {
    
    Scanner in = new Scanner(System.out);
    int n;
    System.out.println("Enter the length");
    n = in.nextInt();

    int[] arr = new int[n];

    System.out.println("Enter the elements");
    Sticks.Assign(arr, n, in);

    //
    Array.sort(a);
    
}
    
}
