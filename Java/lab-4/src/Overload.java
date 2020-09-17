import java.util.Scanner;

public class Overload {
    static float a, b;
    static double a1, b1, a2, b2;
    static int x1, y1, x2, y2;

    void add(float a, float b) {
        System.out.println(a + b);
    }

    void add(double a1, double b1, double a2, double b2) {
        System.out.println((a1 + a2) + "+i" + "(" + (b1 + b2) + ")");
    }

    void add(int x1, int y1, int x2, int y2) {
        System.out.println("<" + (x1 + x2) + "," + (y1 + y2 + ">"));
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(
System.in
);
        Overload obj = new Overload();
        System.out.print("enter the two floating numbers = ");
        a = in.nextFloat();
        b = in.nextFloat();
        System.out.print("enter the 1st complex number = ");
        a1 = in.nextDouble();
        b1 = in.nextDouble();
        System.out.print("enter the 2nd complex number = ");
        a2 = in.nextDouble();
        b2 = in.nextDouble();
        System.out.print("enter the 1st vector = ");
        x1 = in.nextInt();
        y1 = in.nextInt();
        System.out.print("enter the 2nd vector = ");
        x2 = in.nextInt();
        y2 = in.nextInt();
        System.out.println("addition of float =");
        obj.add(a, b);
        System.out.println("addition of complex =");
        obj.add(a1, b1, a2, b2);
        System.out.println("addition of vector =");
        obj.add(x1, y1, x2, y2);
    }
}