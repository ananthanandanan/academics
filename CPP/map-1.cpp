#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, map<int, int>> m;
    map<string, map<int, int>>::iterator out;
    map<int, int>::iterator in;
    int len, in_key, value;
    string out_key;
    cout << "how many keys to enter\n";
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cout << "enter the outer key\n";
        cin >> out_key;
        cout << "enter inner key and value\n";
        cin >> in_key >> value;
        m.insert(make_pair(out_key, map<int, int>()));
        m[out_key].insert(make_pair(in_key, value));
    }
    for (out = m.begin(); out != m.end(); out++)
    {
        for (in = out->second.begin(); in != out->second.end(); in++)
        {
            cout << "outer_key-> " << out->first << "inner_key-> " << in->first << "value-> " << in->second << '\n';
        }
    }

    return 0;
}