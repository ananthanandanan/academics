#include <stdio.h>

int main() {

    int f,sec,num;
    char s[20];

    printf("enter the number\n");
    scanf("%s",s);

    f = (int)s[0]-48;
    sec = (int)s[1]-48;

    num = f*10 + sec;
    printf("The mod of %d is %d",num,(num%5));


    return 0;
}