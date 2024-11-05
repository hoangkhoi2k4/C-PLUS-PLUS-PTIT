#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	
	for(int &i : a) cin >> i;
	for(int &i : b) cin >> i;
	
	int i = 0, j = 0;
	ll dem = 0;
	while(i < n && j < m) {
		if(a[i] < b[j] ) {
			i++; continue;
		} else if(a[i] > b[j]) {
			j++; continue;
		} else {
			int dem1 = 0, dem2 = 0;
			while(i < n && a[i] == b[j]) {
				i++;
				dem1++;
			}
			while(j < m && a[i-1] == b[j]){
				j++;
				dem2++;
			}
			dem += 1ll*dem1*dem2;
		}
	}
	
	cout << dem;
	
	return 0;
}
