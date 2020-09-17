
public class Demo_Static {

    private static int numInstances = 0;
    int a;

    private static int getCount() {
        return numInstances;
    }

    private static void addInstance() {
        numInstances++;
    }

    Demo_Static() {
         Demo_Static.addInstance();
     }

    public void doublea() {
        int doub = 2 * a;
        System.out.println("double a=" + doub);
        System.out.println("Starting with " + getCount() + " instances");

    }

    public static void main(String[] args) {

        System.out.println("Starting with " + getCount() + " instances");

        for (int i = 0; i < 600; ++i) {
            Demo_Static obj = new Demo_Static(); // Or new StaticMain() is enough as we dont need object
        }
        System.out.println("Created " + getCount() + " instances");
        System.out.println("Starting with " + Demo_Static.getCount() + " instances");
        // doublea() //Error Cannot make static reference to non static method doublea
        Demo_Static obj2 = new Demo_Static();
        obj2.doublea();

    }

}
