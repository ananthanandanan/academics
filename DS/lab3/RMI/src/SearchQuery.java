// Java program to implement the Search interface
import java.rmi.*;
import java.rmi.server.*;

public class SearchQuery extends UnicastRemoteObject
            implements Search
{
    SearchQuery() throws RemoteException
    {
        super();
    }

    // Implementation of the query interface
    public String query(String search)
                    throws RemoteException
    {
        String result;
        if (search.equals("Covid"))
            result = "Positive";
        else
            result = "Negative";

        return result;
    }
}
