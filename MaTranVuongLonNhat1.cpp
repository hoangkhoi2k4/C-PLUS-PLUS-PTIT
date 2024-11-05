#include<iostream>
using namespace std;
char a[2000][2000];
int n, res, i , j;
void find(int k) {
	if (i + k < n && j + k < n ) {
		if (a[i + k][j] == 'X' && a[i][j + k] == 'X') {
			find(k + 1);
			for (int x = 1; x <= k ; x++) {
				if (a[i + k][j + x] == 'O' || a[i + x][j + k] == 'O') return;
			}
			res = max(k + 1, res);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		rs = 0;
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0; j < n ; j++) {
				cin >> a[i][j];
			}
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (a[i][j] == 'X' && rs <= min(n - i - 1, n - j - 1)) find(0);
			}
		}
		cout << rs << endl;
	}
}
