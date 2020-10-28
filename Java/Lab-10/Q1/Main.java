import java.util.*;
import myPackage.myClass;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String inputs;
        System.out.println("Enter the name");

        //enter the name here

        inputs = in.nextLine();
        myClass obj = new myClass(inputs);
        System.out.println("The name is :=" + obj.getName());
    }
    
}
