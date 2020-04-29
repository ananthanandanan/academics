#include<stdio.h>
void initiate(int a[10][10],int n)
{
    printf("elements?\n");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<n;++c)
        {
            scanf("%d",&a[r][c]);
        }
    }
}
void print(int a[10][10],int n)
{
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<n;++c)
        {
            printf("%d",a[r][c]);printf("  ");
        }
        printf("\n");
    }

}
void insertion(int a[10][10],int d[10],int n)
{
    int i=0;
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<n;++c)
        {
            if(c==n-1-r)
            {
                a[r][c]=d[i];i+=1;
            }
        }
    }
    print(a,n);
}

void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void sort(int a[10][10],int d[],int n)
{
    for(int i=0;i<=n-1;++i)
    {
        for(int j=0;j<=n-1-i;++j)
        {
            if(d[j]>d[j+1])
            {
                swap(d[j],d[j+1]);
            }
        }
    }
    insertion(a,d,n);
}


int antidia(int a[10][10],int n)
{
    int d[10],i=0;
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<n;++c)
        {
            if(c==n-1-r)
            {
                d[i]=a[r][c];i+=1;   
            }
        }
    }
    sort(a,d,n);
}
void main()
{
    int a[10][10];
    int n;
    printf("rows or columns?");
    scanf("%d",&n);
    initiate(a,n);
    antidia(a,n);

}