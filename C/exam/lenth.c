#include <stdio.h>
#include <string.h>
int main() {

    char str1[20] ="hello";
    char str2[20] = "hell";
    int c;
    c = strcmp(str2,str1);
    printf("%d",c);
    return 0;
}