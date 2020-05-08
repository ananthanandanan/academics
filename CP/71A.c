#include<stdio.h>
int main()
{
    char x[110],y;
    int n;
    scanf("%d\n",&n);
    for(;gets(x),n--;)
    if((y=strlen(x))>10)
        printf("%c%d%c\n",*x,y-2,x[y-1]);
    else
        puts(x);
}