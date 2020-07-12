#include <stdio.h>
struct student
{ 
    int roll;
};
int main()
{
    struct student s1={20};
    struct student*ptr;
    ptr=&s1;
    printf("%d",ptr->roll);
    return 0;
}