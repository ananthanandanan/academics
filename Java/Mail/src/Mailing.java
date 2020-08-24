import java.util.Set;

public class Mailing {

    private String name;
    private String streetadd;
    private String city;
    private String state;
    private int zipCode;

    public Mailing(){
        name = "NIL";
        streetadd ="NIL";
        city ="NIL";
        state = "NIL";
        zipCode = 0;
    };

    public void addAddress(String n, String sname, String c, String s, int z){
        name = n;
        streetadd = sname;
        city = c;
        state = s;
        zipCode = z;

    }

    public void Print(){
        System.out.println("\t\txxxxMailing Detailsxxxx");
        System.out.println("\tName is : \t\t" + name);
        System.out.println("\tStreet address is :\t "+ streetadd);
        System.out.println("\tCity is : \t\t" + city);
        System.out.println("\tState is : \t\t" + state);
        System.out.println("\tZIP code is : \t\t " + zipCode);

    }



    
}