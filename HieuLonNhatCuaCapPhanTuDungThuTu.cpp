#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		
		for(int &i : a) cin >> i;
		int min_ = a[0], res = -1e9;
		for(int i = 1; i < n;i++) {
			if(a[i] > min_) {
				res = max(res, a[i] - min_);
			}
			min_ = min(a[i], min_);
		}
		
		if(res == -1e9) cout << "-1\n";
		else cout << res << endl;
	}
	
	return 0;
}
