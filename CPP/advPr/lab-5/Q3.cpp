#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){

    vector<int> arr;
    vector<int>::iterator itr;

    //input the values
    int n;
    cout<<"enter the number ofinteger\n";
    cin>>n;
    int input;

    for(int i=0;i<n; i++){
        cin>>input;
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end());

    //output
    for(itr = arr.begin(); itr<arr.end();itr++){
        cout<<*itr<<" ";
    }
    arr.clear();




    return 0;

}