/*13-4-20
*Ananthan2k
imagine  you  are maintaining  a  deck  of  cards  in  LAST –IN-FIRST  OUT  fashion.  Any  card which is inserted at the end will come out first. Do a choice based iteration of the following functions.
INSERT:  Should be able insert into the DECK.
DISPLAYDECK: should display the status of deck in the order
DELETE: Should delete the lastly inserted element.
PEEP: At any time, PEEP shoulddisplaythe next element in the DECK. */
#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top=0,x,i;
void INSERT();
void PEEP();
void DISPLAYDECK();
void DELETE();
int main()
{
    top=-1;
    printf("Enter the max size of stack(<100):");
    scanf("%d",&n);
   
    do
    {
         printf("\n1. Insert into the deck.\n2. See the next element.\n3. Display the elements.\n4. Delete from deck.\n5. Exit\n");
        printf("\n Enter the Choice:");
        printf("\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                INSERT();
                break;
            }
            case 2:
            {
                PEEP();
                break;
            }
            case 3:
            {
                DISPLAYDECK();
                break;
            }
            case 4:
            {
                DELETE();
                break;
            }
            case 5:
             {
                 exit(0);
             }
            default:
            {
                printf ("Please Enter a Valid choice\n");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}
void INSERT()
{
    if(top>=n-1)
    printf("Stack overflow\n");
    else
    {
        printf(" Enter a value to be inserted:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void PEEP()
{
    if(top<=-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The element is : %d\n",stack[top]);
    }
}
void DISPLAYDECK()
{
    if(top>=0)
    {
        printf("The current status of the deck : ");
        for(i=top; i>=0; i--)
            printf("%d ",stack[i]);
        printf("\n");
    }
    else
    printf("The array is empty\n");
}
void DELETE()
{
    printf("The element %d is deleted from the deck\n.",stack[top]);
    top--;
}


