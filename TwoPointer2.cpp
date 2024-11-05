#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, s; cin >> n >> s;
	int a[n];
	for(int &i : a) cin >> i;
	
	int res = INT_MAX;
	int l = 0, r , sum = 0;
	for(r = 0 ; r < n; r ++) {
		sum += a[r];
		while(sum >= s) {
			res = min(res, r - l + 1);
			sum -= a[l] ; l++;
		}
	}
	if(res == INT_MAX) 
		cout << "-1";
	else
		cout << res;
	
	return 0;
}
