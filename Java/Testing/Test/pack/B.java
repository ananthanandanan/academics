package Test.pack;

import Test.A;

public class B {
    
    public void Print_B(){
        System.out.println("This is B");
        A a = new A();
        System.out.println("Now in A");
        a.test();

    }
}
