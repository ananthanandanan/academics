

public class q4 {
	public static void main(String[] args) {
		vehicle ref;
		small_ships s_ships = new small_ships("DE2PGEWIQO", 12, "SEA_CITY", "Costal area");
		s_ships.display();
		s_ships.company();
		System.out.println("These allowed in " + s_ships.place);
		System.out.println();
		ref = s_ships;
		System.out.println("Drive() in coastalWaters class: ");
		ref.drive();
		System.out.println();
		large_ships l_ships = new large_ships("WPA76SSwQQ", 4, "DREAM_WAVE", "Oceans");
		l_ships.display();
		l_ships.company();
		System.out.println("These allowed in " + l_ships.place);
		System.out.println();
		ref = l_ships;
		System.out.println("Drive() in largrOceanGoing class: ");
		ref.drive();
		System.out.println();
		four_wheeler fw = new four_wheeler("YR27HLUFFY", 8, "1000Sunnies", "Car", 4);
		fw.display();
		fw.company();
		System.out.println("no of wheeles: " + fw.no);
		System.out.println("Type of four wheeler is " + fw.type);
		System.out.println();
		ref = fw;
		System.out.println("Drive() in fourWheeler class: ");
		ref.drive();
		System.out.println();
		two_wheeler tw = new two_wheeler("EWF43TY4FSS", 24, "RE_RIDe", "Moter cycle", 2);
		tw.display();
		tw.company();
		System.out.println("no of wheeles: " + tw.no);
		System.out.println("Type of two wheeler is " + tw.type);
		System.out.println();
		ref = tw;
		System.out.println("Drive() in twoWheeler class: ");
		ref.drive();
		System.out.println();
	}
}
