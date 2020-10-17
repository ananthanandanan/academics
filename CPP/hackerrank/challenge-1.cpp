#include <bits/stdc++.h>
#include <algorithm>


using namespace std;


int main(){

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    vector<int> arr;

    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    //sort the array
    sort(arr.begin(), arr.end());

    for(auto i : arr){
        cout<<i<<" ";
    }
    
    return 0;
}