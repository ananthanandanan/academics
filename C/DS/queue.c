#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE];

int front = -1;
int rear = -1;
int size = -1;

int isempty()
{
    return size<0;
}

int isfull()
{
    return size == MAXSIZE;
}

void enqueue(int value)
{
    if(size<MAXSIZE)
    {
        if(size<0)
        {
            queue[0] = value;
            front = rear = 0;
            size = 1;
        }
        else if(rear == MAXSIZE-1)
        {
            queue[0] = value;
            rear = 0;
            size++;
        }
        else
        {
            queue[rear+1] = value;
            rear++;
            size++;
        }
    }
    else
    {
        printf("Queue is full\n");
    }
}

int dequeue()
{
    if(size<0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        size--;
        front++;
    }
}

int Front()
{
    return queue[front];
}

void display()
{
    int i;
    
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
    
    }


int main()
{
    
    int choice, n;
    printf("enter the max size of stack\n");
    scanf("%d",&n);
    printf("enter the choice 1-push\n2-pop\n3-peek\n4-Printstack\n5-ViewSize\n");
    scanf("%d",&choice);
    
    do{ 
        switch (choice)
        {
        case 1: enqueue(5); 
                break;
        case 2 : dequeue();
                break;
        case 3 : printf("the element at top is %d\n",Front());
                break;
        case 4 : display();
                break;
        default:
            break;
        }

        printf("enter next instruction through choice\n");
        scanf("%d",&choice);
    }while(choice >=1 && choice<=5);

    return 0;
}
Comp