#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int  **multiplyMatrices(int **first, int **second, int **mult, int r1, int c1, int r2, int c2)
 {

    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            mult[i][j] = 0;
        }
    }

    // Multiplying first and second matrices and storing in mult.
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                mult[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    return (mult);
}

void Print(int **arr1, int rows, int columns)
{   printf("Added result\n");
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
           printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    return;
}


int main() {

    int rows, columns, **arr1, **arr2, **mult,choice,row2,col2 ;
    printf("enter the no of rows and columns of mat-1\n");
    scanf("%d %d",&rows,&columns);
    printf("enter the no of rows and columns of mat-1\n");
    scanf("%d %d",&row2,&col2);
    printf("enter the choice 1-add 2-Mutiple\n");
    scanf("%d",&choice);


    // initalise first array
    arr1 = MEM_Alloc(rows,columns);
    arr2 = MEM_Alloc(rows,columns);
    mult = MEM_Alloc(rows,columns);


    //reading elements
    Read(arr1,rows,columns);
    Read(arr2,rows,columns);
    //Add and print
    do{
        switch (choice)
        {
        case 1: MAt_ADD(arr1,arr2,rows,columns);
                break;
        case 2: multiplyMatrices(arr1,arr2,mult,rows,columns,row2,col2);
                Print(mult,rows,col2);
                break;

        default:printf("invalid choice");
                break;
        }
        printf("enter the next choice 1-add 2-Mutiple\n");
        scanf("%d",&choice);

    }while(choice>=1 && choice<=2);
    
    
    free(arr1);
    free(arr2);
    free(mult);

    return 0;
}