#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> prefix_sums;
        prefix_sums[0] = 0;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            sum += x;

            if (prefix_sums.find(sum) != prefix_sums.end())
            {
                ans++;
                prefix_sums.clear();
                prefix_sums[0] = 0;
                sum = 0;
            }
            else
            {
                prefix_sums[sum]++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

