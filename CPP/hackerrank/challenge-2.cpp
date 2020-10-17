
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    vector<int> arr;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    //take the input of pos
    int k;
    cin >> k;
    arr.erase(arr.begin() + (k - 1));

    int a, b;
    cin >> a >> b;
    arr.erase(arr.begin() + (a - 1), arr.begin() + (b - 1));

    cout << arr.size() << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
