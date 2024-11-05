#include <bits/stdc++.h>

using namespace std;
int n, m, a[100][100], dem = 0;

int dx[8] = {-1, -1, -1, 0 , 0 , 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0 ,1};

void Try(int i, int j, int x){
	++dem;
	a[i][j] = 1000;
	
	
	for(int k =  0 ; k < 8 ; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		
		if(i1 <= n && j1 <= m && i1 >= 1 && j1 >= 1 && a[i1][j1] == x){
			Try(i1, j1, x);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m ; j++) cin >> a[i][j];
	}
	
	map<int, multiset<int>> mp;
	for(int i = 1 ; i <= n ;i++) {
		for(int j = 1; j <= m; j++) {
			if(a[i][j]!= 1000) {
				int tmp = a[i][j];
				dem = 0;
				Try(i, j, tmp);
				mp[tmp].insert(dem);
			}
		}
	}
	for(auto it : mp){
		cout << it.first << " : " ;
//		sort(it.second.begin(), it.second.end());
		for(int x : it.second) {
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
