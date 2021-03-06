/*
*AUTHOR: K N Ananthanandanan
*AM.EN.U4CSE19326
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

/*macro*/
#define SIZE 50 
#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define Fabs(x) fabs(x)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))

struct student
{   
    int roll;
    char *name;
    float mark;
};

struct subject
{   
    char *name;
    int numerical_code;

};

int main() {

    struct student s1,s2;
    s1.numerical_code = 10;
    printf("%d\n",s1.numerical_code);
    return 0;
}

/* This error is arise because there is no filed "numerical_code" in student structure, but it belonged to subject.
so obvously the compiler would spit error.