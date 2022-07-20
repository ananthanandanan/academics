import java.rmi.*;
import java.rmi.server.*;

public class RemoteReceive extends UnicastRemoteObject 
    implements Receive{

    //Default constructor to throw remote exceptions
    //from its parent constructor

    RemoteReceive() throws RemoteException {
        super();
    }
    public void receive(String process, int timestamp) 
        throws RemoteException{
            //implementation of the clock update for receive
            if(clock.time > timestamp){
                clock.time++;
            }
            else {
                clock.time = timestamp+1;
            }

            System.out.println("Recieved process-" + process + 
                " " + timestamp);

    }
}
