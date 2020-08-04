#include <stdio.h>


int main() {

    int i,n,res=0;

    scanf("%d",&n);

    char str[n];
    scanf("%s",str);

   for (i=0; i<n; i+=2)
        {
            if (!((str[i] == 'a' && str[i+1] == 'b') || (str[i] == 'b' && str[i+1] == 'a')))
            {   ++res;
                if (str[i] == 'a')
                    str[i] = 'b';
                else
                    str[i] = 'a';

                
            }
        }

        printf("%d\n%s\n",res,str);

        return 0;
    }
    
    
