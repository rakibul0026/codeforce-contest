/*                                  A. Robin Helps

he heroic outlaw Robin Hood is famous for taking from the rich and giving to the poor.

Robin encounters n people starting from the 1-st and ending with the n-th. The i-th person has aiold. If ai≥k
, Robin will take all ai gold, and if ai=0, Robin will give 1 gold if he has any. Robin starts with 0 gold.

Find out how many people Robin gives gold to.

Input
The first line of the input contains a single integer t(1≤t≤104) — the number of test cases.

The first line of each test case contains two integers n, k (1≤n≤50,1≤k≤100) — the number of people and the threshold at which Robin Hood takes the gold.

The second line of each test case contains n integers a1,a2,…,an (0≤ai≤100) — the gold of each person.

Output
For each test case, output a single integer, the number of people that will get gold from Robin Hood.

Example
Input
4
2 2
2 0
3 2
3 0 0
6 2
0 3 0 0 0 0
2 5
5 4
Output
1
2
3
0 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
  

    while (t--)
    {
          int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int gold = 0;
        int given = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                gold+= a[i];
            }
            else if (a[i] == 0 && gold > 0)
            {
                gold--;
                given++;
            }
        }
        cout << given << endl;
    }
    return 0;
}


