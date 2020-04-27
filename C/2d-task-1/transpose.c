
#include <stdio.h>
#define N 10
#define M 10
void transpose(int A[N][M], int B[N][M], int row, int col) 
{ 
    int i, j; 
    for (i = 0; i < row; i++) 
        for (j = 0; j < col; j++) 
            B[i][j] = A[j][i]; 
} 
  
int main() 
{ 
    int r,c,Arr[N][M],Brr[N][M];
    printf("enter the row and column:\n");
    scanf("%d",&r);
    scanf("%d",&c);

    
    printf("enter the elements of a\n ");


    for(int i=0; i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&Arr[i][j]);
            
        }
        printf("\n");

    }
    transpose(Arr, Brr, r, c); 
    for(int i=0; i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
        printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
  
    printf("Matrix transpose is \n"); 
    for (int i = 0; i < r; i++) 
    { 
        for (int j = 0; j < c; j++) 
        {
             printf("%d ", Brr[i][j]); 
             
        }
        printf("\n"); 
       
    } 
  
    return 0; 
} 