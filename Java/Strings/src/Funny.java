import java.util.Scanner;


public class Funny {

    public static void main(String[] args) {
        
        String word;
        Scanner in = new Scanner(System.in);
        Boolean check=true;

        //enter the string
        System.out.println("Enter the string");
        word = in.nextLine();

        String reverse = new StringBuffer(word).reverse().toString();
        char[] _word = word.toCharArray();
        char[] _reverse = reverse.toCharArray();

        for(int i=0;i<_word.length-1;i++){
            if( (Math.abs((_word[i]-_word[i+1]))) != (Math.abs((_reverse[i]-_reverse[i+1]))) ){
                check=false;
                System.out.println("Not Funny");
                break;
            }
        }

        if(check==true){
            System.out.println("Funny");
        }
    }
}
