import java.util.Scanner;

public class BoxDemo {

    public static void main(String[] args) {

        //create the obj
        Box mybox = new Box();
        double h, d, w;
        // create scanner obj
        Scanner in = new Scanner(System.in);
        System.out.println("the depth:\n");
        d = in.nextDouble();
        System.out.println("the height is\n");
        h = in.nextDouble();
        System.out.println("the width is :\n");
        w = in.nextDouble();
        //setter function
        mybox.setDim(w, h, d);
        System.out.println("the depth:\n"+ d);
        System.out.println("the height is\n" + h);
        System.out.println("the width is :\n" + mybox.getWidth());// put the getter

        
    }
    
}