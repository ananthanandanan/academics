#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int i=1,j=0;
    while(j<n){
        cout<<"Push";
        if(i<a[j]) cout<<"Pop";
        else j++;
        i++;
    }

}