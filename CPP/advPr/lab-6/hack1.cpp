#include <bits/stdc++.h>

using namespace std;

int main()
{
    int iCount;
    set<int> number;
    cin >> iCount;
    for (int i = 0; i < iCount; ++i)
    {
        int type, query;
        cin >> type >> query;
        switch (type)
        {
        case 1:
            number.insert(query);
            break;
        case 2:
            number.erase(query);
            break;
        case 3:
            cout << (number.find(query) == number.end() ? "No" : "Yes") << endl;
            break;
        }
    }
    return 0;
}
