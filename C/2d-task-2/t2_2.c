#include <stdio.h>
void initiate(int a[10][10],int n,int m)
{   
    printf("elements?\n");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            scanf("%d",&a[r][c]);
        }
    }
}

void wiggly(int a[10][10],int n,int m)
{
    int i=0;
    for(int c=n-1;c>=0;--c)
    {
        if(i%2==0) // top to bottom row - 0,12...n-1 and if coumn is oddd row n-1 to 2,1,0 
        {
            for(int r=0;r<m;++r)
            {
                printf("%d",a[r][c]);printf(" ");
                
            }
            i+=1;
        }
        else
        {
            for(int r=m-1;r>=0;--r)
            {
                printf("%d",a[r][c]);printf(" ");
                
            }
            i+=1;
        }
    }
}

int main()
{
    int a[10][10];
    int n,m;
    printf("rows?");
    scanf("%d",&n);
    printf("columns?");
    scanf("%d",&m);
    initiate(a,n,m);
    wiggly(a,n,m);

    return 0;
}
