#include <iostream>
#include <math.h>
using namespace std;
template <class T>
void X_Raiseto_Y(T *x, T *y)
{
    int n;
    cout << "Enter the Limit:";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cout << "Enter 2 Numbers\n";
        cin >> *x >> *y;
        cout << endl;
        cout << pow(*x, *y) << endl;
    }
}
int main()
{
    float a, b;
    X_Raiseto_Y(&a, &b);
    return 0;
}
