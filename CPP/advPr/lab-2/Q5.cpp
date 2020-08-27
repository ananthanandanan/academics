#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string arr[3];
    cout<<"enter the three strings"<<endl;
    cin>>arr[0]>>arr[1]>>arr[2];
    int size = sizeof(arr) / sizeof(*arr);
    if (size == 0)
    {
        cout << "" << endl;
    }
    else if (size == 1)
    {
        cout<< arr[0] << endl;
    }
    else
    {
    std:sort(arr, arr + size);
        int length = arr[0].size();// take length of random string
        string result = "";
        for (int i = 0; i < length; i++)
        {
            if (arr[0][i] == arr[size - 1][i])
            {
                result += arr[0][i];
            }
            else
            {
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}
