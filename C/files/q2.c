#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define Alloc(type, n) (type *)calloc(n, sizeof(type))
#define MatAlloc(type, n) (type **)calloc(n, sizeof(type *))
#define Malloc(type, n) (type *)malloc(n * sizeof(type))
#define Clear printf("\e[1;1H\e[2J")

struct student
{
    int roll;
    char name[30];
    float mark;
};

int main()
{
    FILE *fptr;
    struct student stud[3];
    char arr[20][20];
    int i, j;
    if ((fptr = fopen("student.txt", "rb")) == NULL)
    {
        printf("Could not open file");
        exit(0);
    }
    else
    {
        printf("Ready for reading....\n");
    }

    fread(stud, sizeof(stud), 1, fptr);
    for (i = 0; i < 3; i++)
    {
        printf("%s\n",stud[i].name);
        
    }

    fclose(fptr);
    

    return 0;
}