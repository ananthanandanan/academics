/*
    K N Anantha nandanan

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,*q;
    p = (int *) malloc( sizeof(int) );
    *p = 5;
    p = (int *) malloc( sizeof(int) );
    *p = 10;
    printf("p = %d \n", *p);
    
    return 0;

}
/* 
Error
    The value stored in the pointer variable initially can't be retrieved. The access to the previous loation is lost.
    It can’t be freed either since the pointer is lost. This leads to memory leak. 
    */
   