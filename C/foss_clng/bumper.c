#include<stdio.h>
#include <stdlib.h>

#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define Add(x,y) x+y

int main()
{
    int X, N, *pos, *dir,i,j,max=0,count;
    float dist;
    scanf("%d %d",&X,&N);
    pos = Alloc(int,X);
    dir = Alloc(int,X);

    for(i=0;i<X;i++) 
    scanf("%d",&pos[i]);
    for(i=0;i<X;i++) 
    scanf("%d",&dir[i]);

    for(i=(X-1);i>=1;i--)
    {   
        count=0;
        if(dir[i]==-1)
        {
                for(j=(i-1);j>=0;j--)
            {
                if(dir[j]==1)
                {  
                    dist = (Add(pos[j],pos[i]))/2.0;
                    max = MAX(max,(2*(pos[i]-dist))+((N+1)-pos[i]));
                    dir[j]*=-1;
                    count++;
                    break;
                }
            }
            if(count==0)
            {   
                max = MAX(max,pos[i]);
                
                
            }
            
            
        }
        else if(dir[i]==1)
        {   
            max = MAX(max,(N+1)-pos[i]);
        
            
        }
        
        
        
    }

    printf("%d\n",max);
    
    
    free(pos);
    free(dir);

    return 0;
}
