#include <stdio.h>

int main()
{
    int d = 0,n,k,count = 1;
    
    scanf("%d",&n);

    scanf("%d",&k);

    while(count<=k && n!=0)
    {   d = n%10;
        n=n/10;
        count++;

    }
    printf("%d",d);
    return 0;
}