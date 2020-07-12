#include <stdio.h>

int main()
{
    char a[10];
    char b[10];

    scanf("%s", a);
    getchar();
    printf("%s \n", a);

    fgets(b, 10, stdin);
    puts(b);
    return 0;
}