/*print one float value, double and one char*/

#include<stdio.h>

int main() {

    float num1, *one;
    double num2, *two;
    char s, *three;

    printf("Enter one float, one double, one character\n ");

    scanf("%f %lf %c",&num1,&num2,&s);
    one = &num1;
    two = &num2;
    three = &s;
    printf("The float value is%.2f,double is%lf and character is %c\n",(*one),(*two),(*three));

    return 0;
}