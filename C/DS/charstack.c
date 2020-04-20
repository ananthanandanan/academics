#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
char stack[SIZE],top=-1;
int n;
void push(char item)
{
    if (top==n-1)
        printf("stack Overflow\n");
    else
    {
        top++;
        stack[top]=item;
    }       
    
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else 
        return 0;
}
void pop()
{
    if(isEmpty())
        printf("Stack underflow\n");
    else
    {
        
        printf("%d is the deleted element\n",stack[top]);
        top--;
        
    }
    
}
char peek()
{
   return stack[top];
}
void printstack()
{
    for(int i=0;i<=top;i++)
        printf(" %c ",stack[i]);
    printf("\n");
}

int main()
{
int choice;
char item;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    do
    {
       printf("MENU\n1. Insert an element.\n2. Delete an element.\n3. View element at the top.\n4. View all the elements.\n5. Exit.\n");
       printf("Enter your choice : ");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
                    {
                        printf("Enter the element to be inserted : ");
                        scanf(" %c",&item);
                        push(item);
                        break;
                    }
            case 2:
                    {
                        pop();
                        break;
                    }
            case 3:
                    {
                        if(isEmpty())
                            printf("Stack underflow");
                        else
                        {
                            printf(" %c is the element at the top\n",peek());
                        }
                        break;
                    }  
            case 4:
                    {
                        printstack();
                        break;
                    } 
            case 5:
                    {
                        exit(0);
                    }
            default : 
                    {
                        printf("Wrong choice");
                        break;
                    }
       }
    } while (choice<=5);
   
return 0;
}
