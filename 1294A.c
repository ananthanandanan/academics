#include <stdio.h>

int main(){

    int n,t,i,j, change ,max;
    scanf("%d",&t);

   

    while(t!=0)
    {
         int arr[3];
         scanf(" %d%d%d%d",&arr[0],&arr[1],&arr[2],&n);
         
         max = (arr[0]>arr[1])?((arr[0]>arr[2])?arr[0]:arr[2]):((arr[1]>arr[2])?arr[1]:arr[2]);
         
         
         change = max-arr[0];
         change += max-arr[1];
         change += max-arr[2];
         
        if(n>=change)
         {
            n-=change;
        printf("%d",n);

         if(n%3==0)
         printf("YES");

         else
         {
             printf("NO");
         }
         }

         else
         printf("NO");
         
    }

    return 0;
}