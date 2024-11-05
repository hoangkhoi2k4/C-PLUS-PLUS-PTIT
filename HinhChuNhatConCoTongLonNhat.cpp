#include <bits/stdc++.h>

using namespace std;

int kanade(int a[], int n){
	int cnt = 0;
	int max_end = 0, res= 0;
	for(int i = 0 ; i < n; i++) {
		max_end += a[i];
		res = max(res, max_end);
		max_end = max(0, max_end);
	}
	return res;
}

void solve(){
	int n, m; cin >> n >> m;
	int a[n][m];
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < m; j++ ) {
			cin >> a[i][j];
		}
	}
	
	int res = INT_MIN;
	int tmp[n];
	for(int l = 0 ; l < m; l++) {
		memset(tmp, 0, sizeof(tmp));
		for(int r = l ; r < m; r++) {
			for(int i = 0 ; i < n; i++){
				tmp[i] += a[i][r];
			}
			res = max(kanade(tmp, n), res);
		}
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
