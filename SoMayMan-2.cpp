#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll solve(string s){
	ll x = 0;
	int n = s.length();
	for(int i = 0 ; i < n; i++) {
		x += (s[i] - '0');
	}
	string s_ = to_string(x);
	if(s_.length() > 1) {
		return solve(s_);
	} else {
		return x;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int x = solve(s);
		if( x == 9) cout << "1\n";
		else cout << "0\n";
	}
	
	return 0;
}
