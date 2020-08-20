#include <bits/stdc++.h>
#include <vector>
//Fastest input of integers
void fastscan(int &x)
{
    bool neg = false;
    register int c;
    x = 0;
    c = getchar();
    if (c == '-')
    {
        neg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        x = (x << 1) + (x << 3) + c - 48;
    if (neg)
        x *= -1;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,k,count=0;
    int array[100];


    std::cin>>n>>k;

    for(int i=0;i<n;i++)
    std::cin>>array[i];

    int pos = array[k-1];

    for(int i=0;i<n;i++)
    if(array[i]>=pos && array[i]!=0)
    count++;

    std::cout<<count<<std::endl;
    return 0;
}

