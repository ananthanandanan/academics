
#include <stdio.h>
#include <stdlib.h>


#define Clear printf("\e[1;1H\e[2J")

struct student
{
    int roll;
    char name[30];
    float mark;
};

void Read(struct student *stud, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        Clear;
        printf("STUDENT-%d\n", i + 1);
        printf("-----------\n");
        printf("enter the roll \n");
        scanf("%d", &(stud + i)->roll);
        printf("enter the name \n");
        scanf("%s", &(stud + i)->name);
        printf("Enter the marks\n");
        scanf("%f", &(stud + i)->mark);
    }

    return;
}

int main()
{

    FILE *fptr;
    fptr = fopen("student.txt", "wb");
    if (fptr == NULL)
    {
        printf("The file has failed to open\n");
    }
    else
        printf("the file has opened\n");
    struct student stud[3];
    int i, n;
    printf("enter 3 student details\n");
    scanf("%d", &n);
    // Read the student details.
    Read(stud, n);

    fwrite(stud, sizeof(stud), 1, fptr);

    fclose(fptr);

    return 0;
}