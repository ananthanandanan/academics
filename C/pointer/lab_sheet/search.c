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

int  Search(int *arr, int limit, int key)
{   
    int flag=0,pos;
    for(int i=0; i<limit;i++)
    {
        if(*(arr+i)==key)
        {   
            flag=1;
            pos = i+1;
            break;
        }
    }
    if(flag==1)
    {
        return pos;
    }
    return -1;
    
}

int main() {

    int *arr,limit, key,pos;
    printf("enter the limit\n");
    scanf("enter the limit of array\n");
    scanf("%d",&limit);

    arr = Alloc(int, limit);
    Read(arr,limit);;
    printf("enter the element to search\n");
    scanf("%d",&key);

    pos = Search(arr,limit,key);
    if(pos!=-1)
    {
        printf("The element is found at position %d\n",pos);
    }
    else
    {
         printf("The element is not  found in array..\n");
    }
    
    free(arr);


    return 0;
}