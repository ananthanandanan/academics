/*
  K N Anantha nandanan
    
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    //ptr = (int *) malloc( sizeof(int) );
    *ptr = 10;
    free(ptr);
    printf("%d\n", *ptr);
    return 0;

}

/*
Error : 
    The code when executed gives Segmentation fault (core dumped) because the dynamically allocated memory is freed using free() function and then the program is trying to print the value of the already freed pointer.
    That is the ptr variable is unitialized and hence gives the error. */