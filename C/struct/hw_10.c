#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,n=0;
    printf("Enter max:");
    scanf("%d",&n);
    int*ptr;
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;++i)
    {
        ptr[i]=i;
    }
    printf("the elements of the array are:");
    for(i=0;i<n;++i)
    {
        printf("%d ,",ptr[i]);
    }
    return 0;
    
}