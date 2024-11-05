#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll find(string s, ll n) {
	ll res = 0;
	for(ll i = 0 ; i < s.size() ; i++) {
		res = (res*10 + s[i] - '0')%n;
	}
	return res;
}

ll powMod(ll a, ll b, ll n) {
	n = pow(10, n);
	ll res = 1;
	while(b) {
		if(b%2 == 1) {
			res *= a;
			res %= n;
			
		}
		a *= a;
		a %= n;
		b /= 2;
	}
	return res;
}

int main(){
	ll a, b, k; cin >> a >> b >> k;
	cout << powMod(a, b ,k);
	return 0;
}
