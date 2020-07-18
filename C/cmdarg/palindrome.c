#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Palindrome(char *string)
{

    int begin, end;
    begin = 0;
    end = strlen(string) - 1;
    while (end > begin)
    {
        if (string[begin++] != string[end--])
        {
            printf("%s not a palindrom\n", string);
            return;
        }
    }
    printf("it is a palindrom\n");
    return;
}

int main(int argc, char *argv[])
{
    char *string;
    int i, count, len, begin, end;
    if (argc >= 2)
    {
        printf("the arguments are passed\n");
    }
    for (i = 1; i < argc; i++)
    {
        Palindrome(argv[i]);
    }

    return 0;
}
