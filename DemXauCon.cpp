#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s; 
	int k;
	cin >> s >> k;
	int ans = 0, len = s.length();
	
	for(int i = 0 ; i < len ; i++) {
		// xet tat ca cac xau con bat dau tu tung chi so 1 trong xau s
		int cnt[256] = {0};
		int dem = 0;
		for(int j = i ; j < len ; j++) {
			if(cnt[s[j]] == 0) {
				dem ++;
			}
			if(dem  == k ) {
				ans ++;
			}
			if( dem  > k ) {
				break;
			}
			cnt[s[j]] = 1;
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		solve();
	}
	
	return 0;
}
