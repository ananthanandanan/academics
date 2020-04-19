

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long int  a,n,b,i,j,dk,ck=0,len=0;
    char arr[1000];
    scanf("%s",arr);
    len = strlen(arr);
   
    for(i = 0; i < len; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'n')
        {
            continue;
        }
        else{
            if(arr[i + 1] == 'a' || arr[i + 1] == 'e' || arr[i + 1] == 'i' || arr[i + 1] == 'o' || arr[i + 1] == 'u')
                continue;
            else
            {   printf("NO");
                exit(0);

            }
                
        }
    }

    printf("YES");

    return 0;


}