// Q7
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    deque<int>::iterator itr;

    //a
    d.push_back(1);
    d.push_back(5);
    d.push_back(8);
    d.push_back(9);
    d.push_back(3);
    itr=d.begin();
    while(itr!=d.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl<<endl<<endl;

    //b
    cout<<"Present size of deque = "<<d.size()<<endl;
    cout<<"Maximum size of deque = "<<d.max_size()<<endl;

    cout<<endl;

    //c
    d.push_back(10);
    d.push_front(20);
    itr=d.begin();
    while(itr!=d.end())
    {
        cout<<*itr<<" ";
        itr++;
    }

    cout<<endl<<endl<<endl;


    //d
    d.insert(d.begin()+2,15);
    itr=d.begin();
    while(itr!=d.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl<<endl<<endl;


    //e
    d.push_front(7);
    d.push_front(8);
    d.push_front(9);
    d.push_front(10);
    itr=d.begin();
    while(itr!=d.end())
    {
        cout<<*itr<<" ";
        itr++;
    }

    cout<<endl<<endl<<endl;



    //f
    d.pop_back();
    d.pop_front();
    itr=d.begin();
    while(itr!=d.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl<<endl<<endl;

}
