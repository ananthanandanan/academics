public class StaticMain {

    private static int numInstances = 0;
    int a;

    private static int getCount() {
        return numInstances;
    }

    private static void addInstance() {
        numInstances++;
    }

    StaticMain() {
        StaticMain.addInstance();
    }

    public void doublea() {
        int doub = 2 * a;
        System.out.println("double a=" + doub);
        System.out.println("Starting with " + getCount() + " instances");

    }

    public static void main(String[] args) {

        System.out.println("Starting with " + getCount() + " instances");

        for (int i = 0; i < 600; ++i) {
            StaticMain obj = new StaticMain(); // Or new StaticMain() is enough as we dont need object
        }
        System.out.println("Created " + getCount() + " instances");
        System.out.println("Starting with " + StaticMain.getCount() + " instances");
        // doublea() //Error Cannot make static reference to non static method doublea
        StaticMain obj2 = new StaticMain();
        obj2.doublea();

    }

}