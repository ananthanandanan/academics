
// Class for queue
public class MyQueue 
{
	private int arr[];  		
	private int front;  		
	private int rear;   		
    private int capacity;   	
    private int count;  		
	
	MyQueue(int size)
	{
		arr = new int[size];
		capacity = size;
		front = 0;
		rear = -1;
		count = 0;
	}

	public void dequeue()
	{

		if (isEmpty())
		{
			System.out.println("UnderFlow\nProgram Terminated");
			System.exit(1);
		}

		System.out.println("Removing " + arr[front]);

		front = (front + 1) % capacity;
		count--;
	}
	public void enqueue(int item)
	{
		// check for queue overflow
		if (isFull())
		{
			System.out.println("OverFlow\nProgram Terminated");
			System.exit(1);
		}

		System.out.println("Inserting " + item);

		rear = (rear + 1) % capacity;
		arr[rear] = item;
		count++;
	}

	public int peek()
	{
		if (isEmpty()) 
		{
			System.out.println("UnderFlow\nProgram Terminated");
			System.exit(1);
		}
		return arr[front];
	}

	public int size()
	{
		return count;
	}

	
	public Boolean isEmpty()
	{
		return (size() == 0);
	}

	public Boolean isFull()
	{
		return (size() == capacity);
    }
    
    public void Display()

    {
        for(int i=front;i<=rear;i++)
        {
            System.out.println(arr[i] + " ");
        }
    }
	

	
}