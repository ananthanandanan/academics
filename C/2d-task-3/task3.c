/*Copyright claim to Kasthuri*/

#include<stdio.h>
#include<string.h>
#define size 15000
void ReadTitle(int n, int m ,char a[n][m][size])
{
    int i=0,j=0,k=0;
    printf("Enter the title of the books\n");
    while(i<n)
    {
        for(j=0;j<m;j++)
            {
                printf("%d %d\n",i,j);
                fgets(a[i][j],100,stdin);
            }
        i++;
    }
}
void search(char *p, int n, int m, char a[n][m][15000])
{
    int i=0,j=0,k=0,s=0;
    for(int i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(strcmp(a[i][j],p)==0)
            {
                s=1;
                break;
            }
    if(s==1)
        printf("%d and %d are the cupboard and rack number of the book\n",i+1,j+1);
    else
        printf("The book is not in the library");
    
}
int main()
{ 
    char a[10][5][size];
    int cb,racks;
    char c[100];
    printf("Enter the no of cupboards(<=10) and the no of racks(<=5) : ");
    scanf("%d %d",&cb,&racks);
    ReadTitle(cb,racks,a);
    printf("Enter the title of the book to be searched : \n");
    fgets(c,sizeof(c),stdin);
    search(c,cb,racks,a);
    return 0;
}
