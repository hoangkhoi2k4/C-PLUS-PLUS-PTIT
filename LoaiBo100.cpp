#include <bits/stdc++.h>

using namespace std;

string s;
int solve(){
	vector<pair<char, int>> vp;
	
	int res = 0;
	int tmp;
	for(int i = 0 ; i < s.length(); i++) {
		vp.push_back(make_pair(s[i], i));
		while(vp.size() >= 3 && vp[vp.size() - 1].first == '0' && vp[vp.size() - 2].first == '0' && vp[vp.size() - 3].first == '1'){
			vp.pop_back();
			vp.pop_back();
			vp.pop_back();
		}
		tmp = vp.back().second;
		res = max(res, i - tmp);
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		cin >> s;
		cout << solve() << endl;
	}
	return 0;
}
