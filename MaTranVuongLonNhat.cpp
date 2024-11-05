#include <bits/stdc++.h>

using namespace std;
int n;
char a[405][405];

int solve(){
	int max = 0;
	int h[n][n], v[n][n];
	h[0][0] = v[0][0] = (a[0][0] - 'X');
	
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < n; j++) {
			if (a[i][j] == 'O') v[i][j] = h[i][j] = 0;
			else {
				h[i][j] = (j == 0) ? 1 : h[i][j - 1] + 1;
				v[i][j] = (i == 0) ? 1 : v[i - 1][j ] + 1;
			}
		}
	}
	
	for(int i = n  - 1; i >= 1; i--) {
		for(int j = n - 1; j >= 1; j--) {
			int MIN = min(h[i][j], v[i][j]);
			
			while(MIN > max) {
				if (v[i][j - MIN + 1] >= MIN && h[i - MIN + 1][j] >= MIN) max = MIN;
                --MIN;
			}
		}
	}
	return max;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0 ; i < n; i++) {
			for(int j = 0 ; j < n; j ++) {
				cin >> a[i][j];
			}
		}
		cout << solve() << endl;
	}
}
