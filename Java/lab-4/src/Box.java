

public class Box {
	static int a = 42;
	static int b = 99;
	int c=50;
	
	void computesum()
	{   int sum=this.a+b;
		System.out.println("Sum a+b = " + sum);
		
	}
	
	static void callme() {
	System.out.println("a = " + a);
	//System.out.println("c = " + c); //Error . Cannot make static reference to non Static Field
	//computesum() //Error Cannot make a static reference to non static method
	}
}
