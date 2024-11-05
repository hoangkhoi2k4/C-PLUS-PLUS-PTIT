#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int a[1005][1005];
ll F1[1005][1005], F2[1005][1005];


int main() {

	int n, m;
	cin >> n >> m;

	for(int i = 1 ; i <= n; i++) {
		for(int j = 1 ; j <= m ; j++) {
			cin >> a[i][j];
			F1[i][j] = F1[i][j-1] + a[i][j];
			F2[i][j] = F2[i-1][j] + a[i][j];
		}
	}

	int q;
	cin >> q;
	while(q--) {
		int t;
		cin >> t;
		if(t==1) {
			int x, y, z;
			cin >> x >> y >> z;
			cout << F1[x][z] - F1[x][y-1] << endl;
		} else {
			int u, v, t;
			cin >> u >> v >> t;
			cout << F2[t][u] - F2[v-1][u] << endl;
		}
	}
}
