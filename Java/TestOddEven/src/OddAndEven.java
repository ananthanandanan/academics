public class OddAndEven {

    public int countOfOdd;
    public int countOfEven;

    public OddAndEven(){
        countOfOdd=0;
        countOfEven=0;
    }
    public void addNumber(int n){
        if(n%2==0)countOfEven+=1;
        else countOfOdd+=1;
    }
    public  void string(){
        System.out.println("Number of Odd :"+countOfOdd);
        System.out.println("Number of Even :"+countOfEven);

    }
    
}