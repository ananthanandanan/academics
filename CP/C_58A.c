#include<stdio.h>
char B[10]="hello",b;
int main()
{
    int i =0;
    while(scanf("%c",&b)&&b!='\n')
    if(b==B[i])
    {
        i++;
    }
    printf(i==5?"YES":"NO");
}