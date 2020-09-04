#include<iostream>

int main()
{
    

    int a=0,b=0,t=0,res=0;

    std::cin>>t;

    for(int z=1;z<=t;z++)
    {   
        std::cin>>a>>b;

        
        res = abs(a-b);
        if(res%10==0)res = res/10;
        else res = res/10 +1;


        std::cout<<res<<std::endl;
        
    }

    return 0;
}