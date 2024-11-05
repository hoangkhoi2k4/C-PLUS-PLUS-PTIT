#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, a[105][105] , Row, Col , sumAll = 0;
		
		priority_queue<int> pqRow, pqCol;
		
		cin >> n;
		for(int i = 1; i <= n ; i++) {
			int sum = 0;
			for(int j = 1; j <=n ; j++) {
				cin >> a[i][j];
				sum += a[i][j];
			}
			pqRow.push(sum);
		}
		
		for(int i = 1 ; i <= n; i++) {
			int sum = 0;
			for(int j = 1; j <= n ; j++) {
				sum += a[i][j];
			}
			pqCol.push(sum);
		}
		Row = pqRow.top();
		Col = pqCol.top();
		
		while(!pqRow.empty()){
			sumAll += pqRow.top();
			pqRow.pop();
		}
		cout << max(Row, Col)*n - sumAll << endl;
	}
	
	return 0;
}
