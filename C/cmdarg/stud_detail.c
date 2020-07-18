#include <stdio.h>

union student
{
    char name[20];
    int roll;
    char subject[20];
    float percentage;
};

int main()
{

    union student stud;

    printf("enter the roll of the student\n");
    scanf("%d", &stud.roll);
    printf("The roll-no is : %d\n\n", stud.roll);

    printf("enter the name of the student\n");
    scanf("%s", stud.name);
    printf("The name is : %s\n\n", stud.name);

    printf("enter the subject\n");
    scanf("%s", stud.subject);
    printf("The subject is : %s\n\n", stud.subject);

    printf("enter the percentage\n");
    scanf("%f", &stud.percentage);
    printf("The percentage is : %f\%\n\n", stud.percentage);

    return 0;
}
