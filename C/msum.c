#include <stdio.h>

int main(){

    int r=0,c=0;

    //first mat
    printf("enter the row and column:\n");
    scanf("%d",&r);
    scanf("%d",&c);

    int a[r][c], b[r][c];
    printf("enter the elements of a\n ");


    for(int i=0; i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");

    }
    printf("enter the elements of b\n ");
    //sec mat
    for(int i=0; i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
            
        }
        printf("\n");

    }
    //print sum of a and b

    for(int i=0; i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]+b[i][j]);
    }
        // diff of a and b
    for(int i=0; i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]-b[i][j]);
    }

    return 0;
}


