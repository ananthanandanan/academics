#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printMax(int arr[], int n, int k)
{
    deque<int> d;
    for (int i = 0; i < k; i++)
    {
        d.push_back(arr[i]);
    }
    int m = *max_element(d.begin(), d.begin() + k);
    cout << m << " ";
    for (int i = k; i < n; i++)
    {
        d.push_back(arr[i]);
        if (d[0] == m)
        {
            d.pop_front();
            m = *max_element(d.begin(), d.end());
            cout << m << " ";
        }
        else
        {
            d.pop_front();
            if (arr[i] > m)
            {
                m = arr[i];
            }
            cout << m << " ";
        }
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printMax(arr, n, k);
        t--;
    }
    return 0;
}