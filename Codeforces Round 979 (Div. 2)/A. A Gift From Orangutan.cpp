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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
           
        }
        sort(v.begin(), v.end());
        int max_val=v[n-1];
        int min_val=v[0];
        int sum = (n-1)*(max_val-min_val);

        
        cout << sum<<endl;
    }
}
