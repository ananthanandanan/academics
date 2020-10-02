#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> mp;
    string s;
    int c=0;
    string::iterator it;
    cout<<"enter the string"<<endl;
    getline(cin,s);

    for(it=s.begin();it!=s.end()+1;it++)
    {
    if(*it==' ' || it==s.end())
            mp[s]++;
    }
    cout<<mp[s];

    return 0;
}
