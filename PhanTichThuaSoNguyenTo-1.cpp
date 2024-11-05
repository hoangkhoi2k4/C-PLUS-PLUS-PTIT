#include <iostream>

using namespace std;

void PTTSNT(int n) {
	int dem;
	for(int i = 2; i <= n; i++) {
		dem = 0;
		while(n%i == 0) {
			dem ++;
			n/=i;
		}
		if(dem) {
			cout << i;
			if(dem >= 1) {
				cout << " " << dem;
			}
			if(n > i) {
				cout << " ";
			}
		}
	}
}

int main() {
	
	int n,t;
	cin >> t;
	while(t--) {
		cin >> n;
		PTTSNT(n);
		cout << endl;
	}
	return 0;
}

