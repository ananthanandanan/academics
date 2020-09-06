#include<iostream>
#include<algorithm>

int main()
{

    int t, n, p[101],i;

    std::cin>>t;

    for (int z = 1; z <= t; z++)
    {
        std::cin>>n;
        for(i=0;i<n;i++)
        {
            std::cin>>p[i];
        }
        std::reverse(p,p+n);
        for (int i = 0; i < n; i++) 
        std::cout << p[i] << " "; 
        std::cout<<std::endl;
    }

    return 0;

}