#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 100];
        const int inf = 1e9 + 7; 
        int ans = inf;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) 
        {
            int count = 0;
            for (int j = i + 1; j < n; j++) 
            {
                count += (arr[j] > arr[i]);
            }
            ans = min(ans, count + (i)); 
        }
        cout << ans << endl;
    }
    return 0;
}

