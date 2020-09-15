import java.util.Scanner;

public class Freq {

    public static void main(String[] args) {
        String word;
        int n;
        Boolean check;
        int[] arr;
        Scanner in = new Scanner(System.in);
        // declare the variables

        System.out.println("Enter the string");
        word = in.nextLine();

        System.out.println("Enter the weight");
        n = in.nextInt();
        arr = new int[n];

        int counter[] = new int[256];
        // create the hash
        for (int j = 0; j < word.length(); j++) {
            counter[(int) word.charAt(j)]++;
        }
        // create character array
        char[] ch = word.toCharArray();

        String _array = "";
        for (int i = 0; i < ch.length; i++) {
            if (_array.indexOf(ch[i]) == -1) // check if a char already exist, if not exist then return -1
                _array = _array + ch[i]; // add new char
        }
        char[] setChar = _array.toCharArray();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter the "+ i + " count");
            arr[i] = in.nextInt();
            check = false;
            for(char each:setChar){
                if(((counter[(int)each]*((((int)each)-97)+1)) == arr[i]) || ((((int)each-97)+1)==arr[i]) || ((arr[i]/(int)each)==counter[(int)each])){
                    check = true;
                    System.out.println("YES");
                    break;
                }
                System.out.println(((int)each-97)+1);
            }

            if(check == false){
                System.out.println("NO");
                
            }

        }

    }

}
