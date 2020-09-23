import java.util.*;
//import java.util.Arrays;

public class Sticks {


public static void main(String[] args) {
    
    Scanner in = new Scanner(System.in);
    int n;
    System.out.println("Enter the length");
    n = in.nextInt();

    int[] arr = new int[n];

    System.out.println("Enter the elements");

    for(int i=0;i<n;i++){
        arr[i]= in.nextInt();
    }
    
    //sort the array

    Arrays.sort(arr);
    int small = arr[0];

    System.out.print(arr.length);

    for(int i=1;i<arr.length;i++){
        

        if(small!=arr[i]){
            System.out.print(arr.length-i);
            small= arr[i];
        }
    

    }

}
    
}
