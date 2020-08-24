import java.util.Scanner;

public class AddressBook {
    public static void main(String[] args) {
        
        Mailing mail = new Mailing();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the name");
        String name = in.nextLine();

        System.out.println("Enter the street address");
        String streetAddrs = in.nextLine();

        System.out.println("Enter the city");
        String city = in.nextLine();

        System.out.println("Enter the state");
        String state = in.nextLine();

        System.out.println("Enter the zipcode");
        int  zip = in.nextInt();

        mail.addAddress(name, streetAddrs, city, state, zip);
        mail.Print();

    
    }
    
}