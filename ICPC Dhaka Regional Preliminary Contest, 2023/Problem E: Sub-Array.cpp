#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long ans = 1LL * n * (n + 1) / 2;
        for (int i = 1, j = 1; i <= n; i = j)
        {
            for (j = i + 1; j <= n and a[i] == a[j]; j++);
                
            int k = (j - i);
            ans -= 1LL * k * (k + 1) / 2;
        }
        cout << "Case " << ++cs << ": " << ans << '\n';
    }
    return 0;
}
