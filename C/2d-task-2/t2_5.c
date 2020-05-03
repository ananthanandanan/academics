#include<stdio.h>
void read(int a[10][10],int n)
{
    printf("elements?");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
} 
void updatematrix(int a[10][10],int c,int n)
{
    for(int x=0;x<n;++x)
    {
        a[x][c]=-1000000;
    }
}
void optimal(int a[10][10],int n)
{
    for(int r=0;r<n;++r)
    {
        int d=100000000,j,i=0;
        for(int c=0;c<n;++c)
        {
            int s=a[r][c];
            for(int r1=0;r1<n;++r1)
            {
                if(r1==r)
                {
                    continue;
                }
                s-=a[r1][c];
            }
            if(d>s)
            {
                d=s;
                j=c;
            }
            
        }
        printf("worker %c is assigned job %d\n",65+r,j+1);
        updatematrix(a,j,n);
    }

}
int  main()
{
    int a[10][10],n;
    printf("columns or rows?");
    scanf("%d",&n);
    read(a,n);
    optimal(a,n);
    return 0;

}