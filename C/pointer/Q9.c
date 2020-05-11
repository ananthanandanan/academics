#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*macro*/

#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))


int  **MEM_Alloc(int rows,int columns)
{   
    int **ptr;
    ptr = MatAlloc(int,rows);

    for (int i = 0; i < rows; i++)
    {
        ptr[i] = Alloc(int,columns); 
    }

    return (ptr);

}

void Read(int **arr, int rows, int columns)
{   
    printf("enter the elements of array\n ");
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    return;
}

void MAt_ADD(int **arr1, int **arr2, int rows, int columns)
{   printf("Added result\n");
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
           printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return;
}


int main() {

    int rows, columns, **arr1, **arr2 ;
    printf("enter the no of rows and columns\n");
    scanf("%d %d",&rows,&columns);

    // initalise first array
    arr1 = MEM_Alloc(rows,columns);
    arr2 = MEM_Alloc(rows,columns);

    //reading elements
    Read(arr1,rows,columns);
    Read(arr2,rows,columns);
    //Add and print
    MAt_ADD(arr1,arr2,rows,columns);
    
    free(arr1);
    free(arr2);

    return 0;
}