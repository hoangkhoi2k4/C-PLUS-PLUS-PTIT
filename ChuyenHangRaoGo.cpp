#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		
		for(int i = 0 ; i < n; i++) cin >> a[i];
		for(int i = 0 ; i < n; i++) cin >> b[i];
		
		sort(a, a+n);
		sort(b, b+n);
		
		int check = 1;
		for(int i = 0 ; i < n; i++) {
			if(b[i] - a[i] < 0) {
				check = 0;
				break;
			}
		}
		
		if(check) cout << "Yes\n";
		else cout << "No\n";
	}
	
	return 0;
}
