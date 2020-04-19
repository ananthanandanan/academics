#include <stdio.h>
#include <string.h>
#define string(n)

int main() {

    long int t, cnt, i, n ; 
    

    scanf("%ld",&t);

    while(t!=0)

    {
        char s1[1000],s2[1000],s3[1000], ct;
        cnt =0;
        scanf("%s",s1);
        scanf("%s",s2);
        scanf("%s",s3);
        n = strlen(s1);
        
        for(i=0;i<n;i++)
        {
            ct = s1[i];
            s1[i] = s3[i];
            s3[i] = ct;

            if(s1[i]==s2[i])cnt++;
            else
            {
                ct = s1[i];
                s1[i] = s3[i];
                s3[i] = ct;

                ct = s2[i];
                s2[i] = s3[i];
                s3[i] = ct;

                if(s1[i]==s2[i])cnt++;
            }
            
        }

        if(cnt==n)printf("YES\n");
        else printf("NO\n");
        t--;


        

    }
    return 0;
}