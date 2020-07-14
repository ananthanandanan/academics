#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define Clear printf("\e[1;1H\e[2J")

int main() {

    FILE *fptr;
    char ch;
    int words,characters;
    words = characters = 0;

    if((fptr = fopen("countwords.txt","r"))==NULL)
    {
        printf("file cant be opened..\n");
        exit(0);
    }
    else
    {
        printf("ready to read\n");
    }
    while((ch=fgetc(fptr))!=EOF)
    {
        characters++;
        if(ch ==' ')
        {
            words++;
        }

    }

    if(characters>0)
    words++;
    fclose(fptr);
    printf("the no of words :%d \n no of character is%d\n", words,characters);
    return 0;
}