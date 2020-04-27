#include <stdio.h>
#define N 4
#define M 4

int main() {

    int r,c,Arr[N][M], sum=0;
    printf("enter the row and column:\n");
    scanf("%d",&r);
    scanf("%d",&c);

    
    printf("enter the elements of array\n ");


    for(int i=0; i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&Arr[i][j]);
            
        }
        printf("\n");

    }

    //upper diagonal
    for(int i=0; i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {   
            
            
            if(i>j)
            {
                Arr[i][j] = 0;
                
                
            }
            else
            {
                sum += Arr[i][j];
            }
            
         }
        

    }
    for (int i = 0; i < r; i++) 
    { 
        for (int j = 0; j < c; j++) 
        {
             printf("%d ", Arr[i][j]); 
             
        }
        printf("\n"); 
       
    } 
    printf("The sum is %d\n",sum);


    return 0;
}