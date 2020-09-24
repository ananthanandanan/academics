#include <bits/stdc++.h>
#include <algorithm>

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
    
    //erase a particular
    int erase_q; 
    cout<<"enter  the position to delete from"<<arr.size()<<endl;
    cin>>erase_q;
    arr.erase(arr.begin() + erase_q);
    int e1,e2;
    cout<<"enter  the position to delete from"<<arr.size()<<endl;
    cin>>e1>>e2;
    arr.erase(arr.begin()+e1,arr.begin()+e2);

    cout<<"The size is:"<<arr.size()<<endl;

    for(itr = arr.begin(); itr<arr.end();itr++){
        cout<<*itr<<" ";
    }

    arr.clear();
    return 0;
}