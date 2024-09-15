
#include<bits/stdc++.h>
using namespace std;
 
int n;
string help = "aeiou";
 
void solve() {
  cin >> n;
  int k = (n + 4) / 5;
  string ans = "";
  for (int i = 0; i < k; i++)
    for (int j = 0; j < 5; j++)
      ans += help[j];   
  while (ans.size() > n)
    ans.pop_back();
  sort(ans.begin(), ans.end());
  cout << ans << endl;
}
 
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
   return 0;
}
