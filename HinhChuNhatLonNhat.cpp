#include <bits/stdc++.h>

using namespace std;
int a[30][30];

int Find(int n, int m) {
	for(int i = 0 ; i < n ; i++ ) {
		for(int j = 0 ; j < m ; j++) {
			if(i && a[i][j]) a[i][j] = a[i - 1][j] + 1;
		}
	}
	for(int i = 0 ; i < n; i++)	{
		vector<int> v;
		for(int j = 0 ; j < m ; j++){
			v.push_back(a[i][j]);
		}
		sort(v.begin(), v.end());
		
		for(int j = 0 ; j < v.size() ; j++){
			a[i][j] = v[j];
		}
	}
	
	int res = 0;
	
	for(int i = 0 ;i  <n; i++) {
		int w = 1;
		for(int j =  m - 1; j >= 0; j--) {
			int cur = a[i][j]*w;
			++w;
			
			res = max(res, cur);
		}
	}
	
	return res;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		for(int i = 0 ; i < n; i++) {
			for(int j = 0 ; j < m ; j++) {
				cin >>  a[i][j];
			}
		}
		
		cout << Find(n, m) << endl;
	}
	
	return 0;
}
