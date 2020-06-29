#include <stdio.h>
#include <string.h>


void nonRepeat(char *str,char *sub)
{   
    int i,j,k,cnt;
    int arr[256] = {0};
    int len = strlen(str);
    for(i=0;i<len;i++)
    {  
        sub[k++] = str[i]; // saved it to substring
        if(arr[str[i]]==0)  //check if it is visited or not
        arr[str[i]]++;      // if not visited then increment it
        else
        {
            sub[0]=0;       // visited, then empty the string
            arr[str[i]]=0; // reset the visit array
        }
    }

}

int main() 

{

    char str[50],sub[30];
    printf("enter the string\n");
    scanf("%s",str);

    return 0;
}