#include <stdio.h>
#include <string.h>

int main()
{
    long long int i,j,ck=0,a,k=0,ti=0,tj=0;

    char arr[200005], brr[200005];

    scanf("%s%s",arr,brr);

    i = strlen(arr)-1;
    j = strlen(brr)-1;

    while(i>=0 && j>=0) // cond.1
    {

    if(arr[i]==brr[j]) // cond.2
    ck+=2;
    else break;
    i--, j--;
    }

    a = strlen(arr) + strlen(brr);
    k = a-ck; // 8-6 = 2
    printf("%lld\n",k); 
}