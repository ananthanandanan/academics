import java.util.*;

//Extend BoxWeight to include shipping costs.
//Start with Box.
class Box {
	private double width;
	private double height;
	private double depth;

	// construct clone of an object
	Box(Box ob) { // pass object to constructor
		width = ob.width;
		height = ob.height;
		depth = ob.depth;
	}

	// constructor used when all dimensions specified
	Box(double w, double h, double d) {
		width = w;
		height = h;
		depth = d;
	}

	// constructor used when no dimensions specified
	Box() {
		width = -1; // use -1 to indicate
		height = -1; // an uninitialized
		depth = -1; // box
	}

	// constructor used when cube is created
	Box(double len) {
		width = height = depth = len;
	}

	// compute and return volume
	double volume() {
		return width * height * depth;
	}
}

// Add weight.
class BoxWeight extends Box {
	double weight; // weight of box
	// construct clone of an object

	BoxWeight(BoxWeight ob) { // pass object to constructor
		super(ob);
		weight = ob.weight;
	}

	// constructor when all parameters are specified
	BoxWeight(double w, double h, double d, double m) {
		super(w, h, d); // call superclass constructor
		weight = m;
	}

	// default constructor
	BoxWeight() {
		super();
		weight = -1;
	}

	// constructor used when cube is created
	BoxWeight(double len, double m) {
		super(len);
		weight = m;
	}
}

// Add shipping costs
class Shipment extends BoxWeight {
	double cost;

	// construct clone of an object
	Shipment(Shipment ob) { // pass object to constructor
		super(ob);
		cost = ob.cost;
	}

	// constructor when all parameters are specified
	Shipment(double w, double h, double d, double m, double c) {
		super(w, h, d, m); // call superclass constructor
		cost = c;
	}

	// default constructor
	Shipment() {
		super();
		cost = -1;
	}

	// constructor used when cube is created
	Shipment(double len, double m, double c) {
		super(len, m);
		cost = c;
	}
}

class trans extends Shipment {
	String name;
	String address;
	int roadcost;

	trans(trans ob){
		super(ob);
		name=ob.name;
		address=ob.address;
		cost();
	}
	trans(double w, double h, double d, double m, double c,String name,String address){
		super(w,h,d,m,c);
		this.name=name;
		this.address=address;
		cost();
	}
	trans(){
		super();
		name="";
		address="";
		roadcost=-1;

	}
	trans(double len,double m,double c,String name,String address){
		super(len,m,c);
		this.name=name;
		this.address=address;
		cost();
	}
	void cost(){
		if(volume()>1000) roadcost=2000;
		else if(volume()>500) roadcost=1000;
		else if(volume()>100) roadcost=500;
		else roadcost=100;

		if(weight>1000) roadcost+=1500;
		else if(weight>500) roadcost+=1000;
		else if(weight>250) roadcost+=500;
		else if(weight>100) roadcost+=250;
		else roadcost+=100;
		Displaycost();
	}

	void Displaycost(){
		cost+=roadcost;
		System.out.println("The total cost of transportation is:"+cost);
	}
}

public class q1{

	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter the height,width,depth of the box:");
		int height=scan.nextInt();
		int width=scan.nextInt();
		int depth=scan.nextInt();
		System.out.println("Enter the weight of the box:");
		int weight=scan.nextInt();
		System.out.println("Enter the cost for Shipment:");
		int shipment=scan.nextInt();
		System.out.println("Enter the name,address of the recipient:");
		String name=scan.next();
		String address=scan.next();
		trans a=new trans(width,height,depth,weight,shipment,name,address);
	}

}
