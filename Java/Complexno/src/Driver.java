import java.util.Scanner;

public class driver {
    public static void main(String[] arg) {
        Scanner scan = new Scanner(System.in);
        float r1 = scan.nextFloat();
        float i1 = scan.nextFloat();
        float r2 = scan.nextFloat();
        float i2 = scan.nextFloat();
        Complex a = new Complex(r1, i1);
        Complex b = new Complex(r2, i2);
        Complex c = new Complex();
        c.add(a, b);
        System.out.println("The addtion is " + c.getreal() + "+" + "i" + c.getimg());
        c.sub(a, b);
        System.out.println("The subtraction is " + c.getreal() + "+" + "i" + c.getimg());

    }
}