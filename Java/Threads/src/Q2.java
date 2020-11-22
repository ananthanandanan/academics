
class RunnableImpl implements Runnable {

    public void run() {
        System.out.println("Run :" +Thread.currentThread().getName());
    }
}

public class Q2 {

    public static void main(String[] args) {
        System.out.println("Main thread is- " + Thread.currentThread().getName());
        //create a runnable object
        // to start a runnable we need to use it in a thread

        RunnableImpl running = new RunnableImpl();
        Thread t1 = new Thread(running, "Ananthan");
        t1.start();
    }

    
}
