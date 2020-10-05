import java.util.*;
class vehicle{
    static int no;
    String model;
    double price;
    double weight;
/*
vehicles
void start void stop;
roadvehicles
type;
number of wheels,no of seats,mileage,functons-stats
waterborne
passengers,nautic miles,stats
fourwheelers
LOV
tonage,
Cov
*/ 
    vehicle(String model,double price,double weight)
    {
        this.model=model;
        this.price=price;
        this.weight=weight;
        no+=1;
    }

    void Display(){
        System.out.println("The no of vehicles registered:"+no);
    }

    void start(){
        System.out.println("Let's Start");
        
    }

    void stop(){
        System.out.println("The vehicle is stoping..");
    }
}

class RoadVehicles extends vehicle{

    int seats;
    int mileage;
    String license;
    String color;
    String type;

    public RoadVehicles(int seats, int mileage, String license, String color, String model, double price, double weight, String type){

        super(model, price, weight);
        this.seats = seats;
        this.color = color;
        this.license = license;
        this.mileage = mileage;
        this.type = type;
    }

    void Stats(){

        System.out.println("The no of seats");
        System.out.print("The mileage is");
        System.out.print("The type is");
        System.out.print("The color is");
        System.out.print("The license is");

    }

}



public class vehicleTest{


    public static void main(String[] args) {
        

    }
}















public class vehicleTest {
    
    public static void main(String[] args) {
        
    }
}
