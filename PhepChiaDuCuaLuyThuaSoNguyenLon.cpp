#include <iostream>
#include <string>

using namespace std;
typedef long long ll;

ll find(string s, ll n) {
	ll res = 0;
	for(ll i = 0 ; i < s.size() ; i++) {
		res = (res*10 + s[i] - '0')%n;
	}
	return res;
}

ll powMod(ll a, ll b, ll n) {
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

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		string a;
		cin >> a;
		ll b,n; cin >> b >> n;
		ll du = find(a,n);
		cout << powMod(du,b,n) << endl;
	}
}

