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


void Read(int *arr, int limit)
{   
    printf("enter the elements of array\n ");
    
        for(int j=0;j<limit;j++)
        {
            scanf("%d",&arr[j]);
        }
    
    return;
}
void Print(int *arr,int limit)

{   
    for(int i=0;i<limit;i++)
    {   
        printf("array is arr[%d] = %d\n",i,arr[i]);
        
    }
    return;
}

int binarysearch(int *p, int key , int size)
{
    int b=0,e=size-1,mid,f=0;
    mid = (b+e)/2;
    while(b<=e){
        
        if(p[mid] == key)
        {
            f=1;
            return 1;
        }
        if(p[mid] > key)
        {
            e = mid -1;
        }
        else{
            b=mid+1;
        }
        mid = (b+e)/2;
    }
    if(f==0){
        return 0;
    }  
}

void sort(int *p , int size)
{
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            {
                if(p[i] > p[j])
                {
                    int temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
}

int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnsize)
{
    int i,j,k=0;
    int *I;
    I = Alloc(int,1);
    if(nums1Size<nums2Size)
    {
        sort(nums1,nums1Size);
        for(i=0;i<nums2Size;i++)
        {
            if(binarysearch(nums1,nums2[i],nums1Size))
            {
                I[k] = nums2[i];
                k++;
                I = realloc(I,k+1);
            }
        }
    }
    else 
    {
        sort(nums2,nums2Size);
        for(i=0;i<nums1Size;i++)
        {
            if(binarysearch(nums2,nums1[i],nums2Size))
            {
                I[k] = nums1[i];
                k++;
                I = realloc(I,k+1);
            }
            
        }
    }
    *(returnsize) = k;
   
    return I;
        
}

int main() 
{

    int *arr1, *arr2,*I,s1,s2,si=0;
    printf("Enter the size of the first array : ");
    scanf("%d",&s1);
    arr1 = Alloc(int,s1);
    Read(arr1,s1);
    Print(arr1,s1);

    printf("Enter the size of the sec array : ");
    scanf("%d",&s2);
    arr2 = Alloc(int,s1);
    Read(arr2,s2);
    Print(arr2,s2);
    I = Alloc(int,1);
    I = intersect(arr1,s1,arr2,s2,&si);
    printf("The intersection array is:\n");
    Print(I,si);

    free(arr1);
    free(arr2);
    free(I);


    return 0;
}