#include <bits/stdc++.h>
using namespace std;

bool isMatching(string exp)
{
    stack<char> s;
    char x;

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {

            s.push(exp[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (exp[i])
        {
        case ')':

            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    // Check Empty Stack
    return (s.empty());
}

// Driver program to test above function
int main()
{
    string expr;

    cout << "Enter the string" << endl;
    cin>>expr;
    if (isMatching(expr))
        cout << "True";
    else
        cout << "False";
    return 0;
}
