class myException extends Exception{

    String str1;

    public myException(String reason){
        str1 = reason;
    }

    public String spit(){
        return str1;

    }
}



public class Q8 {
    
    public static void main(String[] args) {
        
        try {
            System.out.println("block start");
            throw new myException("Fucked up");
        } catch (myException e) {
            System.out.println(e.spit());
        }
    }
}
