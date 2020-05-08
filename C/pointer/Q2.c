/* Find the max*/

#include<stdio.h>

int main() {

    int num1,num2, *one=NULL, *two=NULL;

    printf("enter the two integers\n");

    scanf("%d %d",&num1,&num2);
    one = &num1;
    two = &num2;

    int max;

    max = ((*one)>(*two))?(*one):(*two);
    printf("the max number is %d\n",max);
    return 0;
}