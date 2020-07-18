#include <stdio.h>

#define rectArea(l, b) l *b

int main()
{

    double length, breadth;
    printf("enter the length and width of rectangle\n");
    scanf("%lf %lf", &length, &breadth);
    printf("the area of the rectangle is %lf\n", rectArea(length, breadth));

    return 0;
}