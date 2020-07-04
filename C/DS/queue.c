#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE];

int front = -1;
int rear = -1;


void enqueue(int value)
{
    
        if (rear == MAXSIZE - 1)
        {
            printf("the queue is overflow!!!");
        }
        else
        { if(front==-1)
            front=0;
            rear++;
            
        }
        queue[rear]=value;
    

}

void dequeue()
{
    if (front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        
        front++;
    }
    if(front==rear)
    {
        front=rear=-1;
    }
}

int Front()
{
    if (front == -1)
    {
        printf("queue empty\n");
        return 0;
    }
    else
    return queue[front];
}

void display()
{
    int i;

    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{

    int choice, n;
    printf("enter the max size of stack\n");
    scanf("%d", &n);
    printf("enter the choice 1-push\n2-pop\n3-peek\n4-Printstack\n5-ViewSize\n");
    scanf("%d", &choice);

    do
    {
        switch (choice)
        {
        case 1:
            enqueue(5);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("the element at top is %d\n", Front());
            break;
        case 4:
            display();
            break;
        default:
            break;
        }

        printf("enter next instruction through choice\n");
        scanf("%d", &choice);
    } while (choice >= 1 && choice <= 5);

    return 0;
}
Comp