#include <bits/stdc++.h>

using namespace std;
using ll = long long;


bool snt( ll n){
	for(ll i = 2 ; i <= sqrt(n); i++) {
		if(n%i == 0) return false;
	}
	return n > 1;
}


int main(){
	int n; cin >> n;
	int a[205][205];
	
	for(ll i = 0 ; i < n; i++) {
		for(ll j = 0 ; j < n; j ++) cin >> a[i][j];
	}
	
	set<int> s;
	for(int i = 0; i < n; i++) {
		if(snt(a[i][i])) {
			s.insert(a[i][i]);
		}
		if(snt(a[i][n-i-1])) {
			s.insert(a[i][n-i-1]);
		}
	}
	cout << s.size() << endl;
	return 0;
}
