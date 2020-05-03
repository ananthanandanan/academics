/*Create a library catlog that search and returns the cupboead and rack no*/

#include<stdio.h>
#include<string.h>

void Readit(char C[10][5][50],int NoC,int NoR)
{   
    int i,j,k;
    for(i=0;i<NoC;i++)
    {
        for(j=0;j<NoR;j++)
        {
            
            
                printf("Enter the name of Book at C-%d-R%d\n",i+1,j+1);
                scanf("%s",C[i][j]);
                    
        }
    }


}

void Searchlib(char C[10][5][50], char *title, int NoC, int NoR)
{
        int i,j, flag=0;
        for(i=0;i<NoC;i++)
    {
        for(j=0;j<NoR;j++)
        {
            if(strcmp(C[i][j],title)==0)
            flag=1;

            
            
                    
        }
    }
    if(flag>0) printf("The Book is found at C-%d R-%d\n ",i,j);
    else 
    printf("No such Book found in catalog\n");


}


int main() {

    char cupboard[10][5][50], title[50];
    int NoC,NoR;
    printf("Enter the no of cupboards\n");
    scanf("%d",&NoC);
    printf("Enter the no of racks\n");
    scanf("%d",&NoR);
    Readit(cupboard,NoC,NoR);
    printf("enter the title to search\n");
    scanf("%s",title);
    Searchlib(cupboard,title, NoC,NoR);
    
    


    return 0;
}