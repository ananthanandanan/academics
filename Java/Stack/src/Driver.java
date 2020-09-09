import java.util.Scanner;

public class Driver {

    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int noe, choice;
        System.out.println("Enter the choices\n[1]->push\n [2]->pop\n [3]peek\n[4]->Display [5]->exit ");
        choice = in.nextInt();
        System.out.println("Enter the no of elements");
        noe = in.nextInt();
        Stack S1 = new Stack(noe);
        
        do {

            switch (choice) {
                case 1:
                int item;
                System.out.println("Enter the item");
                item = in.nextInt();
                if(!S1.itsFull())
                {
                    S1.Push(item);
                }
                else
                {
                    System.out.println("The stack is full");
                }
                

                        break;
                case 2:
                if(S1.isEmpty())
                {
                    System.out.println("Stack is empty");
                }
                else 
                {
                    int del;
                    del = S1.Pop();
                    System.out.println("The deleted elemnt is " + del);
                }
                        
                        break;
                case 3:
                int obj;
                obj = S1.Peek();
                System.out.println("The current top is at " + obj);
                        break;
                case 4:
                S1.Display();
                        break;
                case 5:
                System.out.println("Exiting.....");
                System.exit(0);
                default:
                System.out.println("Invalid choice");
                    break;

            

            }
            System.out.println("Enter valid choice to continue ");
            choice = in.nextInt();
            
        }while (choice>=1 && choice<=5);

        
    }

    

}

