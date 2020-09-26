import java.util.*;


public class EmployeeTest {

public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    Employee[] E;
    int noE;
    System.out.println("Enter the number of employees to enter");
    noE = in.nextInt();
    //initialise the employee array
    E = new Employee[noE];
    //begin of emp references
    String e_id;
    String e_name;
    int  e_age;
    String e_desig;
    float e_sal;
    //end of emp object references
    int choice, which=0; // provided the choice and the which state 
    String tid;
    boolean check;

    //Entering the test inputs statically
    for(int i=0;i<noE;i++){

        System.out.println("Enter the details of "+(i+1)+" employee");
        in.nextLine();
        System.out.println("Enter the empid");
        e_id = in.nextLine();
        System.out.println("Enter the name");
        e_name = in.nextLine();
        System.out.println("Enter the agee");
        e_age = in.nextInt();
        in.nextLine();
        System.out.println("Enter the designation");
        e_desig = in.nextLine();
        System.out.println("Enter the inital salary");
        e_sal = in.nextFloat();

        //Store it to each Employee object
        E[i] = new Employee(e_id, e_name, e_age, e_desig, e_sal);

    }
    // Let the menu driven program begin...

    System.out.println("Enter one of the choices:\n"
    +"1->PRint\n"
    +"2->2->Calculate bonus\n"
    +"3->3Search\n"
    +"4->exit\n");

    choice = in.nextInt();
    in.nextLine();

    do{
        switch (choice) {
            case 1:
                System.out.println("Which employee detail to show provide the integer from 1 to n");
                which = in.nextInt();
                in.nextLine();
                Employee.PrintDetails(E[which-1]);
                break;
            case 2: 
                    for(int i=0;i<noE;i++){
                        E[i].salaryBonus(i);
                    }
                    break;
            case 3:
        
                    System.out.println("Enter the employee id for searching");
                    tid = in.nextLine();

                    if((Employee.searchDetails(E, tid, noE))==true){
                        System.out.println("Employee exist..");
                    }
                    else{
                        System.out.println("Employee doesn't exist");
                    }
                    break;
            case 4:
                    System.out.println("Existing...");
                    System.exit(0);
                    break;
            default:
                    System.out.println("Invalid output");
                break;
        }
        System.out.println("Enter the next choice\n"
        +"1->PRint\n"
        +"2->Calculate bonus\n"
        +"3->3Search\n"
        +"4->exit\n"
        );
        choice = in.nextInt();
        in.nextLine();

    }while(choice>=1 && choice<=4);



}

}
