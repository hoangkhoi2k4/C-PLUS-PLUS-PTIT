#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[10005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t, n, k;
	cin >> t;
	while(t--) {
		ll sum = 0, tmp = INT_MIN, l, r;
		cin >> n >> k;
		
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
		} 
		for(int i = 0 ; i < k; i++) {
			sum += a[i];
		}
		
		tmp = max(tmp, sum);
		
		for(int i = k ; i < n ; i++) {
			sum += a[i];
			sum -= a[i - k];
			if(tmp < sum) {
				l = i - k + 1;
				r = i;
				tmp = sum;
			}
		}
		
		for(int i = l ;i <= r; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
