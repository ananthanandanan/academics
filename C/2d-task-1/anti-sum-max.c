#include <stdio.h>
#define N 4
#define M 4

int main() {

    int r,c,Arr[N][M], sum=0,max;
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
    max = Arr[0][0];

    //sum and max
    for(int i=0; i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {   
            
            
            if(i+j==(r-1))
            {
                sum += Arr[i][j];
                if(max<Arr[i][j])max = Arr[i][j];
                
            }
         }
        

    }
    printf("The max is %d and sum is %d\n",max,sum);


    return 0;
}
