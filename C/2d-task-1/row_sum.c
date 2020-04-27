#include <stdio.h>
#define N 4
#define M 4

int main() {

    int r,c,Arr[N][M], rsum;
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

    //row sum
    for(int i=0; i<r;i++){
        rsum = 0;
        for(int j=0;j<c;j++){
            rsum+=Arr[i][j];
            
        }
        printf("Sum of row %d is %d\n",i,rsum);

    }


    return 0;
}
