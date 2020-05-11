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
#define Alloc(type,n) (type *)calloc(n,sizeof(type));
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))

//calloc syntax ptr = (int *)calloc(n,sizeof(int));
//malloc syntax ptr=  (int *)malloc(n*sizeof(int));
//realloc sytax ptr = realloc(new_size,ptr);


int main() {

    int *ptr, n;
    printf("enter the no of elements\n");
    scanf("%d",&n);

    ptr = Alloc(int,n)

    if(ptr ==NULL)
    
        printf("Allocation failed\n");
    
        else 
        printf("Allocation successful\n");

        for(int i = 0; i<n;i++)
        {
            ptr[i] = i+1;
        }

        printf("the elements are:\n");
        for (int i = 0; i < n; ++i) 
        { 
            printf("%d, ", ptr[i]); 
        } 

        free(ptr);
    return 0;
}