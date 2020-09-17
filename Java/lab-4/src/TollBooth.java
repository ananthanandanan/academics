import java.util.Scanner;


public class TollBooth {

    static int H_Vehicles;
    static int M_Vehicles;
    static int T_Vehicles;

    static int NH_Vehicles;
    static int NM_Vehicles;
    static int NT_Vehicles;

    static int Toll_pay;
    static int Toll_pay_not;
    static int Predicted_pay;
    static int Apparent_pay;

    static int Total_vehicle;
    static int N_Total_vehicle;
    
    TollBooth(){}

    private static void Tot_Amt(){
        Toll_pay = (H_Vehicles)*50 + (M_Vehicles)*20 + (T_Vehicles)*10;
        System.out.println("The total pay is ==>" + Toll_pay);
    } 

    private static  void Tot_vehicle(){

        Total_vehicle = H_Vehicles+ M_Vehicles + T_Vehicles  + NH_Vehicles + NM_Vehicles + NT_Vehicles;
        System.out.println("The total no of vehicles passed are ==> " + Total_vehicle);
    }

    private static void Tot_not_vehicle(){

        N_Total_vehicle = NH_Vehicles+ NM_Vehicles+NT_Vehicles;
        System.out.println("The total no of vehicles passed(not paid) are ==> " + N_Total_vehicle);

    }

    private static void Variant(){

        System.out.println("Heavy Vehicle ==> " + (H_Vehicles+NH_Vehicles));
        System.out.println("Medium Vehicle ==> " + (M_Vehicles+NM_Vehicles));
        System.out.println("Twowheel Vehicle ==> "+ (T_Vehicles+NT_Vehicles) );
    }


    private static void Paid_Vehicle_Amt(){

        System.out.println("Amount of money collected from Heavy vehicles ==>" + (50*H_Vehicles));
        System.out.println("Amount of money collected from Medium vehicles ==>" + (20*M_Vehicles));
        System.out.println("Amount of money collected from Two wheel vehicles ==>" + (10*T_Vehicles));
    }

    private static void Loss(){

        Predicted_pay= (H_Vehicles+NH_Vehicles)*50 + (M_Vehicles+NM_Vehicles)*20 + (T_Vehicles + NT_Vehicles)*10;
        Apparent_pay = (H_Vehicles)*50 + (M_Vehicles)*20 + (T_Vehicles)*10;
        System.out.println("Amount of money Lost ==>" + (Predicted_pay - Apparent_pay));

    }

    public void Assign(String Type, String Pay){
        if(Type.equalsIgnoreCase("heavy")==true && Pay.equalsIgnoreCase("yes"))
        {
            H_Vehicles++;
        }
            
        if(Type.equalsIgnoreCase("medium")==true && Pay.equalsIgnoreCase("yes")){

            M_Vehicles++;
        }
            
        if(Type.equalsIgnoreCase("two wheel")==true &&Pay.equalsIgnoreCase("yes")){
            T_Vehicles++;
        }
        if(Type.equalsIgnoreCase("heavy")==true &&Pay.equalsIgnoreCase("no")){
            NH_Vehicles++;
        }
        if(Type.equalsIgnoreCase("medium")==true &&Pay.equalsIgnoreCase("no")){
            NM_Vehicles++;
        }
        if(Type.equalsIgnoreCase("two wheel")==true &&Pay.equalsIgnoreCase("no")){
            NT_Vehicles++;
        }
            
        
    }

    public void Format_choice(){
        System.out.println("\t=====The Choices Available=====\n"

        + "\t1 => Enter the vehicle detail\n"
        + "\t2 => Total Amount currently\n"
        + "\t3 => Total vehicle passed\n"
        + "\t4 => Total vehicle not paid\n"
        + "\t5 => Total vehicle in Both category\n"
        + "\t6 => Paid vehicle amount in category\n"
        + "\t7 => Apparent loss\n"
        + "\t8 => Summary \n"
        + "\t9 => exit \n"

        );

        System.out.print("==>");
    }



    public static void main(String[] args) {
        
        TollBooth T = new TollBooth();
        Scanner in = new Scanner(System.in);
        String vehicle_type;
        String confirm;
        int Choice;

        T.Format_choice();
        Choice = in.nextInt();
        in.nextLine();

        //*Begin the menu
        
        do{ 

            switch (Choice) {
                case 1 : 
                        System.out.println("Enter the type of vehicle arrived\n"
                        + "keywordsare:[Heavy, Medium, Two wheel]");
                        System.out.print("==>");
                        vehicle_type = in.nextLine();
                        System.out.println("Enter yes->if vehicle passed paid"
                        + " or enter no");
                        System.out.print("==>");
                        confirm = in.nextLine();
                        T.Assign(vehicle_type, confirm);
                        
                        break;
                case 2:
                    TollBooth.Tot_Amt();
                    
                    break;
                case 3:
                    TollBooth.Tot_vehicle();
                    
                    break;
                case 4:
                    TollBooth.Tot_not_vehicle();
                    
                    break;
                case 5:
                    TollBooth.Variant();
                    
                    break;
                case 6:
                    TollBooth.Paid_Vehicle_Amt();
                    
                    break;
                case 7:
                    TollBooth.Loss();
                    
                    break;
                case 8:
                        System.out.println("\t====Summary====\n\n");
                        TollBooth.Tot_Amt();
                        TollBooth.Tot_vehicle();
                        TollBooth.Tot_not_vehicle();
                        TollBooth.Variant();
                        TollBooth.Paid_Vehicle_Amt();
                        TollBooth.Loss();
                        break;
                case 9:
                    System.out.println("Exiting......");
                    System.exit(0);
                    break;
            
                default:System.out.println("Invalid input");
                    break;
            }

            T.Format_choice();
            Choice = in.nextInt();
            in.nextLine();//to skip the EOF this actually bugs me LOL

        }while(Choice>=1 && Choice<=9);


        
    }
    
}
