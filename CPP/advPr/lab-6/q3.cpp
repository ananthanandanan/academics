#include<iostream>
#include<utility>
using namespace std;
int main(){
    cout<<"Enter the no of people in the bus(max age:100):";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    pair<int,int> pair1=make_pair(1,9);
    pair<int,int> pair2=make_pair(10,20);
    pair<int,int> pair3=make_pair(21,40);
    pair<int,int> pair4=make_pair(41,60);
    pair<int,int> pair5=make_pair(61,80);
    pair<int,int> pair6=make_pair(81,100);
    for(int i:a){
        if (i>pair6.first)cout<<i<<" lies in the category "<<pair6.first<<"-"<<pair6.second;
        else if (i>pair5.first)cout<<i<<" lies in the category "<<pair5.first<<"-"<<pair5.second;
        else if (i>pair4.first)cout<<i<<" lies in the category "<<pair4.first<<"-"<<pair4.second;
        else if (i>pair3.first)cout<<i<<" lies in the category "<<pair3.first<<"-"<<pair3.second;
        else if (i>pair2.first)cout<<i<<" lies in the category "<<pair2.first<<"-"<<pair2.second;
        else if (i>pair1.first)cout<<i<<" lies in the category "<<pair1.first<<"-"<<pair1.second;
        cout<<endl;
    }
    
}