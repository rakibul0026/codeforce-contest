#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 5;
vector<int> facts[MAX]; // prime factors
int arr[MAX], dp[20][MAX], cnt[MAX], csz, LG[MAX];
int query(int l,int r){
	int lg = LG[r - l + 1];
	return __gcd(dp[lg][l], dp[lg][r - (1 << lg) + 1]);
}
void add(int x){
	if(x == -1){
		csz += 10000000;
		return ;
	}
	for(auto p : facts[x]){
		if(!cnt[p]) csz++;
		cnt[p]++;
	}
}
void remove(int x){
	if(x == -1){
		csz -= 10000000;
		return ;
	}
	for(auto p : facts[x]){
		cnt[p]--;
		if(!cnt[p]) csz--;
	}
}
int cas;
void solve(){
	int n, k;
	cin >> n >> k;
	csz = 0;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		for(auto p : facts[arr[i]]) cnt[p] = 0;
		dp[0][i] = arr[i];
	}
	arr[n + 1] = -1;
	for(int j = 1; j < 20; j++){
		for(int i = 1; i <= n; i++){
			if(i + (1 << (j - 1)) <= n) dp[j][i] = __gcd(dp[j - 1][i], dp[j - 1][i + (1 << (j - 1))]);
			else dp[j][i] = dp[j - 1][i];
		}
	}
	int ptr = 0, ans = 0;
	for(int i = 1; i <= n; i++){
		while(csz <= k){
			add(arr[++ptr]);
		}
		if(ptr == i){
			remove(arr[i]);
			continue;
		}
		remove(arr[ptr--]);
		if(csz == k && query(i, ptr) == 1) ans = max(ans, ptr - i + 1);
		remove(arr[i]);
	}
	cout <<"Case " << ++cas<<": " << ans << '\n';
}

int32_t main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t = 1;
	for(int i = 2; i < MAX; i++){
		if(facts[i].size()) continue;
		for(int j = i; j < MAX; j += i) facts[j].push_back(i);
	}
	for(int i = 2; i < MAX; i++) LG[i] = LG[i / 2] + 1;
	
	cin >> t;
	while(t--) solve();
}
