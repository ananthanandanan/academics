#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char Operator;

    cout << "Enter the two integer values\n";
    cin >> a >> b;
    cout << "Enter the operator[+, -, *, /]\n";
    cin >> Operator;
    switch (Operator)
    {
    case '+':
        cout << a << "+" << b << "=" << a + b << endl;
        break;
    case '-':
        cout << a << "-" << b << "=" << a - b << endl;
        break;
    case '*':
        cout << a << "*" << b << "=" << a * b << endl;
        break;
    case '/':
        cout << a << "/" << b << "=" << a / b << endl;
        break;
    default:
        cout << "Invalid operator\n";
    }

    return 0;
}