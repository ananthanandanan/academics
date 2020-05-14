#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
double **Matrix(double *arr, int row, int n)
{
    double ** mat;
    int c=0;
    int col = n/2;
    mat =  MEM_Alloc(row,col);   // create the matrix 

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {   if(c<n)
            {
                mat[i][j] = arr[c];
                c++;
            }

            else
            {
                mat[i][j] = 0;
            }
            
        } 
    }
    return (mat);
}

double *Random(int n)
{
    double *ptr;
    clock_t start, end, total;
    start = clock();
    ptr = Alloc(double,n);
    for(int i=0;i<n;i++)
    {
        ptr[i] = rand();   // use the rand() to generate value from 0-1
    }

    for (int i = 0; i<n; i++)
    {
       printf("%lf\n ",ptr[i]);
    }
    end = clock();
    total = (double)(end-start)/CLOCKS_PER_SEC;    

    printf("The time taken for creation is %lf seconds\n",total);
    return (ptr);
}

double *Max(double *arr, int n)
{   
    double *ptr = NULL;
    double max=arr[0];
    for(int i=0;i<n;i++)
    {   
        max = MAX(max,arr[i]); //finds the max value
    }
    for(int i=0; i<n;i++)
    {
        if(*(arr+i)==max)
        {   
            
            ptr = (arr+i);
            break;
        }
    }
    return(ptr);
    
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


int main() {
    double *arr, **mat, *max;
    int limit,rows;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the rows of matrix\n");
    scanf("%d",&rows);
    //create the array
    arr = Random(limit);
    mat = Matrix(arr,rows,limit);
    printf("The matrix is:");
    Print(mat,rows,limit);
    max = Max(arr,limit);

    printf("the max value of array is %lf",*(max));

    free(arr);
    free(mat);




    return 0;
}