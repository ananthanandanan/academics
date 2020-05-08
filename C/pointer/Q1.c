/*multiply intergers*/

#include <stdio.h>

int main() {
    int num1,num2, *one=NULL, *two=NULL;

    printf("enter the two integers\n");

    scanf("%d %d",&num1,&num2);
    one = &num1;
    two = &num2;
    int prod;
    prod = (*one)*(*two);
    printf("prod is %d\n",prod);
     
    return 0;
}