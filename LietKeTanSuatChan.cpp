#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}

int main(){
	
	int n; cin >> n;
	map<int, int> m;
	
	vector<pair<int, int>> v;
	for(int i = 0 ; i < n; i++) {
		int x; cin >> x;
		m[x]++;
	}
	
	for(auto x : m){
		if(x.second != 0 && x.second%2 == 0) {
			cout << x.first << " " << x.second << endl;
		}
	}
	cout << endl;
	for(auto x : m){
		v.push_back(x);
	}
	
	sort(begin(v), end(v), cmp);
	
	for(auto x : v){
		if(x.second%2 == 0 && x.second != 0) {
			cout << x.first << " " << x.second << endl;
		}
	}
	
	return 0;
}
