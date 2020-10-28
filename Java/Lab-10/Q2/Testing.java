import java.util.*;
import package_name.class_one;
import package_one.class_two;

public class Testing {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);

        String myName;
        String myRoll;
        System.out.println("Enter the name");
        myName = in.nextLine();
        System.out.println("Enter the roll");
        myRoll = in.nextLine();

        class_one name = new class_one(myName);
        class_two roll = new class_two(myRoll);

        name.method_one();
        roll.method_two();
    }

}
