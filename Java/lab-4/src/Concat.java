import java.util.Scanner;

public class Concat {
    
    static void presuff(int l, String str1, String str2){

        String pre = str1.substring(0,l);
        String suff = str2.substring(str2.length()-l);

        String res = pre.concat(suff);
        System.out.println(res);
        

    }
    public static void main(String[] args) {
        
        String str1;
        String str2;
        int length;

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the String-1");
        str1 = in.nextLine();
        System.out.println("Enter the String-2");
        str2 = in.nextLine();
        System.out.println("Limit");
        length = in.nextInt();

        presuff(length, str1, str2);


    }
}
