#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Distance.h"

/*macro*/
#define SIZE 50 
#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define Fabs(x) fabs(x)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))


double  **MEM_Alloc(int rows,int columns)
{   
    double **ptr;
    ptr = MatAlloc(double,rows);

    for (int i = 0; i < rows; i++)
    {
        ptr[i] = Alloc(double,columns); 
    }

    return (ptr);

}

void Read(double **arr, int rows, int columns)
{   
    printf("enter the elements of array\n ");
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
    return;
}


int main() {

    double **mat, result;
    int rows,col=3;
    printf("enter the no of rows\n");
    scanf("%d",&rows);
    mat = MEM_Alloc(rows,col);
    Read(mat, rows,col);

    result = Distance(mat,rows,col);
    printf("the result distance is %lf\n",result);

    free(mat);

    

    return 0;
}