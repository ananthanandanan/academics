import java.util.Scanner;



public class Driver {

	public static void main(String[] args) {

		System.out.println("Enter limit");
		Scanner in = new Scanner(System.in);  
		int size=in.nextInt();
		Array myobj=new Array(size);
        myobj.Display();
        myobj.oddSum();
		
        
	}

}
