#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*macro*/
#define SIZE 50 
#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))

int main() {

    char *str1, *str2;
    str1 = Malloc(char,SIZE);
    str2 = Malloc(char,SIZE);
    printf("enter the  string-1\n");
    scanf("%s",str1);
    printf("enter the string-2\n");
    scanf("%s",str2);
    printf("The  string-1 is : %s\n",str1);
    printf("The  string-2 is : %s\n",str2);

    //reallocate str1
    str1 = (char *)realloc(str1,(2*SIZE)*sizeof(char));
    strcat(str1,str2);
    printf("The concat string is : %s\n",str1);

    free(str1);
    free(str2);
    

    return 0;
}