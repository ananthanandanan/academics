import java.util.*;
/*
Create an interface named "nameRoll" with two methods nameLength( ) which returns an integer and a method rollnoMix( ) which has a void return type.

Now create a class with "your name"[example: amrita] which will implement the interface with two member 
variables name and rollno of type String. In the parameterized constructor, initialize the member variable
 with your name and rollno (where rollno sample U4CSE19XXX). 
Use the methods of the interface in the class with the following functionalities

1) nameLength( ) : Find the length of your name. If the length is greater than 3 throw a user-defined exception myNameException which will print a customized message as "unfortunatily your name is lengthier" [eg: in place of your name - amrita]

2)rollnoMix( ): It should extract the last three digits in the rollno and find the sum of those numbers (Ex: 341-->3+4+1-->8). If the sum is larger than 5  throw explicitly an ArithmeticException with a customized message "Your Rollno is not acceptable". [Hint: ascii of 0 is 48]

Use a driver class to create an object of the above mentioned class by passing your name and rollno as the parameters of the constructor and then call the two methods.

Note: if required the signature of interface methods can be modified according to your program, but functionality remans the same.


*/
class myNameException extends Exception{

    public myNameException(String reason){
        super(reason);
    }
}


interface nameRoll{
    public int nameLength();
    public void rollnoMix();
}

class Ananthan implements nameRoll{
    String rollno;
    String name;

    public Ananthan(){}

    public Ananthan(String n, String r){

        rollno = r;
        name = n;

    }

    public int nameLength(){
        int len = name.length();

        try {
            if(len>3){
                throw new myNameException("unfortunatily your name is lengthier");
            }
            else{
                return len;
            }
        } catch (myNameException e) {
            //TODO: handle exception
            System.out.println(e);
        }
        return len;
    }
    public void rollnoMix(){
        int sum = 0;
        String digstring = rollno.substring(rollno.length()-3);
        int lastthree = Integer.parseInt(digstring);
        System.out.println(lastthree);

        while(lastthree!=0){
            sum = sum + lastthree%10;
            lastthree=lastthree/10;
    
        }
        System.out.println(lastthree); //0
        try {
            if(sum >5){
                throw new ArithmeticException("Your Rollno is not acceptable");
            }
            else{
                System.out.println(sum);
            }
        } catch (ArithmeticException e) {
            //TODO: handle exception
            System.out.println(e);
        }


    }





}

public class Q1 {
    public static void main(String[] args) {
        Ananthan obj = new Ananthan("Ananthan", "AM.EN.U4CSE19326");
        int len;

        len = obj.nameLength();
        obj.rollnoMix();
    }
}
