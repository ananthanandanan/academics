#include <stdio.h>
#define SIZE 100

void copy(int *a1, int *a2, int *limit)
{

    for (int i = 0; i < *limit; i++)
    {
        *(a2 + i) = *(a1 + i);
    }
    return;
}

int main()
{

    int a1[SIZE], a2[SIZE], limit;
    printf("Enter the limit of array:\n");
    scanf("%d", &limit);
    printf("Enter the elements of a1:\n");

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &a1[i]);
    }

    copy(a1, a2, &limit);

    printf("elements of a2 are:\n");

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", a2[i]);
    }

    return 0;
}

/*
7
In *p++ the address is getting incremented whereas in (*p)++ the value the pointer is pointing to gets incremented.
8
a) valid
b) valid
c) valid
d) invalid
e) invalid
f) valid
g) valid
h) valid
i) valid*/