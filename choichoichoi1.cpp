#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first) {
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main(){
	int n, t; cin >> n >> t;
	vector<pair<int, int>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(begin(v), end(v), cmp);
	long long res = 0;
	int time = t;
	for(int i = 0; i < n; i++){
		if(t < time/2) break;
		res += v[i].second;
		t -= v[i].first;
	}
	cout << res;
	
	return 0;
}
