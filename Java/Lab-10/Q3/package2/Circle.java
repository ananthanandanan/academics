package package2;

import package1.Shape;

public class Circle extends Shape{

    int r;

    public Circle(int sides, int r){

        super(sides);
        this.r = r;

    }

    public void Perimeter(){
        double Peri = 2*3.14*r;
        System.out.println("The perimeter of Circle is" + Peri);
    }

    public void Area(){
        double Area = 3.14*r*r;
        System.out.println("The Area of Circle is " + Area);
    }

}

