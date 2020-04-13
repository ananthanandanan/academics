/* 13-4-20
*Ananthan2k

Using arrays help a car service centreserve cars based on aQUEUE which followsaFirst Come  first  Serve  order..As  the  customerswalk  in,  they  registertheir  vehicle  no  into  the array.At  any  time admin  at  toll  boothshould  be  able  to  get  the  ticket  no  to  be  serviced NOWwhich should strictly follow the FCFS strategy.Once the service centre complete the serviceof a vehicle,they should have option to delete the ticket from the QUEUE.Note that arraywill result inaQUEUE data structure which follows a FIRST IN FIRST OUT (FIFO) strategy.
Functions to be implemented: 
REGISTER ( Incoming customer should register with carno)
WHONEXT  (  At  any  time  admin  should  know  which  car  is  waiting  next  in  the QUEUE)
DELETE  (  Once  service  is  completed,  admin  should  delete  the  car  from  the QUEUE)
DISPLAYQUEUE (At point of time queue should be displayed in FCSF order)
In one run of the program, the user should be able to call the above functions as many times as he/she wants. Do a choice based iteration.*/
int rear=0, front=0;
#include<stdio.h>
#include<stdlib.h>

void REGISTER(int queue[],int car_no)
{
        if (rear==100)
		printf("Queue overflow");
	else
	 {	
		printf("Entering vehicle number %d at position %d",car_no,rear+1);
		queue[rear++]=car_no;
	 }
    printf("\n");
}

int WHONEXT(int queue[])
{
    return queue[front];
}

void DISPLAYQUEUE(int queue[])
{
   printf("Queue of vehicles :");
		for (int i=front;i<rear;i++)
			printf("%d ", queue[i]);
    printf("\n");
}

void DELETE(int queue[])
{
    if (front==rear)
			printf("Queue underflow");
	else
			printf("Deleting vehicle number %d at position %d \n",queue[front],front+1); 
	front++;
}

int main()
{
    int choice=0, queue[100],car_no;
    do
	{
		printf("Welcome to the Car service Centre\n");
		printf("1. Register\n2. Next customer number\n3. Delete tickets\n4. Display the queue\n5. Exit\n");
        printf("Enter the choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1: 
                 {
                    printf("Please enter the vehicle number : ");
                    scanf("%d",&car_no);
                    REGISTER(queue,car_no);
                    break;
                 }

			case 2: 
                  {
                   printf("%d\n",WHONEXT(queue));
                   break;
                  }

			case 3: 
                  {
                   DELETE(queue);
                   break;
                  }
			case 4:
                 {
                    DISPLAYQUEUE(queue);
                    break;
                 }
            case 5:
                    exit(0);

			default: puts("Enter a valid choice");
		}

}while (choice!=5);
    return 0;
}




