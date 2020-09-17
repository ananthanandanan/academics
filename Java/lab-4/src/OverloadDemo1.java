
class OverloadDemo1 {
    void test() {
    System.out.println("No parameters");
    }
    // Overload test for one integer parameter.
    void test(int a) {
    System.out.println("a: " + a);
    }
    // Overload test for two integer parameters.
    void test(int a, int b) {
    System.out.println("a and b: " + a + " " + b);
    }
    // overload test for a double parameter
    double test(double a) {
    System.out.println("double a: " + a);
    return a*a;
    }
    }
    public class Driver {
    
        public static void main(String[] args)
        {
            OverloadDemo1 ob = new OverloadDemo1();
            double result;
            // call all versions of test()
            ob.test();
            ob.test(10);
            ob.test(10, 20);
            result = ob.test(123.25);
            System.out.println("Result of ob.test(123.25): " + result);
    
        }
    
    }
    