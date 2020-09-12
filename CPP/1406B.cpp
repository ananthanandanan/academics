#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;

const int N = 100005;

int n, a[N];

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", a + i);
        sort(a + 1, a + 1 + n);
        LL ans = -9e18;
        for (int i = 0; i <= 5; i++)
        {
            LL s = 1;
            for (int j = 0; j < i; j++)
                s *= a[j + 1];
            for (int j = 0; j < 5 - i; j++)
                s *= a[n - j];
            ans = max(ans, s);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
