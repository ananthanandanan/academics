#include<iostream>
#include<string>
#include<string.h>


int main()
{

    std::string str1="string class is part of C++ library";//parta
    std:: string str2(str1,1,12);//partb
    //partc
    std::cout<<"string-1 is: "<<str1<<"string-2 "<<str2<<std::endl;
    //partd
    std::cout<<"Beginning "<<str1.at(0)<<"  ending "<<str1.at(str1.size()-1)<<"  middle "<<str1.at((str1.size()/2))<<std::endl;
    //parte
    str2.append("object");
    //partf
    std::string str3 = "Hello Hello Hello";
    std::cout<<"the position of Hello is: "<<str3.find("Hello")<<std::endl;
    //partg
    str3.replace(str3.rfind("Hello"),str3.size()," ");
    std::cout<<"The new str3 is :"<<str3<<std::endl;
    //part h
    std::string name;
    std::cin>>name;
    str3.replace(str3.rfind("Hello"),str3.size(),name);
    //part-i
    std::cout<<"The new str3 with my name :"<<str3<<std::endl;

    return 0;

}