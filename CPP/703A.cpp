#include<iostream>
#include <bits/stdc++.h>
#include <vector>
//Fastest input of integers

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int test,mcount=0,gcount=0;
    std::cin>>test;
    for(int t=1;t<=test;t++)
    {   
        int misha,guy;
        std::cin>>misha>>guy;
        if(misha>guy)mcount++;
        if(guy>misha)gcount++;

    }

    if(mcount==gcount)std::cout<<"Friendship is magic!^^"<<std::endl;
    else if(mcount>gcount)std::cout<<"Mishka"<<std::endl;
    else std::cout<<"Chris"<<std::endl;
    return 0;
}