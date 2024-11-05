#include <bits/stdc++.h>

using namespace std;

void solve()
 {
 	string s; cin >> s;
 	map<char, int> mp;
 	for(char x : s){
 		mp[x] ++;	
	}
	
	int len = mp.size();
	int ans = INT_MAX, left =0 , cnt  = 0;
	int dem[256] = {0};
	
	for(int i = 0 ; i < s.size() ; i++) {
		dem[s[i]]++;
		if(dem[s[i]] == 1) cnt ++;
		if(cnt == len) {
			while(dem[s[left]] > 1) {
				dem[s[left]]--;
				left++;
			}
			ans = min(ans, i - left + 1);
		}
	}
	cout << ans << endl;
 }
int main(){
	int t; cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}
