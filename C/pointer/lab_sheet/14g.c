/*
   K N Anantha nandanan
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,*q;
    p = (int *) malloc( sizeof(int) );
    *q = p;
    free(p);
    *q = 5;
    printf("p = %d q = %d\n", *p,*q);
    
    return 0;

}
/*
Error
    Here q is a dangling pointer. It is assigned to the address of p. But since p is freed q hence points to a memory allocation that us already freed.
    Hence this gives segmentation fault*/