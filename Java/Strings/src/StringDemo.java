import java.util.Scanner;


public class StringDemo {

    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        String s1;
        String s2;
        System.out.println("Enter string-1");
        s1 = in.nextLine();
        System.out.println("Enter string-1");
        s2 = in.nextLine();
        
        //a
        System.out.println(s1.equals(s2));
        //b
        System.out.println(s1.equalsIgnoreCase(s2));
        //c
        char ch=s1.charAt(4);
        System.out.println("Character at 4th position"+" " +ch);
        
        //d
        System.out.println(s1.compareTo(s2));
        //e
        s1=s1.concat(s2);
        System.out.println(s1); 

        //f
        System.out.println(s1.contains("India")); 
        //g
        System.out.println(s2.endsWith("country"));

        //h
        String sf1=String.format("name is %s",s2);
        System.out.println(sf1); 
        //i
        int index = s1.indexOf(s2);
        System.out.println(index);

        //j
        System.out.println(s1.isEmpty()); 
        //k
        String joinString1 = String.join("-",s1,"to",s2,s1,s2,"towards",s2);
        System.out.println(joinString1);
        
        //l
        int index1=s1.lastIndexOf("country");
        System.out.println(index1);
        //m
        System.out.println("string length is: "+s1.length());
        //n
        String replaceString=s1.replace('a','e');
        System.out.println(replaceString);

        //o
        replaceString=s1.replace("India","europe");
        System.out.println(replaceString);

        //p
        replaceString=s1.replaceAll("India","europe");
        System.out.println(replaceString);

        String[] words=s1.split("\\s");
        for(String w:words)
        {

            System.out.println(w); 
        }

        System.out.println(s1.startsWith("India"));
        System.out.println(s1.substring(1,4));

        char[] chr = s1.toCharArray();


        int len = chr.length;

        System.out.println("Char Array length: " + len);

        System.out.println("Char Array elements: ");

        for (int i = 0; i < len; i++) {

        System.out.println(chr[i]); }



            
    }
    
}
