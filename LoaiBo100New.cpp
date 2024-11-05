#include <bits/stdc++.h>

using namespace std;

string s;

void solve(){
	int ans = 0;
	for(int i = 0 ; i < s.length() - 2; i++){
		if(s == "") break;
		if(s[i] == '1' && s[i+1] == '0' && s[i + 2] == '0'){
			ans += 3;
			s.erase(i, 3);
			i = -1;
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		 cin >> s;
		 solve();
	}
}
