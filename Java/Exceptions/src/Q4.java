import java.util.*;
/*
Create a user-defined exception myException which is will print an exception description as "Product invalid".
 The driver class defines a method prouctCheck( ) which takes a weight parameter and throws 
 myException if the weight is lesser than 100. 
 In the main method input weight and use this method to check if the weight is ok otherwise
  throw the exception in the productCheck( ) method.

*/

class myException extends Exception{

    public myException(String reason){
        
        super(reason);

    }
}

public class Q4 {

    public static void productCheck(int weight){

        //throws the exception after the check

        try{
            if(weight>100){
                System.out.println("Product is valid");

            }
            else{
                throw new myException("Product invalid");
            }
        }
        catch(myException reason){
            System.out.println("This has catched an error");
            System.out.println("=>" + reason.getMessage());
        }
    }
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter the weight of product");
        
        int weight;
        weight = in.nextInt();
        in.nextLine();

        //check
        productCheck(weight);

        
    }
}
