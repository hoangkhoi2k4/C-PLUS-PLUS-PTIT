#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	sort(a, a+n, greater<int>());
	
	int res = 1;
	int docung = a[0];
	for(int i = 1; i < n; i++) {
		if(docung >= 1){
			++res;
			docung = min(docung - 1, a[i]);
		} else break;
	}
	cout << res;
	return 0;
}

/* 
INPUT:
4 
1 2 3 4
OUTPUT: 
4
*/
