#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0 ; i < n; i++) 
		for(int j = 0 ; j < m; j++) 
		cin >> a[i][j];
		
		int b[n * m];
		int i = 0;
		int row = 0, col = 0;
		bool check = true;
		
		while(row < n && col < m) {
			if(check) {
				while(row > 0 && col < m - 1) {
					b[i++] = a[row][col];
					--row;
					++col;
				}
				b[i++] = a[row][col];
				if(col == m - 1) ++ row;
				else ++col;
			} else {
				while(row < n - 1 && col > 0) {
					b[i++] = a[row][col];
					++row;
					--col;
				}
				b[i++] = a[row][col];
				if(row == n - 1) ++col;
				else ++ row;
			}
			check = !check;
		}
		int x = n * m;
		for(int j = 0 ; j < x; j++) {
			cout << b[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
