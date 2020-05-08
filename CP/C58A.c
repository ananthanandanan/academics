#include <stdio.h>
#include<string.h>

 char s[] = "hello";
int main() {

    char n[20];
    int cnt=0, sj=0;
    scanf("%s",n);
   int lens = strlen(n);

    for(int i=0;i<lens;i++)
    {
       if(n[i]==s[sj]){   
           sj++;
           cnt++;

           if(cnt == 5){
               break;
                       }



       }


    }

    if(cnt == 5){
        printf("YES");
    
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}

