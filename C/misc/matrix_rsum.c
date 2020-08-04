#include <stdio.h>

int main(){

    int a[3][3],rs;

    for(int i=0; i<3;i++){
        rs=0;
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            rs += a[i][j];
        }
        printf("%d\n",rs);

    }

    return 0;
}