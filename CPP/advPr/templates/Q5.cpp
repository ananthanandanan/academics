#include <iostream>

using namespace std;

template <typename T>

class Pair
{

private:
    T name1;
    T name2;

public:
    Pair() {}
    void getName1(T n)
    {
        this->name1=n;
    }

    void getName2(T n)
    {
        this->name2=n;
    }

    T getMax()
    {
        return (name1 > name2 ? name1 : name2);
    }
};

int main()
{
    Pair<int> p1;
    Pair<float> p2;

    cout<<"Enter two integers\n";
    int n,m;
    cin>>n>>m;
    p1.getName1(n);p1.getName2(m);
    cout<<"The greatest no is: "<<p1.getMax()<<endl;

    cout<<"Enter two floats\n";
    float a,b;
    cin>>a>>b;
    p2.getName1(a);p2.getName2(b);
    cout<<"The greatest no is: "<<p2.getMax()<<endl;

}


