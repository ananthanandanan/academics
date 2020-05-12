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


void Read(int *arr, int limit)
{   
    printf("enter the elements of array\n ");
    
    
        for(int j=0;j<limit;j++)
        {
            scanf("%d",&arr[j]);
        }
   
    return;
}


void Psum(int *arr,int limit)
{
    int sum=0;
    for(int i=0;i<limit;i++)
    {
        sum+=arr[i];
    }
    printf("sum of %d is %d\n",limit,sum);
    return;
}

int main() {

    int *ptr, limit=5;
    

    ptr = Alloc(int,5);
    Read(ptr,limit);
    Psum(ptr,limit);
    limit =8;
    ptr = realloc(ptr,limit*sizeof(int)); 
    Read(ptr,limit);
    Psum(ptr,limit);

    free(ptr);




    return 0;
}
