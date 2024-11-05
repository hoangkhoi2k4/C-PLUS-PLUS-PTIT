#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	
	for(int &i : a) cin >> i;
	for(int &i : b) cin >> i;
	
	int i = 0 , j = 0;
	while(i < n && j < m) {
		if(a[i] < b[j]){
			++i;
		} else {
			cout << i << " ";
			j++;
		}
	}
	
	while(j < m) {
		cout << n << " " ; ++j;
	}
	
	return 0;
}
