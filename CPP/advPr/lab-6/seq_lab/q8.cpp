#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    long int z;
    while (t--)
    {
        cin >> n >> z;
        int i;
        priority_queue<int> q;
        int x;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            q.push(x);
        }
        int r = 0;
        int t = 0;
        int y = q.top();
        while (z > 0)
        {
            z = z - y;
            q.pop();
            r++;
            q.push(y / 2);
            y = q.top();
            if (y == 0)
            {
                t = 1;
                break;
            }
        }
        if (!t)
            cout << r << endl;
        else
            cout << "Evacuate" << endl;
    }
}
