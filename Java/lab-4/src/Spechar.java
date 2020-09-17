

import java.util.*;

public class Spechar {
    public static String RnonAlphanum(String str) {
        String stringd = str.replaceAll("[^a-zA-z0-9]", "");
        return stringd;
    }
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter String");
        String a= in.nextLine();
        System.out.println(RnonAlphanum(a));
    }
}