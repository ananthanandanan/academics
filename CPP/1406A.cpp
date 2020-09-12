#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(101, 0);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[x]++;
        }

        ll first = -1;
        ll second = -1;
        for (ll i = 0; i <= 100; i++)
        {
            if (v[i] < 2)
            {
                first = i;
                break;
            }
        }

        for (ll i = 0; i <= 100; i++)
        {
            if (v[i] == 0)
            {
                second = i;
                break;
            }
        }

        if (second == -1)
        {
            second = 100;
        }

        ll ret = first + second;
        cout << ret << endl;
    }
}
