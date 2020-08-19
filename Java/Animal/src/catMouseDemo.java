import java.util.Scanner;

public class catMouseDemo {

    public static void main(String[] args) {
        
        Animal animals = new Animal();
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter the position of cat-A\n");
        animals.cat_A = in.nextInt();
        System.out.println("Enter the position of cat-B\n");
        animals.cat_B = in.nextInt();
        System.out.println("Enter the position of mouse\n");
        animals.mouse = in.nextInt();

        animals.catAndMouse();
        
    }
    
}