#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int>b){
	return a.second > b.second;
}

int main(){
	int n; cin >> n;
	map<int, int> m;
	for(int i = 0 ; i < n; i++) {
		int x; cin >> x;
		m[x] ++;
	}
	
	vector<pair<int,int>> v;
	for(auto it : m) {
		v.push_back(it);
	}
	
	sort(begin(v), end(v), cmp);
	
	if(v[0].second > n/2) {
		cout << v[0].first;
	} else {
		cout << -1;
	}
	return 0;
}
