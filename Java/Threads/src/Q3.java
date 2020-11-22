class First extends Thread {


    @Override
    public void run() {
        try {
            System.out.println("Name of thread " + Thread.currentThread().getName());
        } catch (Exception e) {
            System.out.println("Exception is caught");
        }
    }

}

public class Q3 {

    public static void main(String[] args) {
        First thread = new First();
        thread.setName("Ananthan");
        thread.start();
    }

}
