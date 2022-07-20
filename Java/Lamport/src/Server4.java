import java.rmi.*;
import java.rmi.registry.*;


public class Server4 {
    
    public static void main(String[] args) {
        String name = "P4";
        Clock clock = new Clock();
        String address = "rmi://localhost:1903/server4";
        try{
            //Create object of interface implementation class
            Receive obj = new RemoteReceive();
            //rmi registry within the server JVM with port number 1900
            LocateRegistry.createRegistry(1903);
            //Bind remote object with name server1
            Naming.rebind(address, obj);
            //Create a client thread and start it
            Client4 client = new Client4(name,clock);
            client.start();

            for(int i=0;i<15;i++){
                if(Math.round(Math.random())==1){
                    client.internal();
                }
                else {
                    client.send();
                }
            }
        }
        catch(Exception ae) {
            System.out.println(ae);
        }
    }
}
