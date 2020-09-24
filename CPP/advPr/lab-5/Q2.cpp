#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<string> str;
    vector<string>::iterator itr;
    //Input the the strings

    int n;
    cout<<"Enter the no of  strings\n";
    cin>>n;
    string input;
    for(int i=0;i<n;i++){
        cin>>input;
        str.push_back(input);
    }

    //print the strings
    for(itr=str.begin();itr<str.end();itr++){
        cout<<*itr<<" ";
    }


    return 0;
}