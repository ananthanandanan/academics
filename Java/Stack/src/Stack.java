public class Stack {

    private int size;
    private int top;
    private int[] array;

    public Stack(int n) {
        size = n;
        top = -1;
        array = new int[n];

    }

    public void Push(int item) {
        array[++top] = item;
    }

    public int Pop() {

        return array[top--];

    }
    public int Peek() {
        return array[top];
    }

    public boolean itsFull() {

        return (top == size - 1);
    }

    public boolean isEmpty()

    {
        return (top == -1);
    }

    public void Display()

    {
        for(int i=top;i>=0;i--)
        {
            System.out.println(array[i] + " ");
        }
    }

}
