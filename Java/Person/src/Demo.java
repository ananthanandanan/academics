
import java.util.Scanner;

public class Demo {

    public static void main(String[] args) {
        
        Person man = new Person();
        Scanner in = new Scanner(System.in);
        String d;
        System.out.println("Enter the name");
        d = in.nextLine();
        
        man.setName(d);
        System.out.println("the name is :" + man.getName());


    }
}