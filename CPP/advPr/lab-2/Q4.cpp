#include <iostream>

// we will use the hasing method
using namespace std;
const int MAX = 256;
int searchNonrepeatChar(string str)
{
    int freq[MAX] = {0};
    int n = str.length();
    for (int i = 0; i < n; i++)
        freq[str.at(i)]++;
    for (int i =0; i<n; i++)
    {
        char ch = str.at(i);
        if (freq[ch] == 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    cout  << searchNonrepeatChar(str);
}