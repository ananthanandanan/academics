package package1;

import package1.Shape;

public class Rectangle extends Shape{

    int len;
    int breadth;

    public Rectangle(int sides, int l, int b){

        super(sides);
        this.len = l;
        this.breadth = b;

    }

    public void Perimeter(){
        int Peri = 2*(this.len+ this.breadth);
        System.out.println("The perimeter of rectangle is" + Peri);
    }

    public void Area(){
        int Area = this.len*this.breadth;
        System.out.println("The Area of Rectangle is " + Area);
    }

}