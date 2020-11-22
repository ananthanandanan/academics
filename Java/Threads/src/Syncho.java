
class printCount {

    public void count() {

        System.out.println("counting..");

        try {
            for (int i = 1; i <= 6; i++) {
                System.out.println(i);
            }
        } catch (Exception e) {

            System.out.println("an exception");
        }
    }

}

class threadDemo extends Thread {

    private Thread t;
    private String name;
    printCount P;

    public threadDemo() {
    };

    public threadDemo( String tname, printCount pc) {
        name = tname;
        P = pc;
    }

    // Lets run it
    @Override
    public void run() {

        synchronized (P) {
            P.count();
        }
        System.out.println("Count for session done");
    }
    @Override
    public void start() {

        System.out.println("Start " + name);
        if (t == null) {
            t = new Thread (this, name);
            t.start ();
        }

    }

}

public class Syncho {

    public static void main(String[] args) {
        printCount P1 = new printCount();
        threadDemo t1 = new threadDemo("first", P1);
        threadDemo t2 = new threadDemo("second", P1);

        t1.start();
        t2.start();

        try {
            t1.join();
            t2.join();
        } catch (Exception e) {
            System.out.println("interrupted");
        }

    }
}