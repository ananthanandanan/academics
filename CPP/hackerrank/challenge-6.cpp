#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    set<int> s;
    int N = 0, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int q = 0, x = 0;
        cin >> q;
        cin >> x;
        if (q == 1)
        {
            s.insert(x);
        }
        else if (q == 2)
        {
            s.erase(x);
        }
        else
        {
            set<int>::iterator itr = s.find(x);
            if (itr == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}