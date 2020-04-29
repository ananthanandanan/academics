#include <stdio.h>

void initiate(int a[10][10], int n, int m)
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

void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void Sort(int p[10], int n)
{   
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                swap(&p[j], &p[j+1]);
            }
        }
    }

    return ;

}

void Insert(int a[10][10], int n,int m, int p[10])
{
    int k=0;
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            if(r+c==(n-1))
            {
                a[r][c] = p[k++];
            }
        }
    } 
    
}

void anti_pick(int a[10][10], int n, int m,int p[10] )
{   int k=0;
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            if(r+c==(n-1))
            {
                p[k++] = a[r][c];
            }
        }
    } 
    return ;   
}



int main() {

    int A[10][10],pick[10],row,col;
    printf("enter the rows and columns:\n");
    scanf("%d",&row);
    scanf("%d",&col);

    //declare the array
    initiate(A, row, col);
    anti_pick(A, row, col, pick);
    Sort(pick, row);
    Insert(A, row, col, pick);

    printf("New matrix is:\n");

    for(int i = 0; i < row; i++) 
    { 
        for (int j = 0; j < col; j++) 
        {
             printf("%d ", A[i][j]); 
             
        }
        printf("\n"); 
       
    } 





    return 0;
}