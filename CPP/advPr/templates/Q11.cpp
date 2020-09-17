#include <iostream>

using namespace std;

template <typename T>

void Remove(T *data, T remove_me, int n)
{
    int op = 0, inp = 0;
    for (inp = 0; inp < n; inp++)
    {
        if (data[inp] != remove_me)
        {
            data[op++] = data[inp];
        }
    }
    for (int i = 0; i < op; i++)
    {

        cout << data[i] << " ";
    }
    cout << endl;
    cout << "The length is " << op << endl;
}

int main()
{
    int nums[] = {3,2,2,3};
    int n = sizeof(nums)/sizeof(nums[0]);
    int val=3;
    Remove<int>(nums,val,n);
    return 0;
}