using namespace std;
#include <bits/stdc++.h>
int main()
{
    vector<int> a;
    deque<int> b;
    
    cout << "For vector:\n";
    a.push_back(2);
    cout << "Possible methods:\n";
    cout << "+push_back\n";
    a.pop_back();
    cout << "+pop_back\n";
    //a.push_front(3);
    cout << "Impossible methods:\n";
    cout << "+push_front\n";
    //a.pop_front();
    cout << "+pop_front\n\n";
    b.push_back(2);
    cout << "For deque:" << endl
         << "Possible methods:\n";
    cout << "+push_back\n";
    b.push_front(3);
    cout << "+push_front\n";
    b.pop_back();
    cout << "+pop_back\n";
    b.pop_front();
    cout << "+pop_front\n";
    cout << "Impossible methods in this case:none\n";
}