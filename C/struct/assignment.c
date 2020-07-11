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
#define Add(x, y) x + y
#define Mult(x, y) x *y
#define Div(x, y) x / y
#define Mod(x, y) x % y
#define Fabs(x) fabs(x)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define Swap(a, b) a ^= b ^= a ^= b;
#define Alloc(type, n) (type *)calloc(n, sizeof(type))
#define MatAlloc(type, n) (type **)calloc(n, sizeof(type *))
#define Malloc(type, n) (type *)malloc(n * sizeof(type))
#define Clear printf("\e[1;1H\e[2J")

struct student
{
    int roll;
    char name[30];
    float mark[3];
};

void Read(struct student *stud)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        Clear;
        printf("STUDENT-%d\n", i + 1);
        printf("-----------\n");
        printf("enter the roll \n");
        scanf("%d", &((stud + i)->roll));
        printf("enter the name \n");
        scanf("%s", &((stud + i)->name));
        for (j = 0; j < 3; j++)
        {
            if (j == 0)
                printf("enter the marks in maths\n");
            else if (j == 1)
                printf("enter the marks in sanskrit\n");
            else
                printf("enter the marks in programming\n");
            scanf("%f", &((stud + i)->mark[j]));
        }
    }

    return;
}

void Print_name(struct student *stud)
{
    for (int i = 0; i < 5; i++)
    {
        printf(" Name of student-%d is %s \n", i + 1, (stud + i)->name);
    }
    return;
}

void Print_avg(struct student *stud)
{
    int i, j;
    float average, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += (stud + i)->mark[j];
        }
        average = sum / 3.0;
        printf("the average mark of student %d is %f \n", i + 1, average);
    }
    return;
}

void Search(struct student *stud, int roll)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        if (roll == (stud + i)->roll)
        {
            printf("The student searched is %s\n", (stud + i)->name);
            printf("with roll: %d\n", (stud + i)->roll);
            for (j = 0; j < 3; j++)
            {
                if (j == 0)
                    printf("the marks in maths is %f\n", (stud + i)->mark[j]);
                else if (j == 1)
                    printf("the marks in sanskrit is %f\n", (stud + i)->mark[j]);
                else
                    printf("the marks in programming is %f\n", (stud + i)->mark[j]);
            }
        }
    }

    return;
}

int main()
{

    struct student s[5];
    int choice, roll;
    Read(s);
    Clear;
    printf("enter the choice of you want\n");
    printf("[1]->Display names\n[2]->Display average marks of all students\n[3]->search for a student based on roll number[4]-> to exit\n ");
    scanf("%d", &choice);

    do
    {
        switch (choice)
        {
        case 1:
            Print_name(s);
            break;
        case 2:
            Print_avg(s);
            break;
        case 3:
            printf("enter the roll no to search for student\n");
            scanf("%d", &roll);
            Search(s, roll);
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice");
        }
        Clear;
        printf("Enter the choice ");
        printf("[1]->Display names\n[2]->Display average marks of all students\n[3]->search for a student based on roll number\n ");
        scanf("%d", &choice);

    } while (choice >= 1 && choice <= 4);

    return 0;
}