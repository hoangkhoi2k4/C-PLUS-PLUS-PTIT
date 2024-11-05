#include <iostream>
#include <string>

using namespace std;
typedef long long ll;

ll solve(string s, ll n) {
	ll res = 0;
	for(ll i = 0 ; i < s.size() ; i++) {
		res = (res*10 + s[i] - '0')%n;
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		string s;
		cin >> s;
		ll n; cin >> n;
		cout << solve(s,n) << endl;
	}
}

