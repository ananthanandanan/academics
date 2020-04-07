#include <stdio.h>

int main(){

    int a[3][3],b[3][3],min[3],prod=1;

    //first mat
    for(int i=0; i<3;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            
            
        }
        printf("\n");

    }
    min[0]= a[0][0];

    for(int i=0; i<3;i++){
        
        for(int j=0;j<3;j++){
            if(a[i][j]<min[i])
            {
                min[i]=a[i][j];
                prod*=min[i];
            }
        printf("\n");

    }
    }
    printf("%d",prod);

    return 0;

}