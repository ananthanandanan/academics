import java.util.*;

interface Polygon{

    //the abstract class
    public double area();
}

//Rectangle class

class Rectangle implements Polygon{

    int length;
    int width;

    public Rectangle(){}

    public Rectangle(int l, int w){
        this.length =l;
        this.width = w;
    }

    @Override
    public double area(){
        return (double)(length*width);
    }

}



public class RectangleTest {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int length, width;
        System.out.println("Enter the length of rectangle");
        length = in.nextInt();

        System.out.println("Enter the width of rectangle");
        width = in.nextInt();

        Rectangle R = new Rectangle(length, width);

        System.out.println("The area of the rectangle is => "+ R.area());


    }
}
