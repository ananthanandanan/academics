import java.util.Scanner;

public class Driver {

    public static void main(String[] args) {
        

        Scanner in = new Scanner(System.in);
        

        System.out.println("Enter the height");
        int height = in.nextInt();
        Angelic tree = new Angelic(height);

        System.out.println("Enter the no periods");
        int n = in.nextInt();

        tree.currentHeight(n);

        System.out.println("Enter current height is :" + tree.getHeight());
        

    }
    
}