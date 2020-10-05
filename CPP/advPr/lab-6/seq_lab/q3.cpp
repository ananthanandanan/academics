#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a;
    cout<<"Enter the no of elements for the stack:";
    int n;cin>>n;
    cout<<"Enter the elements:\n";
    int i=0;while(i<n){int x;cin>>x;a.push(x);i++;}
    stack<int> b;
    while(!a.empty()){
        int t=a.top();
        a.pop();
        while(!b.empty() && b.top()>t){
            a.push(b.top());
            b.pop();
        }
        b.push(t);
    }
    while(!b.empty()){cout<<b.top()<<"  ";b.pop();}
}
