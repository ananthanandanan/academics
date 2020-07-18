#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>


#define Clear printf("\e[1;1H\e[2J")

struct student
{
    int roll;
    char name[30];
    int age;
    float grade;
};

// ** Add student
void Addstudent()
{
    FILE *fptr = NULL;
    struct student stud;
    if ((fptr = fopen("student.txt", "ab+")) == NULL)
    {
        printf("the file could not be opened\n");
        return;
    }
    else
    {
        printf("File is ready to write\n");
    }

    // add the data of new student and write
    printf("enter the data of new student\n\n");

    printf("Enter the Name of student:\n");
    scanf("%s", stud.name);
    printf("Enter the roll-no of student:\n");
    scanf("%d", &stud.roll);
    printf("Enter the age of student:\n");
    scanf("%d", &stud.age);
    printf("Enter the grade of student:\n");
    scanf("%f", &stud.grade);
    fwrite(&stud, sizeof(stud), 1, fptr);
    fclose(fptr);
}

// ** Display student

void DisplayStudent(struct student *stud)
{
    printf("the Name of student:%s\n", stud->name);
    printf("the age of student:%d\n", stud->age);
    printf(" the roll-no of student:%d\n", stud->roll);
    printf("the grade of student:%f\n", stud->grade);

    return;
}

// ** Search for student
void Searchstudent()
{
    FILE *fptr = NULL;
    struct student stud;

    if ((fptr = fopen("student.txt", "rb")) == NULL)
    {
        printf("couldn't open file\n");
        return;
    }
    else
    {
        printf("ready to read.\n");
    }
    int r;
    printf("enter the roll no to search\n");
    scanf("%d", &r);
    while (fread(&stud, sizeof(stud), 1, fptr) == 1)
    {
        if (r == stud.roll)
        {
            DisplayStudent(&stud);
        }
    }
    fclose(fptr);

    return;
}

// ** Update student

void Updatestudent()
{
    FILE *fptr = NULL;
    FILE *tmp = NULL;
    struct student stud;
    tmp = fopen("temp.txt", "wb");
    if ((fptr = fopen("student.txt", "rb")) == NULL)
    {
        printf("couldn't open file\n");
        return;
    }
    else
    {
        printf("ready to read.\n");
    }
    int roll;
    printf("enter the roll no to search\n");
    scanf("%d", &roll);
    rewind(fptr); //to begining of file
    while (fread(&stud, sizeof(stud), 1, fptr) == 1)
    {
        if (roll == stud.roll)
        {
            printf("yes\n");
            printf("Enter the Name of student:\n");
            scanf("%s", stud.name);
            printf("Enter the age of student:\n");
            scanf("%d", &stud.age);
            printf("Enter the grade of student:\n");
            scanf("%f", &stud.grade);
            fwrite(&stud, sizeof(stud), 1, tmp);
        }

        else
        {
            fwrite(&stud, sizeof(stud), 1, tmp);
        }
    }
    fclose(fptr);
    fclose(tmp);
    remove("student.txt");             //removed
    rename("temp.txt", "student.txt"); // rename

    return;
}

// ** Delete student

void Deletestudent()
{
    FILE *fptr = NULL;
    FILE *tmp = NULL;
    struct student stud;
    tmp = fopen("temp.txt", "wb");
    if ((fptr = fopen("student.txt", "rb")) == NULL)
    {
        printf("couldn't open file\n");
        return;
    }
    else
    {
        printf("ready to read.\n");
    }
    int r;
    printf("enter the roll no to search\n");
    scanf("%d", &r);
    rewind(fptr);
    while (fread(&stud, sizeof(stud), 1, fptr) == 1)
    {
        DisplayStudent(&stud);
        printf("--------------\n");
        if (r != stud.roll)
        {
            fwrite(&stud, sizeof(stud), 1, tmp);
        }
    }
    fclose(fptr);
    fclose(tmp);
    remove("student.txt");             //removed
    rename("temp.txt", "student.txt"); // rename

    return;
}

void countStudent()
{
    FILE *fptr = NULL;
    struct student stud;
    int count = 0;
    if ((fptr = fopen("student.txt", "rb")) == NULL)
    {
        printf("couldn't open file\n");
        return;
    }
    else
    {
        printf("ready to read.\n");
    }
    while (fread(&stud, sizeof(stud), 1, fptr) == 1)
    {
        count++;
    }
    fclose(fptr);
    printf("the count is %d\n", count);

    return;
}

int main()
{

    int choice, i = 0;
    char ch;
    printf("Enter the choice you want\n");
    printf("-----CHOICE-----\n");
    printf(">>>1. Add student detail\n>>>2. Update details\n>>>3. Search with roll no\n>>>4. Count nof students\n>>>5. Delete student\n");
    scanf("%d", &choice);
    // The menu driven program
    do
    {

        switch (choice)
        {
        case 1:
            Addstudent();
            break;
        case 2:
            Updatestudent();
            break;
        case 3:
            Searchstudent();
            break;
        case 4:
            countStudent();
            break;
        case 5:
            Deletestudent();
            break;
        default:
            printf("invalid choice");
            break;
        }
        sleep(2);
        Clear;
        printf("Enter the choice you want\n");
        printf("-----CHOICE-----\n");
        printf("1. Add student detail\n2. Update details\n 3. Search with roll no\n 4. Count nof students\n5. Delete student\n");
        scanf("%d", &choice);

    } while (choice >= 1 && choice <= 5);

    return 0;
}