#include <bits/stdc++.h>

using namespace std;

int Swap(int a[], int n, int k){
	int cnt = 0;
	for(int i = 0 ; i < n ; ++i) {
		if(a[i] <= k) ++cnt;
	}
	
	int tmp = 0;
	for(int i = 0 ; i < cnt; ++i) {
		if(a[i] > k) ++tmp;
	}
	int ans = tmp;
	for(int i = 0 ,  j = cnt; j < n ; ++i, ++j) {
		if(a[i] > k) --tmp;
		if(a[j] > k) ++tmp;
		ans = min(ans, tmp);
	}
	
	return ans;
}

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	
	for(int i = 0; i < n ; ++i) {
		cin >>  a[i];
	}
	
	cout << Swap(a, n, k) << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}
