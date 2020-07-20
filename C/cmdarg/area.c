/*
*K N Anantha nandanan
*AM.EN.U4CSE19326
*/


#include <stdio.h>

#define PI 3.14
#define circleArea(r) PI *r *r

int main()
{

    double radius;
    printf("enter the radius for the circle\n");
    scanf("%lf", &radius);
    printf("the area of the circle is %lf\n", circleArea(radius));

    return 0;
}