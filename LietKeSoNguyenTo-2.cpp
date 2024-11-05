#include <iostream>

using namespace std;

void sang(int a[]) {
	for(int i = 2; i <= 10001; i++) {
		a[i] = 1;
	}
	
	for(int i = 2; i <= 10001; i++) {
		if(a[i] == 1) {
			for(int j = i*i ; j <= 10001; j=j+i) {
				a[j] = 0;
			}
		}
	}
}

void sinh(int n, int m, int a[]) {
	for(int i = n; i <= m; i++) {
		if(a[i] == 1) cout << i <<" ";
	}
}

int main() {
	int t;
	cin >> t;
	int a[100000];
	while(t--) {
		int n,m;
		cin >> n >> m;
		sang(a);
		sinh(n,m,a);
		cout << endl;
	}
}

