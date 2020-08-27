#include<iostream>
#include<string>
#include<string.h>


int main()
{

    std::string str1;//parta
    std::cout<<"enter the string "<<std::endl;
    std::cin>>str1;
    int counti = 0,counte=0;
    for(std::string::iterator i = str1.begin();i!=str1.end();i++)
    {
        if('('==*i)
        counti++;
        if(')'==*i)
        counte++;
    }

    if((counti+counte)%2==0)
    std::cout<<"Valid"<<std::endl;
    else
    std::cout<<"Not valid"<<std::endl;
    
    return 0;

}