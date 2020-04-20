#include <stdio.h>


int top=-1;

int Top()
{
    return (top+1);
}

int peek(int *stack)
{
    return stack[top];
}

int isEmpty(int *stack, int n)
{
    if(top==-1){
        
        return 0;
    }

    return 1;
   
}

void push(int *stack,int n){
    int x;
    if(top == n)
    printf("Stack is Full\n");
    else 
    {
    printf("Enter the element\n");
    scanf("%d",&x);
    stack[++top] = x;
    }
    return;

}

void pop(int *stack, int n)
{
    if(isEmpty(stack,n)==0)
    {
        printf("Stack is empty\n");
        top = 0;
    }

    else
    {   printf("popped %d element\n",top);
        top--;
        
    }
    return ;
    
}

void PrintStack(int *stack)
{
    for(int i=top;i>=0;i--)
    {
        printf("element stack[%d] = %d ",i,stack[i]);
    }
    return;
}





int main(void)
{   
    int stack[100],n,choice;

    printf("enter the max size of stack\n");
    scanf("%d",&n);
    printf("enter the choice 1-push\n2-pop\n3-peek\n4-Printstack\n5-ViewSize\n");
    scanf("%d",&choice);
    
    do{ 
        switch (choice)
        {
        case 1: push(stack,n); 
                break;
        case 2 : pop(stack,n);
                break;
        case 3 : printf("the element at top is %d\n",peek(stack));
                break;
        case 4 : PrintStack(stack);
                break;
        case 5 : printf("size of stack is %d\n",Top());
                break;
        default:
            break;
        }

        printf("enter next instruction through choice\n");
        scanf("%d",&choice);
    }while(choice >=1 && choice<=5);

    return 0;
}