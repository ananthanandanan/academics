#include<iostream>
#include <bits/stdc++.h>
#include <vector>
//Fastest input of integers

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int test, x,y,z,x1, y1,z1,x2,y2,z2,c=0;
    std::cin>>test;
    for(int t=1;t<=test;t++)
    {
        std::cin>>x1>>y1>>z1;
        std::cin>>x2>>y2>>z2;

        if(y1==y2 && z1!=z2)
        {
            x = x1+x2;
            z = z1+ z2;
            c= pow(2,(x-z));
            std::cout<<c<<std::endl;
        }
        else if(z1==z2 && x1!=x2)
        {   
            x= x1+x2;
            y = y1+y2;
            c= 1*(abs(y-x));
            std::cout<<c<<std::endl;
        }
        
            
            

    }

    return 0;
}