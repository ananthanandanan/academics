import java.util.*;

class Rectangle{
    int length;
    int breath;
    Rectangle(int l,int b){
        length=l;
        breath=b;
    }
    void perimeter(){
        int perimeter=2*length+2*breath;
        System.out.println("The perimeter:"+perimeter);
    }
    void area(){
        int area=length*breath;
        System.out.println("The area:"+area);
    }
}
class Square extends Rectangle{
    Square(int s){
        super(s,s);
    }
    

}
public class Shape {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the length of the rectangle:");
        int l=scan.nextInt();
        System.out.println("Enter the breath of the rectangle:");
        int b=scan.nextInt();
        Rectangle a=new Rectangle(l,b);
        System.out.println("For the rectangle:");
        a.perimeter();
        a.area();
        System.out.println("Enter the side of a square:");
        int s=scan.nextInt();
        Square f=new Square(s);
        System.out.println("For the square:");
        f.perimeter();
        f.area();
    }
}
