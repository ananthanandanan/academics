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
#define Fabs(x) fabs(x)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))

void threeColorsSort(int * theArray, int len) {
    int i=1,j=0,key;
    for(i=1;i<len;i++)
    {
        key = theArray[i];   //insertion sort
        j = i-1;
        while(j >= 0 && theArray[j] > key)
        {
            theArray[j+1] = theArray[j];
            j--;
        }
        theArray[j+1] = key;
    }
}
int main(){
    int *arr,n;
    printf("Enter the no of inputs : ");
    scanf("%d",&n);
    arr = Alloc(int,n);
    printf("Enter the numbers(in the range 0 - 2) : ");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    printf("The entered numbers are : ");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
    threeColorsSort(arr,n);
    printf("The Sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
}