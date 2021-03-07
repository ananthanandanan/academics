#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    fork();
        printf("1");

    if (fork())
    {
        fork();
    }
    fork();
}