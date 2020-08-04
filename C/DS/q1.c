
#include <stdio.h>

int fun(int n,int m)
{
    if (n == 1 &&  m == 0)
        printf("%d",n);
    else
    {
        fun(n - 1, m / 2);
    }

}

int main()
{
    int n = 10, m=16;
    fun(n, m);
    return 0;
}