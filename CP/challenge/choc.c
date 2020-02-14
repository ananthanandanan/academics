#include <stdio.h>

int main()
{
    int m,n,i,j,s=0,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[n];
    for( i = 0; i<n ;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for( i = 0; i<n;i++)
    {
    for( j = i+1 ;j<n;j++)

    {
     s = a[i]+a[j];   
    if( s == m)
    printf("%d",i+1);
    printf("  ");
    printf("%d",j+1);
    break;
    }
    if(c==0)break;
    }
    return 0;
}