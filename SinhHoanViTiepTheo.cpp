#include <bits/stdc++.h>

using namespace std;

int n, a[100];

void solve(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1] ) {
		--i;
	}
	if(i == 0) {
		for(int i = 1 ; i <= n ; i++) {
			cout << i << " ";
		}
	} else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i], a[j]);
		sort(a + i + 1, a+n+1);
		for(int i = 1 ; i <= n ;i++) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		solve();
	}
	
	return 0;
}
