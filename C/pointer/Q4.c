/*sum, diff, prod*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*macro*/

#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Fabs(x) fabs(x)
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))


void shop(int *num1,int *num2, int *sum, int *diff, int *prod)
{   
    (*sum) = (*num1) + (*num2);
    (*diff) = Fabs((*num1) - (*num2));
    (*prod) = (*num1)*(*num2);
    return;
}



int main() {

    int num1,num2,sum,diff,prod;

    printf("enter the two integers\n");

    scanf("%d %d",&num1,&num2);
    shop(&num1, &num2, &sum, &diff, &prod);

    printf("sum is %d, diff is %d, prod is %d\n", sum, diff, prod);


   
   
    return 0;
}