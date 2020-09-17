#include <iostream>

using namespace std;

template<typename T>
T Square(T number)
{
    return number*number;
}

int main()
{   
    string s;
    cout<<"Enter the number to squarediff datatypes[long,int,float]"<<endl;
    
    cin>>s;
    if(s=="int")
    {
        int n1;
        cin>>n1;
        cout<<Square(n1)<<endl;
    }
    if(s=="float")
    {
        float n2;
        cin>>n2;
        cout<<"floating"<<Square<float>(n2)<<endl;
    }

    if(s=="long")
    {
        int n3;
        cin>>n3;
        cout<<Square<long>(n3)<<endl;
    }
    return 0;
    
}