#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		ll s = 0;
		cin >> n >> m;
		int a[n][m], b[3][3];
		for(int i = 0 ; i < n; i++) {
			for(int j = 0 ; j < m; j ++) {
				cin >> a[i][j];
			}
		}
		
		for(int i = 0 ; i < 3; i++) {
			for(int j = 0 ; j < 3; j++) {
				cin >> b[i][j];
			}
		}
		
		int s1 = n - 2, s2 = m - 2;
		for(int i = 0 ; i < s1 ; i++) {
			for(int j = 0 ; j < s2; j++) {
				int s3 = i + 3, s4 = j + 3;
				for(int x = i ; x < s3 ; x++) {
					for(int y = j ; y < s4 ; y++){
						s+= a[x][y]*b[x-i][y-j];
					}
				}
			}
		}
		cout << s << endl;
	}
	
	return 0;
}
