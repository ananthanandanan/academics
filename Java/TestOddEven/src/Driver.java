public class Driver {
    public static void main(String[] arg) {
        Scanner scan = new Scanner(System.in);
        OddAndEven obj = new OddAndEven();
        String q;
        while (true) {
            int i = scan.nextInt();
            System.out.println("Enter the number here");
            obj.addNumber(i);
            System.out.println("Do you want to continue Y/Q");

            q = scan.next();
            if (q.charAt(0) == 'Q') {
                break;
            }

        }
        obj.string();
    }

}