/*
   K N Anantha nandanan
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1){
    int *ptr;
    ptr = (int *) malloc( sizeof(int) );
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    }
    return 0;

}