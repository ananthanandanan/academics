/*13-4-20
*Ananthan2k
Count all pairs whose sum is an odd number*/
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n,m,k,i,s=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&arr2[i]);
    for(i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    if((arr1[i]+arr2[j])%2!=0) // takes sum iff the sume is odd
                        s++;
                }
        }
    printf("%d",s);
    return 0;
}
