import java.rmi.*;
import java.util.*;

public class Client1 extends Thread {
    //server 2,3,4

    String name;
    Clock clock;
    String[] address = {
        "rmi://localhost:1901/server2",
        "rmi://localhost:1902/server3",
        "rmi://localhost:1903/server4",
    };

    public Client1(String name, Clock clock){
        this.name = name;
        this.clock = clock;
    }

    public void internal(){
        try {
            Thread.sleep(5000);
        } catch (Exception e) {
            //TODO: handle exception
            System.out.println(e);
        }
        
        this.clock.time++;
    }

    public void send(){
        try {
            Thread.sleep(5000);
        } catch (Exception e) {
            //TODO: handle exception
            System.out.println(e);
        }
        
        this.clock.time++;
        Random rand = new Random();
        int randnum = rand.nextInt(3);
        try {
        Receive recv = (Receive)Naming.lookup(address[randnum]);
        recv.receive(this.name, this.clock.time);
        }
        catch(Exception ae){
            System.out.println(ae);
        }
        

    }

    public void run() {
        try {
            Thread.sleep(5000);
        } catch (Exception e) {
            //TODO: handle exception
            System.out.println(e);
        }
        Random rand = new Random();
        
        try {
            for(int i=0;i<15;i++){
            int r = rand.nextInt(2);
            if(r==0){
                this.internal();
            }
            else{
                this.send();
            }
        }
    }
    catch(Exception ae){
        System.out.println(ae);
    }
    }

}
