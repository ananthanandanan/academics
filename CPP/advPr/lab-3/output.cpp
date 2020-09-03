#include <iostream>

using namespace std;
int main()
{
    string str = "This*is^a.45min test.";
    int i;
    for (i = 0; i < str.length(); i++)
    {
        if (ispunct(str[i]))
            str[i] = ' '; // a blank str[i] = tolower (str[i]); }
        
    }
    cout << str;
}

//This is a 45min test 
