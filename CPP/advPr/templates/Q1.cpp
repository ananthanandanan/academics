#include<iostream>

using namespace std;

template <typename T, typename F>
void Print(T x, F y)
{
    cout<<x+y<<endl;
}

int main(){

    Print<char,int>('A', 1);
    Print(1.2,1223);

}