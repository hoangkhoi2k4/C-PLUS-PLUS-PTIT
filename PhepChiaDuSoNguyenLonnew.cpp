#include <bits/stdc++.h>

using namespace std;

long long m;
string s;
void solve(){
	cin >> s;
	cin >> m;
	long long r = 0;
	for(int i = 0 ; i < s.length() ; i++) {
		r = (r*10 + (s[i] - '0'))%m;
	}
	
	cout << r << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
