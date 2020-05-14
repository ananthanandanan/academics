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


void Read(int *arr, int limit)
{   
    printf("enter the elements of array\n ");
    
        for(int j=0;j<limit;j++)
        {
            scanf("%d",&arr[j]);
        }
    
    return;
}

void Reverse(int *arr, int limit)
{
    int i;
    for(i=0;i<limit/2;i++)
    {
        Swap(arr[i],arr[limit-1-i]);
    }

    return;
}

void Psum(int *arr,int limit)

{   static int cnt;
    for(int i=0;i<limit;i++)
    {   if(cnt!=0)
        printf("reverse of array is arr[%d] = %d\n",i,arr[i]);
        else
        {
            printf(" array before reverse is arr[%d] = %d\n",i,arr[i]);   
        }
        
    }
    cnt++;
    return;
}

int main() {

    int *arr, limit;
    printf("enter the limit\n");
    scanf("%d",&limit);

    arr = Alloc(int,limit);

    Read(arr,limit);
    Psum(arr,limit);
    Reverse(arr,limit);
    Psum(arr,limit);

    free(arr);

    return 0;
}