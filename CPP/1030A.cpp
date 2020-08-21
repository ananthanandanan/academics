#include <iostream>
#include <bits/stdc++.h>
#include <vector>


int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, x,count=0;
    std::cin >> n;
    for (int t = 1; t <= n; t++)
    {
        std::cin >> x;
        if (x == 1)
        {
            std::cout << "HARD" << std::endl;
            count++;
            break;
        }
    }
    if(count==0)std::cout<<"EASY"<<std::endl;
    return 0;
}