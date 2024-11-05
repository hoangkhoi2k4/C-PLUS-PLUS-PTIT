#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(ll n) {
	for(int b = n / 7; b >= 0; b--) {
		int remain = n - 7*b;
		if(remain % 4 == 0) {
			int a = remain / 4;
			cout << string (a, '4');
			cout << string (b, '7');
			return;
		}
	}
	cout << -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n; cin >> n;
		solve(n); cout << endl;
	}

	return 0;
}
