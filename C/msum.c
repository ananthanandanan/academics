#include <stdio.h>
#define N 10

void transpose(int a[][N], int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {   
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    } 

    return ;
         
            
}

int main(){

    int r=0,c=0;

    //first mat
    printf("enter the row and column:\n");
    scanf("%d",&r);
    scanf("%d",&c);

    int a[r][c];
    printf("enter the elements of a\n ");


    for(int i=0; i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");

    }

    // transpose
    transpose(a,r,c);
   /* printf("enter the elements of b\n ");
    //sec mat
    for(int i=0; i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
            
        }
        printf("\n");

    }*/
    //print sum of a and b

    for(int i=0; i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]);
    }
        // diff of a and b
    /*for(int i=0; i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]-b[i][j]);
    }*/

    return 0;
}


