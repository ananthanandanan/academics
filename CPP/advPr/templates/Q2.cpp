#include <iostream>

using namespace std;

template <typename T>
T Fib(T x)
{
    if(x<=1 || x<=1.0)
    return x;
    else
    return Fib(x-1) + Fib(x-2);
}

int main(){

    

    cout << Fib(9)<<endl;
    cout<< Fib<float>(5.0)<<endl;
    //cout << Fib<long>(1232);

    return 0;
}