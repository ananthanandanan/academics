#include<iostream>
#include<string.h>
#include<string>




class Circle
{
    double radius;
    std::string color;
    

    public:
    Circle(){}
    Circle(double r)
    {
        radius = r;
    }
    Circle(double r, const std::string &s)
    {
        radius = r;
        color = s;
        
    }
    double getRadius()
    {
        return radius;
    }

    std::string getColor()
    {
        return color;
    }

    double getArea()
    {
        return 3.14*radius*radius;
    }

};

int main()
{
    Circle c1(2.0,"blue"),c2(2.0,"red"),c3(1.0,"red");
    double Cr1 = c1.getRadius();
    double Cr2 = c2.getRadius();
    double Cr3 = c3.getRadius();
    std::cout << "The circle-1 radius is"<<Cr1<<std::endl;
    std::cout << "The circle-2 radius is"<<Cr2<<std::endl;
    std::cout << "The circle-3 radius is"<<Cr3<<std::endl;
    std::cout<<std::endl;
    std::string Cc1 = c1.getColor();
    std::string Cc2 = c2.getColor();
    std::string Cc3 = c3.getColor();
    std::cout << "The circle-1 color is"<<Cc1<<std::endl;
    std::cout << "The circle-2 color is"<<Cc2<<std::endl;
    std::cout << "The circle-3 color is"<<Cc3<<std::endl;
    std::cout<<std::endl;
    double Ca1 = c1.getArea();
    double Ca2 = c2.getArea();
    double Ca3 = c3.getArea();

    std::cout << "The circle-1 Area is"<<Ca1<<std::endl;
    std::cout << "The circle-2 Area is"<<Ca2<<std::endl;
    std::cout << "The circle-3 Area is"<<Ca3<<std::endl;


    return 0;
}