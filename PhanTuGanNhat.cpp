#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n ; i++){
			cin >> a[i];
		}
		int x,k;
		cin >> k >> x;
		int b[k/2] = {0} , c[k/2] = {0};
		int index = -1;
		for(int i = 0 ; i < n ; i++){
			if(a[i] == x) {
				index = i;
				break;
			}
		}
		int m = 0, h = 0;
		for(int i = index - 1 ; i >= 0; i--) {
				b[h] = a[i];
				h++;
			if(h == k/2) {
				break;
			}
		}
		for(int i = index + 1 ; i < n; i++) {
				c[m] = a[i];
				m++;
			if(m == k/2) {
				break;
			}
		}
		
		for(int i = k/2 - 1 ; i >= 0; i--) {
			cout << b[i] << " ";
		}
		for(int i = 0 ; i < k/2; i++) {
			cout << c[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

