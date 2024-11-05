#include <bits/stdc++.h>

using namespace std;

string s;
int x;

void solve(){
	int n = s.length();
	bool check = true;
	for(int i = n - 1; i >= n - 1 - x; i --) {
		if(s[i] == '1') {
			check = false;
			break;
		}
	}
	if(check) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		cin >> x;
		solve();
	}
	
	return 0;
}
