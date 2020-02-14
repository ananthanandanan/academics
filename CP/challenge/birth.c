#include <stdio.h>

int main()
{
    int q,n,m;
    scanf("%d",&q);

    while(q!=0)
    {
        scanf("%d%d",&n,&m);
        if(m%n==0)printf("YES\n");

        else
        { printf("NO\n");
        
        }

        q--;
        
    }
    return 0;
}