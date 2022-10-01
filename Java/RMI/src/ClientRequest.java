// Java program for client application
import java.rmi.*;
public class ClientRequest {
    public static void main(String args[])
    {
        String answer,value="Covid";
        try
        {
            // lookup method to find reference of remote object
            Search access =
                (Search)Naming.lookup("rmi://localhost:1900"+
                                    "/testing");
            answer = access.query(value);
            System.out.println("Test on " + value +
                            " " + answer+" for RTPCR");
        }
        catch(Exception ae)
        {
            System.out.println(ae);
        }
    }
}