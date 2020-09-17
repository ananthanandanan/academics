#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>

class Array
{
private:
    T arr[5];
    int count;

public:
    Array()
    {
        count = 0;
    }


    void Print()
    {
        
        for (int i = 0; i < count; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    void Size()
    {
        cout << "The max size is: " << (sizeof(arr) / sizeof(arr[0]));
        cout << "The current size is: " << (sizeof(arr));
    }

    void setARR(int n)
    {
        cout << "Enter the elements\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count++;
        }
    }

    void FLPrint()
    {
        cout << "First element is" << arr[0] << endl;
        cout << "Last element is" << arr[count - 1] << endl;
    }

    void Append(T e)
    {
        arr[count] = e;
        count++;
    }

    void Sort()
    {
        sort(arr, arr + count);
        this->Print();
    }

    void Swap(Array A)
    {
        T temp;
        for(int i=0;i<count;i++)
        {
            temp = A.arr[i];
            A.arr[i] = arr[i];
            arr[i] = temp;
        }

    }

    void mex(T x)
    {
        int mex=0,pos=0;
        for(int i=0;i<count;i++)
        {
            if(mex==arr[i])
            {
                mex++;
            }
            else
            {
                pos=i;
            }
            
        }
        
        for (int i = count; i > pos; i--)
            arr[i] = arr[i - 1];

        // insert x at pos
        arr[pos] = x;
        count++;
        this->Print();
    }

    void E5()
    {
        for(int i = 0; i < count; i++)
        {
            arr[i]=arr[4];
        }

        this->Print();
    }

    void E12345()
    {
        for(int i = 0; i < count; i++)
        {
            arr[i]=i+1;
        }

        this->Print();
    }


};

int main()
{
    Array<int> A1, A2;
    cout<<"Entering the first array"<<endl;
    A1.setARR(5);
    cout<<"Entering the second array"<<endl;
    A2.setARR(4);

    A1.Size();
    A2.Size();

    A1.Print();
    A2.Print();

    A1.FLPrint();
    A2.FLPrint();

    A2.mex(4);
    A1.Sort();

    A1.Swap(A2);
    A1.Print();A2.Print();
    A2.E5();
    A2.E12345();


    return 0;
}
