/*swap adjacent characters*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int t,len=0,i;
    printf("enter the string\n");
    scanf("%s",str);
   

    len = strlen(str);
    if(len%2==0)
    {
         i=0;
        while (i<len)
        {
            t = str[i];
            str[i] = str[i+1];
            str[i+1] = t;
            i+=2;
        }

        printf("The swapped string is %s: ",str);
    }
    else 
    {
        printf("Cannot swap as the length is odd\n");
    }

    



    return 0;
}



