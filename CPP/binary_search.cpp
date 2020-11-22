#include <bits/stdc++.h>

using namespace std;

int Binary(vector<int>list, int item){

    int mid;
    int b = list[0];
    int e = list.size()-1; 
    while(b<=e){
        mid = (b+e)/2;
        if(list[mid]== item){
            return 1;
        }
        else if(list[mid]>item){
            e = mid-1;
        }
        else if(list[mid]<item){
            b = mid+1;
        }
    }
    return -1;
}

int main()
{
    vector<int> list;
    int len;
    int x;
    int item;
    cout<<"enter the number of values to be listed\n";
    cin>>len;

    for(int i=0; i<len;i++)
    {
        cin>>x;
        list.push_back(x);

    }
    sort(list.begin(), list.end());

    for(auto itr : list){
        cout<<itr;
    }
    //enter the value to be searched

    cout<<"enter the item to be searched\n";
    cin>>item;
    if(Binary(list, item)){
        cout<<"Found";
        
    }
    else {

        cout<<"not found";
    }

    return 0;
}
