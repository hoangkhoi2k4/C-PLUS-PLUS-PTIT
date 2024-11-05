#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	
	sort(a, a+n);
	int res = INT_MAX;
	for(int i = 0 ; i < n - 1; i ++) {
		if(a[i+1] - a[i] < res) {
			res = a[i+1] - a[i];
		}
	}
	cout << res;
	
	return 0;
}

/* 
INPUT:
3
1  6 3
OUTPUT:
2
*/
