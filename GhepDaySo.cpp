#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> k >> n;
		int a[k][n], b[n*k];
		int h = 0;
		for(int i = 0; i < k; i++) {
			for(int j = 0; j < n;j++) {
				cin >> a[i][j];
				b[h] = a[i][j];
				h++;
			}
		}
		
		sort(b, b + n*k);
		for(int i = 0 ; i < h ; i++) {
			cout << b[i] << " ";
		}
		cout << endl;		
	}
}

