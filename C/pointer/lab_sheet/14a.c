/*
* K N Anantha Nandanan
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    //ptr = (int *) malloc( sizeof(int) );
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    return 0;

}

/* 
Error : 
    This will give segmentation fault because the memory is not allocated for the pointer variable ptr in the above code.
    So this will give error . */