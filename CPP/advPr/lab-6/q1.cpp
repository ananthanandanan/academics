#include <set>
#include <iostream>
using namespace std;
bool myfunc(set<int> a, int x)
{
    cout << endl;
    set<int>::iterator l = a.find(x);
    cout<<"The end of this array is:"<<*l<<endl;
    for(int l:a) cout<<l<<' ';
    cout<<endl;
    if (l == a.end() && *l != x)
        return true;
    return false;
}
int main()
{
    set<int> a;
    cout << "Enter the no of iterations:";
    int n;
    cin >> n;
    for (int i = n - 1; i > -1; i--)
    {
        cout << "1-to insert,2-search" << endl;
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            int x;
            cin >> x;
            if (myfunc(a, x))
                a.insert(x);
            else
                cout << "The element is already there"<<endl;
            break;
        case 2:
            cout << "which element do u want to find:";
            int s;
            cin >> s;
            if (a.empty())
                cout << "The set is empty" << endl;
            else if (myfunc(a, s))
                cout << "The element(" << s << ") has not been found";
            else
                cout << "The element(" << s << ") has been found";
            cout << endl;
            break;
        }
    }
}