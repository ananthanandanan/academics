/*
    K N Anantha nandanan
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,*q;
    p = (int *) malloc( sizeof(int) );
    *p = 5;
    q = (int *) malloc( sizeof(int) );
    *q = 10;
    p = q;
    printf("p = %d q = %d\n", *p,*q);
    
    return 0;

}
/*
The value in p is not retrieved, and therefore leads to  memory leak*/