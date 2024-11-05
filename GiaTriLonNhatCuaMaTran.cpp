#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long ll;
int chinh[401][401], phu[401][401] = {0};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n, m;
	cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(i == 1 || j == 1) {
				chinh[i][j] = a[i][j];
			} else {
				chinh[i][j] = a[i][j] + chinh[i - 1][j - 1];
			}
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = n; j >= 1; j--) {
			if(i == 1 || j == n) {
				phu[i][j] = a[i][j];
			} else {
				phu[i][j] = phu[i - 1][j + 1] + a[i][j];
			}
		}
	}
	ll ans = INT_MIN;
	for(int i = n; i >= 1; i--) {
		for(int j = n; j >= 1; j--) {
			int tmp = min(j, i);
			int hang = i - tmp, cot = j - tmp;
			for(int k = 0; k < min(i, j); k++) {
				ans = max(ans, 0ll + chinh[i][j] - chinh[hang + k][cot + k] -
				          (phu[i][cot + k + 1] - phu[hang + k][j + 1]));
			}
		}
	}
	cout << ans ;
	return 0;
}

