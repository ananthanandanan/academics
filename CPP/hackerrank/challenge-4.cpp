#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string x;
    int y;
    map<string, int> a;
    while (t)
    {
        int c;
        cin >> c;
        cin >> x;
        if (c == 1)
        {
            cin >> y;
            if (a.find(x) == a.end())
                a.insert(make_pair(x, y));
            else
                a[x] += y;
        }
        else if (c == 2)
            a[x] = 0;
        else if (c == 3)
        {
            if (a.find(x) == a.end())
                cout << 0 << endl;
            else
                cout << a.at(x) << endl;
        }
        t--;
    }
}