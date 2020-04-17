#include <stdio.h>
#include <string.h>
#include <ctype.h>


char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

int main() {

    char str[20];
    int len=0,i,j,cnt;
    scanf("%s",str);

    len = strlen(str);

    strlwr(str);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {   cnt++;
                break;

            }
        }
        if(cnt==1){
            break;
        }
        
    }

    if(cnt>=1)
    printf("No");
    else
    printf("Yes");
    
    return 0;
}