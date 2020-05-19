/*
   K N Anantha nandanan
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    
    long * ptr = (long *) malloc( sizeof(int) ); // 4 bytes allocated *ptr = 10; 
    *ptr = 10; // This will access 8 bytes of memory
    printf("ptr = %ld size = %ld",*ptr,sizeof(*ptr));
    return 0;

}















