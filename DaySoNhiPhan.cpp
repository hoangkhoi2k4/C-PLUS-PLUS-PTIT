#include <bits/stdc++.h>

using namespace std ;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, res = 0;
		cin >> n;
		
		int a[n+1], b[n+1];
		
		a[0] = b[0] = 0;
		
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			a[i] += a[i-1];
		}
		
		for(int i = 1; i <= n ; i++) {
			cin >> b[i];
			b[i] += b[i - 1];
		}
		
		for(int i = 1; i <=n; i++) {
			for(int j = i + res ; j <=n ; j++) {
				if(a[j] - a[i - 1] == b[j] - b[i - 1])
					res = max(res, j - i + 1);
			}
		}
		
		cout << res << endl;
	}
	
	return 0;
}
