package package2;

import package1.Shape;

public class Triangle extends Shape{

    int a;
    int b;
    int h;

    public Triangle(int sides, int a, int b, int h){

        super(sides);
        this.a = a;
        this.b = b;
        this.h = h;

    }

    public void Perimeter(){
        double Peri = a+b+h;
        System.out.println("The perimeter of Triangle is" + Peri);
    }

    public void Area(){
        double Area = 0.5*b*h;
        System.out.println("The Area of Triangle is " + Area);
    }

}

