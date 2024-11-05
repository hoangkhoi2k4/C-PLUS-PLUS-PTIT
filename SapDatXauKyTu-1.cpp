#include <bits/stdc++.h>

using namespace std;

void slove() {
	string s;
	cin >>  s;
	int f[26] = {};
	
	for(int i = 0 ; i < s.size() ; i++) {
		f[s[i] - 'a']++;
		
	}
	
	sort(f, f + 26);
	
	int sum = 0 ,  res = 0;
	
	for(int i = 24; i >= 0; i--) {
		sum += f[i];
		
		if(sum >= f[25]) {
			res = 1;
			break;
		}
	}
	
	cout << res << endl;
}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		slove();
	}
	return 0;
}
