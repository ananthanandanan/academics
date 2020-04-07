#include <stdio.h>

int main(){

    int a[3][3],b[3][3];

    //first mat
    for(int i=0; i<3;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");

    }
    //sec mat
    for(int i=0; i<3;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");

    }
    //print sum of a and b

    for(int i=0; i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++)
        printf("%d ",a[i][j]+b[i][j]);
    }
        // diff of a and b
    for(int i=0; i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++)
        printf("%d ",a[i][j]-b[i][j]);
    }

    return 0;
}


