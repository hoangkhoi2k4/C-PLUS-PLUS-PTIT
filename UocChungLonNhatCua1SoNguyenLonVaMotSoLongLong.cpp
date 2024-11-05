#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if(a == 0) {
		return b;
	} else return gcd(b%a, a);
}

ll mod(string s, ll a){
	ll res = 0;
	int n = s.length();
	for(int i = 0 ; i < n; i++){
		res = ( res * 10 + (s[i] - '0'))%a;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		ll a; cin >> a;
		string s; cin >> s;
		cout << gcd(mod(s, a), a);
	}
}
