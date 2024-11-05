#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll a[n];
		for(int i = 0; i < n ; i++) cin >> a[i];
		ll sum, max = -1e9;
		for(int i = 0 ; i < n; i++) {
			sum = 1;
			for(int j = i; j < n ; j ++) {
				sum*=a[j];
				if(max < sum) max = sum;
			}
		}
		cout << max << endl;
	}
	
	return 0;
}

