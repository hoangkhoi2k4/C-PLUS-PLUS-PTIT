#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll n, s[20005], a[20005], len;

void fact(ll x, ll delta) {
	for(int i = 2; i * i <= x; ++i) {
		while(x % i == 0) {
			s[i] += delta;
			x /= i;
		}
	}
	if(x != 1) s[x] += delta;
}

void mul(ll x) {
	len += 5;
	for(ll i = 0; i < len; i++) a[i] *= x;
	for(ll i = 0 ; i < len; i++) {
		a[ i+ 1] += a[i] / 10;
		a[i] %= 10;
	}
	
	while(len >0 && a[len - 1] == 0) --len;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	++n;
	for(int i = 1 ; i <= n; i++) {
		fact(2*n - i + 1, 1);
	}
	
	int st = n +  1;
	for(int i = 1 ; i <= st ; i++) {
		fact(i, - 1);
	}
	
	a[0] = len = 1;
	
	for(int i = 1  ; i < 20005 ; i++) {
		while(s[i] --) mul(i);
	}
	
	for(int i = len-1 ; i >= 0 ; i--) cout << a[i];
	return 0;
}
