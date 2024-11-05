#include <iostream>

using namespace std;

void xoayVong(int a[], int n, int index) {
	for(int i = index ; i < n ; i++) {
		cout << a[i] << " ";
	}
	for(int i = 0 ; i < index; i++) {
		cout << a[i] << " ";
	}
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,index;
		cin >> n >> index;
		int a[n];
		for(int i = 0 ; i < n; i++) {
			cin >> a[i];
		}
		 xoayVong(a,n,index);
		cout << endl;
	}
}

