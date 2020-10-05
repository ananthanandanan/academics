#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> a;
    cout<<"Enter the no of iterations:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the appropriate choice:1-to insert,2-to search";
        int c;
        cin>>c;
        switch(c){
        case 1:
            int x;
            cout<<"Enter the no to be inserted:";
            cin >> x;
            a.insert(x);
            cout<<"The element "<<x<<" has been inserted successfully"<<endl;
            break;
        case 2:
            cout << "which element do u want to find:";
            int s;
            cin >> s;
            auto l = a.find(x);
            
            multiset<int>::iterator iter;
            for(iter=a.begin();iter!=a.end();iter++) cout<< *iter<<" ";
            cout<<endl;
            if (a.empty())
                cout << "The set is empty" << endl;
            else if (l == a.end() && *l != x)
                cout << "The element(" << s << ") has not been found";
            else{
                int num=a.count(x);
                cout << "The element(" << s << ") has been found "<<num<<" times";
            }
            cout << endl;
            break;
        }
    }
}