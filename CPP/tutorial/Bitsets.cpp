
#include <bits/stdc++.h> 

#define Max 8
int main()
{
    std::bitset<Max> visited;

    for(int i=0 ;i<Max;i++)
    {   int x;
        std::cin>>x;
        visited[x] = true;
    }

    std::cout << visited.count()<<std::endl;
    std::cout << visited << std::endl;
    
    return 0;

}
