import java.util.*;

import package1.Rectangle;
import package1.Square;
import package2.Triangle;
import package2.Circle;

public class Driver {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        Rectangle r = new Rectangle(4, 3, 2);
        r.Perimeter();
        r.Area();

        Square s = new Square(4, 4);
        s.Perimeter();
        s.Area();

        Circle c = new Circle(0, 7);
        c.Perimeter();
        c.Area();

        Triangle t = new Triangle(3, 2, 3, 5);
        t.Perimeter();
        t.Area();
    }

}
