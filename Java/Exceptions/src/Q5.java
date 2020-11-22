import java.util.*;

class Except {

    public void Error(int num)throws ArithmeticException, ClassNotFoundException{

        if(num>10){
            throw new ArithmeticException("This is Shit");

        }
        else{
            throw new ClassNotFoundException("Fucked up");
        }

    }

}

/* if you wanna catch multiple errors try this method of using the exception
to delcare certain exception so you are compelled to write the handling. 
*/



public class Q5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        Except obj = new Except();
        System.out.println("Enter the number");
        n = in.nextInt();
        try {
            obj.Error(n);
            
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        
        catch(ClassNotFoundException e){
            System.out.println(e);
        }
        catch (Exception e) {

            System.out.println(e);
        }
    }
    
}
