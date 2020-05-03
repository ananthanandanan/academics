/*Create a library catlog that search and returns the cupboead and rack no*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int add=0;
void Addit(char C[10][5][50],int NoC,int NoR, int *add)
{   
    int i,j,k;
    for(i=0;i<NoC;i++)
    {
        for(j=0;j<NoR;j++)
        {
            
                if(C[i][j]!=NULL)
                  { 
                    if(*(add)<=0)
                    {   
                        printf("Reached the max book to be added\n");
                        add=0;
                        return;
                    } 
                    printf("Enter the name of Book at C-%d-R%d\n",i+1,j+1);
                    scanf("%s",C[i][j]);
                    (*add)--;
                    

                  }
                  else
                  continue;    
        
        }
    }


}

void Searchlib(char C[10][5][50], char *title, int NoC, int NoR)
{
        int i,j,cud,rack, flag=0;
        for(i=0;i<NoC;i++)
    {
        for(j=0;j<NoR;j++)
        {
            if(strcmp(C[i][j],title)==0)
            {   
                cud=i+1;
                rack=j+1;
                flag=1;
                break;
            }
            
            
                    
        }
    }
    if(flag==1) printf("The Book is found at C-%d R-%d\n ",cud,rack);
    else 
    printf("No such Book found in catalog\n");


}


int main() {

    char cupboard[10][5][50], title[50];
    int NoC,NoR, choice;
    printf("Enter the no of cupboards\n");
    scanf("%d",&NoC);
    printf("Enter the no of racks\n");
    scanf("%d",&NoR);
    printf("enter the no of books to be added\n");
    scanf("%d",&add);
    printf("enter the choice\n");
    scanf("%d",&choice);

    // a menu-driven block
    do{
        switch(choice)
        {
        case 1: Addit(cupboard,NoC,NoR,&add);
                break;
        case 2: printf("enter the title to search\n");
                scanf("%s",title);
                Searchlib(cupboard,title, NoC,NoR);
                break;
        case 3: printf("add more books\n");
                scanf("%d",&add);
                break;
        case 4 : exit(0);
        }  
        printf("enter the choice\n");
        scanf("%d",&choice);
             

    }while(choice>=1 && choice <=3);
    


    return 0;
}