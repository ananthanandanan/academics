public class Employee {
    
    private String empid;
    private String name;
    private int age;
    private String designation;
    private float salary;


    public Employee(){}

    public Employee(String empid, String name, int age, String desig, float sal){
        this.empid = empid;
        this.name = name;
        this.age = age;
        this.designation = desig;
        this.salary = sal;

    }


    public void setEmpId(String i){
        this.empid =i;
    }
    public void setName(String n){
        this.name =n;
    }

    public void setAge(int a ){
        this.age =a;
    }

    public void setDesignation(String d){
        this.designation =d;
    }

    public void setSalary(int s){
        this.salary =s;
    }

    static void PrintDetails(Employee E){

        System.out.println("The id of the employee is =>" + E.empid);
        System.out.println("The name of the employee is ==>" + E.name);
        System.out.println("The age of the employee is ==>" + E.age);
        System.out.println("The designation of the employee is ==>" + E.designation);
        System.out.println("The salary of the employee is  ==>"+ E.salary);
    }

    public void salaryBonus(int i){
        float temp = this.salary;
        System.out.println("The new salary of employee "+(i+1) + " without bonus is: " + temp);
        if(this.designation=="Manager"){
            this.salary += this.salary*0.3;
        }
        else if(this.designation =="Supervisor"){
            this.salary += this.salary*0.2;
        }

        else{
            this.salary+=this.salary*0.1;
        }
        System.out.println("The new salary of employee "+(i+1) + " with bonus is: " + this.salary);

    }

    public static boolean searchDetails(Employee E[], String searchid, int n){
        
        int flag=0;
        for(int j=0;j<n;j++){

        if(E[j].empid.equals(searchid)){
            flag++;
            break;
        }
    }
        if(flag!=0){
            return true;
        }
        else{
            return false;
        }

    }




}
