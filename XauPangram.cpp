#include <bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
			string s;
	int k;
	cin >> s >> k;
	
	int cnt[26] = {0};
	
	for(int i = 0 ; i < s.size(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z') cnt[s[i] - 'a']++;
		if(s[i] >= 'A' && s[i] <= 'Z') cnt[s[i] - 'A']++;
	} 
	
	int w = 0;
	for(int i = 0 ; i < 26 ; i++) {
		if(cnt[i]) w++;
	}
	if(s.size() < 26) cout << 0 <<endl;
	else {
		if(w + k >= 26) cout << 1 << endl;
		else  cout << 0 << endl;
	}
	}
	return 0;
}

