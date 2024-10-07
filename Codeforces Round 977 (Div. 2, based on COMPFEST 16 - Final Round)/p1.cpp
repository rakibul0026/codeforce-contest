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
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        while (pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            int new_element = (x + y) / 2;
            pq.push(new_element);
        }

        cout << pq.top() ;
        cout<< endl;
    }
    return 0;
}

