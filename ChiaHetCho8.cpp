#include <bits/stdc++.h>

using namespace std;

int Count(string s, int n){
	int cnt = 0;
	for(int i = 0 ; i < s.length() ; i++) {
		int x = 0;
		for(int j   = i ; j < s.length() ; j++) {
			x = (x*10 + s[j] - '0')%n;
			if(!x) cnt++;
		}
	}
	return cnt;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		cout << Count(s, 8) - Count(s, 24) << endl;
	}
	return 0;
}
