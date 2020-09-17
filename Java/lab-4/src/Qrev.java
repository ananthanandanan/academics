import java.util.Scanner;

public class Qrev {

    static void palindrome(String rev){
        String reverse = new StringBuffer(rev).reverse().toString();
        if(reverse.compareTo(rev)==0){
            System.out.println("Palindrome");

        }

        else{
            System.out.println("not Palindrome" + reverse.compareTo(rev));

        }
    }
    public static void main(String[] args) {
        String word;
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the string");
        word = in.nextLine();
        palindrome(word);


    }
    
}
