#include <bits/stdc++.h>

using namespace std;

void sinhHoanVi(int n) {
	int x[n + 1];
	for(int i = 1 ; i <= n ; i++) x[i] = i;
	while(1) {
		for(int i = 1; i <= n ; i++) cout << x[i];
		cout << " ";
		
		int j = n - 1, k = n;
		while(x[j] > x[j+1] && j > 0) j--;
		if(j == 0) break;
		else {
			while(x[k] < x[j]) k--;
			swap(x[k], x[j]);
			sort(x + j + 1, x + n + 1);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		sinhHoanVi(n);
		cout << endl;
	}
	return 0;
}
