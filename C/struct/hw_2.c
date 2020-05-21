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

int main() {

    struct student s1, s2;
    s1.roll = 10;
    s1.name = "Nivedita";
    s1.mark = 49.5;

    s2.roll = 20;
    s2.name = "Dravid";
    s2.mark = 45;

    printf("%s \t %s",s1.name,s2.name);
    
    return 0;
}