#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll a[n+5], dp[n+5] = {0};
		for(ll i = 0 ; i < n; i++ ) cin >> a[i];
		
		dp[0] = a[0];
		dp[1] = max(a[0], a[1]);
		for(ll i = 2; i <= n; i++) {
			dp[i] = max(dp[i-2] + a[i], dp[i-1]);
		}
		cout << dp[n-1] << endl;
	}
	return 0;
}


