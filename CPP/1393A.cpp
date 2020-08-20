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
    {   int k;
        std::cin>>k;
    
        std::cout<<k/2+1 <<std::endl;    
    }


    return 0;
}

