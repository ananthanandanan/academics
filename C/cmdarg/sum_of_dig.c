#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long num, temp, digit, sum = 0;
    if (argc == 1 || argc > 2)
    {
        printf("Enter the number\n");
        exit(1);
    }
    num = atoi(argv[1]);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    printf("Sum of the digits of %ld = %ld\n", temp, sum);
}