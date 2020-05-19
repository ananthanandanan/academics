#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*macro*/
#define SIZE 50 
#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))
#define Fabs(x) fabs(x)


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
void Print(double **arr1, int rows, int columns)
{   printf("result\n");
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<(columns/2);j++)
        {
           printf("%lf ",arr1[i][j]);
        }
        printf("\n");
    }
    return;
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

double Dist(double **arr, int rows, int columns)
{
    double dist,sum=0;
    int ch1,ch2;
    printf("enter the two choices of vector[1,2,3...n] signifies the n vectors\n");
    scanf("%d %d",&ch1,&ch2);
    for(int i=0;i<columns;i++)
    {
        sum =  pow((*(*(arr+(ch1-1))+i) - *(*(arr+(ch2-1))+i)),2);
           
    }
    dist = sqrt(sum);
    return dist;

}

int main() {

    double **mat, result;
    int rows,col=3;
    printf("enter the no of rows\n");
    scanf("%d",&rows);
    mat = MEM_Alloc(rows,col);
    Read(mat, rows,col);
    Print(mat,rows,col);

    result = Dist(mat,rows,col);
    printf("the result distance is %lf\n",result);

    free(mat);

    

    return 0;
}