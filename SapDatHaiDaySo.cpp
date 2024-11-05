#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		
		int a[n], b[m];
		vector<int> v;
		map<int, int> ma;
		
		for(int &i : a) {
			cin >> i;
			ma[i] ++;
		}
		
		for(int i = 0 ; i < m; i++) {
			cin >> b[i];
		}
		sort(a, a+n);
		for(int i = 0 ; i < m; i++) {
			int tmp = ma[b[i]];
			for(int j = 0 ; j < tmp ; j++) {
				v.push_back(b[i]);
				--ma[b[i]];
			}
		}
		for(int i = 0 ; i< n; i++) {
			if(ma[a[i]]) v.push_back(a[i]);
		}
		
		for(int i = 0 ; i < v.size() ; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
