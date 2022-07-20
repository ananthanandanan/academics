import java.rmi.*;
import java.util.*;


public class Client4 extends Thread{
// 1,2,3    
String name;
    Clock clock;
    String[] address = {
        "rmi://localhost:1900/server1",
        "rmi://localhost:1901/server2",
        "rmi://localhost:1902/server3",
    };

    public Client4(String name, Clock clock){
        this.name = name;
        this.clock = clock;
    }

    public void internal(){
        this.clock.time++;
    }

    public void send(){
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
