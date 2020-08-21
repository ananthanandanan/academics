#include<iostream>
#include <bits/stdc++.h>
#include <vector>
//Fastest input of integers

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int test;
    std::cin>>test;

    for(int z=1;z<=test;z++)
    {
            int a,k;
            std::cin >> a>>k;
            if(a<=k)std::cout<<k-a<<std::endl;
            else if(a+k%2==0)std::cout<<0<<std::endl;
            else std::cout<<1<<std::endl;
            
            

    }

    return 0;
}