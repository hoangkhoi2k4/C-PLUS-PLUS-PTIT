#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin>> n >> m;
		int a[n], b[m];
		int c[m*n];
		int h = 0;
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			c[h] = a[i];
			h++;
		}
		for(int i = 0 ; i < m; i++) {
			cin >> b[i];
			c[h] = b[i];
			h++;
		}
		
		sort(c, c+ h);
		for(int i = 0 ; i < h; i++) {
			cout << c[i] << " ";
		}
		
		cout << endl;
	}
	return 0;
}

