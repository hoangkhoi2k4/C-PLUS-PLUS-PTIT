#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m , l;
		cin >> n >> m >> l;
		vector<vector<int>> a(n+1, vector<int> (m+1, 0));
		for(int i = 1 ; i <= n; i++) {
			for(int j = 1; j <= m ; j++) {
				cin >> a[i][j];
				a[i][j] += a[i-1][j] + a[i][j - 1] - a[i - 1][j - 1];
			}
		}
		int s1 = n - l + 1, s2 = m - l + 1;
		for(int i = 1; i <= s1; i++) {
			for(int j = 1; j <= s2 ; j ++) {
				cout << (a[i + l - 1][j + l - 1] - a[i - 1][j + l - 1] - a[i + l - 1][j - 1] + a[i - 1][j - 1]) / (l * l) << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
