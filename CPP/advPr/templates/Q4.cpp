#include <iostream>

using namespace std;



template <typename T>
void swap(T *a, T *b)
{
    T temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x1 = 4, y1 = 7;
    float x2 = 4.5, y2 = 7.5;
    cout << "Before Swap :" << endl;
    cout << "x1 =" << x1 << endl << "y1 =" << y1 << endl;
    cout << "x2 =" << x2 << endl << "y2 =" << y2 << endl;
    swap<int>(&x1, &y1);
    swap<float>(&x2, &y2);
    cout << "After Swap :" << endl;
    cout << "x1 =" << x1 << endl << "y1 =" << y1 << endl;
    cout << "x2 =" << x2 << endl << "y2 =" << y2 << endl;
    return 0;
}
