#include <iostream>

using namespace std;

template <typename T>

class Pair_Sum
{

private:
    T name1;
    T name2;

public:
    Pair_Sum() {}
    void getName1(T n)
    {
        this->name1=n;
    }

    void getName2(T n)
    {
        this->name2=n;
    }

    void getSum()
    {
        cout<<"The Sum is:" <<name1+name2<<endl;
    }
};

int main()
{
    Pair_Sum<int> p1;
    Pair_Sum<float> p2;

    cout<<"Enter obj with integer\n";
    int n,m;
    cin>>n>>m;
    p1.getName1(n);p1.getName2(m);
    p1.getSum();

    cout<<"Enter obj with float\n";
    float a,b;
    cin>>a>>b;
    p2.getName1(a);p2.getName2(b);
    p2.getSum();

}
