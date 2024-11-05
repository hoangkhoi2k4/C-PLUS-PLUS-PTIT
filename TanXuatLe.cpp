#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for(int &i : a)cin >> i;
		
		int ans = a[0];
		for(int i = 1 ; i < n; i++) {
			ans ^= a[i];
		}
		
		cout << ans << endl;
	}
	return 0;
}
