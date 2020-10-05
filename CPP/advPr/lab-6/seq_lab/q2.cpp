#include <bits/stdc++.h>
using namespace std;
void print5(int a)
{
    cout << a + 5 << " ";
}
int main()
{
    cout << "Enter the no of elements u want to enter:";
    int n;
    cin >> n;
    int x, l = 0;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cout << "Testing to see if they are odd or even:\n";
    for (int &i : a)
        cout << i << " is " << (i % 2 ? "odd\n" : "even\n");


    cout << "Testing to see if they are above 20:\n";
    for (int &i : a)
        cout << i << " is " << ((i >= 20) ? "above\n" : "not above\n");


    for (int &i : a)
        if (i == 50)
            l = 1;
    cout << "Does anyone have above 50 marks:" << (l ? "Yes\n" : "No\n");

    l = 0;
    for (int &i : a)
        if (i < 0)
            l = 1;
    cout << "Does anyone have negative marks:" << (l ? "Yes\n" : "No\n");
    l = 0;
    cout << "Adding all number by 5 and printing them:\n";
    for_each(a.begin(), a.end(), print5);
    cout << endl;
    sort(a.begin(), a.end());

    cout << "The adjacent difference is:\n";
    int i = 0, j = 1;
    while (j < n)
        cout << a[j++] - a[i++] << " ";
    cout << endl;
    vector<int> b;
    cout << "Enter the no of marks u want to enter for array b:\n";
    int nn;
    cin >> nn;
    i = 0;
    int new_input=0;
    for (int i = 0; i < nn; i++)
    {
        cin>>new_input;
        b.push_back(new_input);
    }
cout<<"The merged marks list are"<<endl;
int tot=a.size()+b.size();
    vector<int> c(tot);
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    for (int &i : c)
        cout << i << " ";
    cout << endl;
}