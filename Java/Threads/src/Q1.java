class First extends Thread{


    @Override
    public void run() {
        System.out.println("Thread " + Thread.currentThread().getName());
        try {

            for(int i=0;i<=5;i++){
                System.out.println(i);
            }
            
        } catch (Exception e) {
            System.out.println ("Exception is caught"); 
        }
    }
    public void LetsStart1(){
        start();
    }

}
class Second extends Thread{

    @Override
    public void run() {
        System.out.println("Thread " + Thread.currentThread().getName());
        try {

            for(int i=6;i<=10;i++){
                System.out.println(i);
            }
            
        } catch (Exception e) {
            System.out.println ("Exception is caught"); 
        }
    }

    public void LetsStart2(){
        start();
    }
}




public class Q1 {

    public static void main(String[] args) {
        First f = new First();
        Second s = new Second();
        f.LetsStart1();
        s.LetsStart2();
    }



}
