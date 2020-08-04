#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*macro*/
#define SIZE 50
#define Add(x, y) x + y
#define Mult(x, y) x *y
#define Div(x, y) x / y
#define Mod(x, y) x % y
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define Swap(a, b) a ^= b ^= a ^= b;
#define Alloc(type, n) (type *)calloc(n, sizeof(type))
#define MatAlloc(type, n) (type **)calloc(n, sizeof(type *))
#define Malloc(type, n) (type *)malloc(n * sizeof(type))

// Declare linked list node

struct Node
{
    int data;
    struct Node *link;
};

struct Node *top;

// insert at the beginning
void push(int data)
{
    // create new node temp and allocate memory
    struct Node *temp;
    temp = Malloc(struct Node, 1);

    temp->data = data;

    temp->link = top;

    top = temp;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{
    // check for empty stack
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    struct Node *temp;

    // check for stack underflow
    if (top == NULL)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    else
    {

        temp = top;

        top = top->link;

        temp->link = NULL;

        free(temp);
    }
}

void display()
{
    struct Node *temp;

    // check for stack underflow
    if (top == NULL)
    {
        "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            printf("%d ", temp->data);

            temp = temp->link;
        }
    }
}

int main()
{
    int choice, item;
    printf("enter the choice 1-push\n2-pop\n3-peek\n4-Printstack\n5-ViewSize\n");
    scanf("%d", &choice);
    do
    {
        switch (choice)
        {
        case 1:
            printf("enter the data\n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("the element at top is %d\n", peek());
            break;
        case 4:
            display();
            break;
        default:
            break;
        }

        printf("enter next instruction through choice\n");
        scanf("%d", &choice);
    } while (choice >= 1 && choice <= 4);

    return 0;
    // This code has been contributed by Striver
}

