#include <bits/stdc++.h>

using namespace std;
string s;

void solve(){
	int i =  s.length() - 1;
	while(i >= 0 && s[i] == '1') {
		s[i] = '0';
		--i;
	}
	if(i != -1) {
		s[i ] = '1';
	}	
	for(char x : s) cout << x;
	cout << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		solve();
	}
	return 0;
}
