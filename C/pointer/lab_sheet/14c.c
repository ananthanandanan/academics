/*
    K N Anantha nandanan
    
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    while(1){
    
    ptr = (int *) malloc( sizeof(int) );
    *ptr = 10;
    printf("%d\n", *ptr);
    }
    free(ptr);
    return 0;
}
/* In an infinite loop, do steps a, b, c and d (i.e. without e). 
   ii.Run the program for as long as it can. 
   iii.The program + system will crash after some time 
   This leads to memory Leak;
   */