import java.util.Scanner;

abstract class Shape {
    abstract void RectangleArea(double l, double b);

    abstract void SquareArea(double s);

    abstract void CircleArea(double r);
}

class Area extends Shape{
    void RectangleArea(double l, double b) {
        double area = l * b;
        System.out.println("Area of Rectangle: " + area);
    }

    void SquareArea(double s) {
        double area = s * s;
        System.out.println("Area of Square: " + area);
    }

    void CircleArea(double r) {
        double area = 3.14 * r * r;
        System.out.println("Area of Circle: " + area);
    }
}

public class area {
    public static void main(String args[]) {
        double l, b, r, s;
        Area area = new Area();
        Scanner get = new Scanner(System.in);
        System.out.println("Enter Length & Breadth of Rectangle: ");
        l = get.nextDouble();
        b = get.nextDouble();
        area.RectangleArea(l, b);
        System.out.println("Enter Side of a Square: ");
        s = get.nextDouble();
        area.SquareArea(s);
        System.out.println("Enter Radius of Circle: ");
        r = get.nextDouble();
        area.CircleArea(r);
        get.close();
    }
}
