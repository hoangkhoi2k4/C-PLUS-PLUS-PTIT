#include <bits/stdc++.h>

using namespace std;
int a[11], n, check[11] = {};

void in() {
	for(int k = 1; k <= n; k++) {
		cout << a[k];
	}
	cout << endl;
}

void QLHoanVi(int i) {
	for(int j = 1; j <= n ; j++) {
		if(check[j] == 0 ) {
			a[i] = j;
			check[j] = 1;
			if(i == n) {
				in();
			} else QLHoanVi(i + 1);
			check[j] = 0;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n ;
		QLHoanVi(1);
	}
	return 0;
}
