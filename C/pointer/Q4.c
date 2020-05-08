/*sum, diff, prod*/

#include<stdio.h>

void shop(int *num1,int *num2, int *sum, int *diff, int *prod)
{   
    (*sum) = (*num1) + (*num2);
    (*diff) = (*num1) - (*num2);
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