

class vehicle {
	String regno;
	int model;

	vehicle(String r, int m) {
		regno = r;
		model = m;
	}

	vehicle(vehicle ob) {
		regno = ob.regno;
		model = ob.model;
	}

	void display() {
		System.out.println("Registration no: " + regno);
		System.out.println("Model no: " + model);
	}

	void drive() {
		System.out.println("Lets Drive");
	}
}

class on_road_vehicle extends vehicle {
	String company;

	on_road_vehicle(String r, int m, String c) {
		super(r, m);
		company = c;
	}

	on_road_vehicle(on_road_vehicle ob) {
		super(ob);
		company = ob.company;
	}

	void company() {
		System.out.println("Vehicle Company: " + company);
	}
}

class two_wheeler extends on_road_vehicle {
	String type;
	int no;

	two_wheeler(String r, int m, String c, String t, int n) {
		super(r, m, c);
		type = t;
		no = n;
	}

	two_wheeler(two_wheeler ob) {
		super(ob);
		type = ob.type;
		no = ob.no;
	}

	void drive() {
		System.out.println("I am  driving a Two wheels!");
	}
}

class four_wheeler extends on_road_vehicle {
	String type;
	int no;

	four_wheeler(String r, int m, String c, String t, int n) {
		super(r, m, c);
		type = t;
		no = n;
	}

	four_wheeler(four_wheeler ob) {
		super(ob);
		type = ob.type;
		no = ob.no;
	}

	void drive() {
		System.out.println("I am  driving a Four wheels!");
	}
}

class ships extends vehicle {
	String company;

	ships(String r, int m, String c) {
		super(r, m);
		company = c;
	}

	ships(ships ob) {
		super(ob);
		company = ob.company;
	}

	void company() {
		System.out.println("Ship Company: " + company);
	}
}

class large_ships extends ships {
	String place;

	large_ships(String r, int m, String c, String p) {
		super(r, m, c);
		place = p;
	}

	large_ships(large_ships ob) {
		super(ob);
		place = ob.place;
	}

	void drive() {
		System.out.println("Set sail in Ocean Waters!");
	}
}

class small_ships extends ships {
	String place;

	small_ships(String r, int m, String c, String p) {
		super(r, m, c);
		place = p;
	}

	small_ships(small_ships ob) {
		super(ob);
		place = ob.place;
	}

	void drive() {
		System.out.println("Set in Cosatal Waters!");
	}
}

public class q2 {
	public static void main(String[] args) {
		small_ships s_ships = new small_ships("YR27HLUFFY", 12, "COSCO", "Costal area");
		s_ships.display();
		s_ships.company();
		System.out.println("These allowed in " + s_ships.place);
		System.out.println();
		large_ships l_ships = new large_ships("WPA76SSwQQ", 6, "STREK", "Oceans");
		l_ships.display();
		l_ships.company();
		System.out.println("These allowed in " + l_ships.place);
		System.out.println();
		four_wheeler fw = new four_wheeler("AP18DEA245", 8, "HERO", "Car", 4);
		fw.display();
		fw.company();
		System.out.println("no of wheeles: " + fw.no);
		System.out.println("Type of four wheeler is " + fw.type);
		System.out.println();
		two_wheeler tw = new two_wheeler("EWF43TY4FSS", 24, "RE_RIDe", "Moter cycle", 2);
		tw.display();
		tw.company();
		System.out.println("no of wheeles: " + tw.no);
		System.out.println("Type of two wheeler is " + tw.type);
		System.out.println();
	}
}
