package Test;

import Test.pack.B;

public class A 
{ 
    public void test() 
    { 
        System.out.println("Test() method of class A"); 
        B b = new B();
        System.out.println("B:in A");
        b.Print_B();

    } 
} 