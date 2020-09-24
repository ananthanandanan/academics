#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

struct student
{
    int id;
    string name;
    float cgpa;
};

bool comparCgpa(const student &lhs, const student &rhs){
    return lhs.cgpa<rhs.cgpa;
}

int main(){

    vector<student> vtr;
    vector<student>::iterator itr;
    student s;

    //input the values [id, name, cgpa ]
    int id;
    string name;
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
        vtr.push_back(s);
    }

    sort(vtr.begin(),vtr.end(),comparCgpa);

    for(itr=vtr.begin();itr<vtr.end();itr++){

        cout<<"The id is:"<<itr->id<<endl;
        cout<<"The name is:"<<itr->name<<endl;
        cout<<"The cgpa is:"<<itr->cgpa<<endl;

    
    }
}