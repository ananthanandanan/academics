#include <stdio.h>

#define MAX(a, b) ((a) < (b) ? (b) : (a))

void occur(char *str)
{
    int i,j,max=0,ch;
    for(i=0;str[i]!='\0';i++)
    {
        char test = str[i];
        int cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(test==str[j])
            cnt++;
        }
        if(max<cnt)
        {
            max=cnt;
            ch = test;
        }
    }
    printf("%c:%d",ch,max);
    return;
    
}

int main() 
{   
    char str[50];
    printf("enter the string\n");
    scanf("%s",str);
    occur(str);

    return 0;
}