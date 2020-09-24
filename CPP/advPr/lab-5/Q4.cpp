#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
struct student
{
    int id;
    string name;
    float cgpa;
};

int main(){

    vector<student> vtr;
    vector<student>::iterator itr;
    student s;

    //input the values [id, name, cgpa ]
    int id;
    string name;
    float cgpa, large=-111.10;
    int noi;

    cout<<"enter the no inputs\n";
    cin>>noi;

    for(int i=0;i<noi; i++){
        cout<<"Enter the id:";
        cin>>s.id;
        cout<<"\n";
        cout<<"Enter the name:\n";
        cin>>s.name;

        cout<<"Enter the cgpa\n";
        cin>>s.cgpa;
        if(large<s.cgpa)large =s.cgpa;
        vtr.push_back(s);
    }

    for(itr=vtr.begin();itr<vtr.end();itr++){
        if(itr->cgpa==large){
        cout<<"The id is:"<<itr->id<<endl;
        cout<<"The name is:"<<itr->name<<endl;
        cout<<"The cgpa is:"<<itr->cgpa<<endl;

        }
    }
    return 0;
}