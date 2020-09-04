#include <iostream>

int minprod(int a, int b, int x, int y, int n)
{
    if (a-x >= n)
        a -= n;
    else
    {
        n -= (a - x);
        a = x;

        if (b-y > n)
            b -= n;
        else
            b = y;
    }

    return a * b;
}

int main()
{

    int a, b, x, y, n, t, res_a = 0, res_b = 0;

    std::cin >> t;

    for (int z = 1; z <= t; z++)
    {
        std::cin >> a >> b >> x >> y >> n;

        res_a = minprod(a, x, b, y, n);
        res_b = minprod(b, y, a, x, n);
        std::cout << std::min(res_a, res_b) << '\n';
    }

    return 0;
}
