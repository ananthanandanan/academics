#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> Front, Rear;
    int Query;
    cin >> Query;
    while (Query--)
    {
        int k, x;
        cin >> k;
        if (k == 1)
        {
            cin >> x;
            Rear.push(x);
        }
        else
        {
            if (Front.empty())
            {
                while (!Rear.empty())
                {
                    Front.push(Rear.top());
                    Rear.pop();
                }
            }
            if (!Front.empty())
            {
                if (k == 2)
                    Front.pop();
                if (k == 3)
                    cout << Front.top() << endl;
            }
        }
    }
    return 0;
}