public class Employee {
    
    private long  id;
    private String name;
    private double  salary;

    public Employee(){}
    public Employee(String n, double s){
        name = n;
        salary = s;
    }
    
    public void setId(int i){
        id =i;
    }

    public long getId(){
        return id;
    }

    public String getName(){
        return name;

    }
    public double getSalary(){
        return salary;
    }

    public void raiseSalary(double bypercent){
        
        salary = salary + salary*(bypercent/100);
        System.out.println("The new salary is "+ salary);

    }



}