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
        int roll = 20;
        char name[50];
        float mark;

    };
    

int main()
{
   struct student s1;
   printf("%d",s1.roll);


    return 0;
}

/* This program will show error as you can't assign value during structure declaration.*/