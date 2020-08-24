import java.util.Scanner;

public class Driver {

    public static void main(String[] args) {
        double sal;
        String empname;
        
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the name");
        empname = in.nextLine();
        System.out.println("Enter the salary");
        sal = in.nextDouble();

        
        
        Employee emp = new Employee(empname, sal);

        System.out.println("The name of employee is " + emp.getName() + "Salary is" + emp.getSalary());

        System.out.println("Enter the raise in salary");
        int raise = in.nextInt();
        emp.raiseSalary(raise);

    }
}