#include <iostream>

using namespace std;
bool Fibo(int n) {
	if(n < 2) return 1;
	
	int a = 0, b = 1, c = 0;
	while( c < n) {
		c = a + b;
		a = b;
		b = c;
		if(c == n) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		for(int i = 0 ; i < n ; i++) {
			if(Fibo(a[i]) == 1) {
				cout << a[i] << " ";
			}
		}
		
		cout << endl;
	}
	return 0;
}

