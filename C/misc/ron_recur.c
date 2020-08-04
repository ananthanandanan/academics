#include <stdio.h>
int recur(int n)
{

    if (n==0)
        return 1;

    else
    {
        printf("%d",n);
        if(n/2==1)
        n=0;
        return recur(n / 2);
        printf("%d",n + 2);
    }
}

int main()
{
    int n = 5;

    recur(n - 1);
    return 0;
}