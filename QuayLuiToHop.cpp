#include <bits/stdc++.h>

using namespace std;

int a[100], n, k;

void print() {
	for(int i = 1 ; i <= k ; i++) {
		cout << a[i] ;
	} 
	cout << " ";
}

void QLToHop(int i) {
	for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if(i == k) print();
		else QLToHop(i + 1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		QLToHop(1);
		cout << endl;
	}
	
	return 0;
}
