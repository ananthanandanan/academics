
#include <iostream>

class Rectangle
{

    double length;
    double breadth;
    double height;

public:
    //constructor
    Rectangle() {}

    Rectangle(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    Rectangle(Rectangle &R1)
    {
        breadth = R1.breadth;
        length = R1.length;
        height = R1.height;
    }

    void set_length(double l)
    {
        length = l;
    }

    void set_breadth(double b)
    {
        breadth = b;
    }

    void set_height(double h)
    {
        height = h;
    }

    void Print()
    {
        std::cout << "the  length :" << length<< "\n" << 
        "breadth :"<< breadth <<"\n"<< "height :" << height << std::endl;
    }
};

int main()
{
    double h, l, b;
    Rectangle R1(10.8, 8.6, 15.5), R2;
    R1.Print();

    std::cout << "enter the height length and breadth" << std::endl;
    std::cin >> h >> l >> b;
    R1.set_length(l);
    R1.set_breadth(b);
    R1.set_height(h);
    R1.Print();
    //copy constructor
    R2 = R1;

    return 0;
}
