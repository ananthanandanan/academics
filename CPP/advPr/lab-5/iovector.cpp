#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr;
    vector<int>::iterator itr;
    
    //input integers
    int n,input;
    cout<<"enter the no of integer\n";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>input;
        arr.push_back(input);
    }

    //print the input
    cout<<"The input elements are:";

    for(itr = arr.begin(); itr<arr.end();itr++){
        cout<<*itr<<" ";
    }
    arr.clear();
    return 0;
}