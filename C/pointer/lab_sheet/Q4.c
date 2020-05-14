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


void Read(double *arr, int limit)
{   
    printf("enter the elements of array\n ");
    
        for(int j=0;j<limit;j++)
        {
            scanf("%lf",&arr[j]);
        }
    
    return;
}

double Scalar_product(int len, double *arr1, double *arr2)
{   
    double sum=0;
    for(int i=0;i<len;i++)
    {   
        sum = Add(sum,Mult(arr1[i],arr2[i]));
    }
    return sum;
}

int main() {

    double *arr1, *arr2, result;
    int limit;
    printf("enter the length of array\n");
    scanf("%d",&limit);

    arr1 = Alloc(double,limit);
    Read(arr1,limit);
    printf("Array-1\n");
    for (int i = 0; i<limit; i++)
    {
       printf("%lf\n ",arr1[i]);
    }

    arr2 = Alloc(double,limit);
    Read(arr2,limit);
    printf("Array-2\n");
    for (int i = 0; i<limit; i++)
    {
       printf("%lf\n ",arr1[i]);
    }

    
    

    result = Scalar_product(limit,arr1,arr2);
    printf("the scalar product is :%lf\n",result);
    

    free(arr1);
    free(arr2);
    return 0;
}