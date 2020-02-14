#include <stdio.h>

int main(){

    int n,t,i,j,tm;
    scanf("%d",&t);

   

    while(t!=0)
    {
         int arr[3];
         scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&n);
         for (i = 0; i < n-1; i++)      
            for (j = 0; j < n-i-1; j++)  
                if (arr[j] > arr[j+1])  
                    tm= arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tm; 
                

         int change = arr[2]-arr[0];
         change += arr[2]-arr[1];

         if(n>=change)
         {
         n-=change;

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