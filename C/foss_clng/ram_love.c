#include<stdio.h>

int f_gift(long long int a, long long int b )

int main() 
{
    long long int a,b,c,d,f,N,t;
    

    scanf("%lld",&t);
    while(t!=0)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        scanf("%lld",&c);
        scanf("%lld",&d);
        scanf("%lld",&N);

        f=((c*a)+(d*b));
        if(f>10000000)
        printf("1000000007");
        else
        printf("%lld\n",f);
        t--;
    }

    return 0;
}