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

    int t, x = 0;
    long int n;
    int array[1000];
    fastscan(t);

    //*take the testcase
    for (int test = 1; test <= t; test++)
    {

        std::cin >> n;

        for(int i=0; i < n; i++)
        {
            fastscan(x);
            array[i]=x;
        }

        if ((array[0] + array[1]) > array[n - 1])

            std::cout << "-1" << std::endl;

        else
            std::cout << 1 << " " << 2 << " " << n << std::endl;

    }

    return 0;
}