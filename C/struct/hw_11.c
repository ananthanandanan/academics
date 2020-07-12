#include <stdio.h>
int main()
{
    int i=0,n=0;
    printf("Enter number:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=i;
    }
    for(i=0;i<n;++i)
    {
        printf("%d ,",a[i]);
    }
    return 0;
    
}