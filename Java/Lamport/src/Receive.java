import java.rmi.*;

public interface Receive extends Remote {
    
    //Delcaring the method prototype
    Clock clock = new Clock();
    public void receive(String process, int timestamp) throws RemoteException;

}
