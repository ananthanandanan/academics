#include <stdio.h>
#define MaxSize 100

int stackA[MaxSize],stackB[MaxSize],stackC[MaxSize];

int sizeA=0,sizeB=0,sizeC=0;

void Push(int *stack,int item, int *size)
{
	if((*size)>MaxSize)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		stack[*size] = item;
		(*size)++;
	}
}

int Pop(int *stack, int *size)
{
	if( (*size) <= 0 )
	{
		return -1;
	}
	else
	{
		int x = stack[(*size)-1];
		(*size)--;
		return x;
	}
}

void copy_A_to_C()
{
	int x;
	while ( sizeA > 0 )  
	{
		x = Pop( stackA, &sizeA);
		Push( stackB, x, &sizeB);
	}
	while ( sizeB > 0 )
	{
		x = Pop( stackB, &sizeB);
		Push( stackC, x, &sizeC);
	}
}

void PrintStack(int *stack)
{
    for(int i=sizeC-1;i>=0;i--)
    {
        printf("element stack[%d] = %d ",i+1,stack[i]);
    }
    return;
}

int main()
{
	int size, I, item;
    printf("enter the size\n");
	scanf("%d",&size);

	for(I = 0; I<size; I++)
	{   printf("enter the item\n");
		scanf("%d",&item);
		Push( stackA, item, &sizeA);
	}
	copy_A_to_C();
    PrintStack(stackC);
	return 0;
}