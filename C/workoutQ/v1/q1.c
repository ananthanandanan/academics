#include <stdio.h>

int main() {
    int x, s=0,n;

    printf("This is a program for adding n numbers. Enter the limit n\n");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        s = s+x;

    }

    printf("sum of elements is %d",s);
    return 0;
}


/* output
This is a program for adding n numbers. Enter the limit n
5
enter the elements1
2
3
4
5
sum of elements is 15

This program scans the input and adds it to the variable 's' */
