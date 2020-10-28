package package1;

import package1.Shape;

public class Square extends Shape{

    int len;

    public Square(int sides, int l){

        super(sides);
        this.len = l;

    }

    public void Perimeter(){
        int Peri = 4*this.len;
        System.out.println("The perimeter of square is" + Peri);
    }

    public void Area(){
        int Area = this.len*this.len;
        System.out.println("The Area of square is " + Area);
    }

}
