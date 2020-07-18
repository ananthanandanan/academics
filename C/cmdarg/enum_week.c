#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// An example program to demonstrate working
// of enum in C

enum week
{
    Sunday = 1,
    Monday,
    Tueday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{

    int choice;
    printf("enter the week number(1-7)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case Sunday:
        printf("Sunday");
        break;
    case Monday:
        printf("Monday");
        break;
    case Tueday:
        printf("Tuesday");
        break;
    case Wednesday:
        printf("Wednesday");
        break;
    case Thursday:
        printf("Thursday");
        break;
    case Friday:
        printf("Friday");
        break;
    case Saturday:
        printf("Saturday");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}
