public class StaticDemo3 {

	public static void main(String[] args) {
		
		Box.callme();
		System.out.println("b = " + Box.b);
		
		//Box.computesum(); Error cannot make a static reference to non static method
		Box obj=new Box();
		obj.computesum();

	}

}
