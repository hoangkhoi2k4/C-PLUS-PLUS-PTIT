#include <iostream>

using namespace std;

int a[20],n;

void in() {
	for(int i = 1 ; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void sinh() {
	for(int i = 1 ; i <= n; i++) {
		a[i] = 0;
	}	
	while(1) {
		in();
		int i = n;
		while(i > 0 && a[i] == 1) {
			a[i] = 0;
			--i;
		}
		if(i <= 0) return ;
		else {
			a[i] = 1;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		sinh();
	}
	return 0;
}
