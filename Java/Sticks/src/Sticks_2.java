

import java.util.Scanner;

/*This uses hashing technique*/

public class Sticks_2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int[] sticks = new int[1000];
        for (int i = 0; i < N; i++) {
            int stickLen = in.nextInt();
            sticks[stickLen]++;
        }
        int remainingSticks = N;
        System.out.println(remainingSticks);
        for (int i = 1; i < sticks.length; i++) {
            if (sticks[i] > 0) {
                remainingSticks -= sticks[i];
                if (remainingSticks == 0) {
                    break;
                }
                System.out.println(remainingSticks);
            }
        }
        
    }
}
