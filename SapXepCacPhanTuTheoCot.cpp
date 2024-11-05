#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[205][205];
	vector<multiset<int>> v(n);
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++) {
			cin >> a[i][j];
			v[j].insert(a[i][j]);
		}
	}
	int h = 0;
	for(int i = 0; i < v.size() ; i++) {
		for(auto x : v[i]){
			a[i][h] = x;
			h++;
		} 
		h = 0;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	
	
}
