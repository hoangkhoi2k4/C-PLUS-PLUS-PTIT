#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void nhan(ll a[2][2], ll b[2][2]){
	ll res[2][2];
	for(int i = 0 ; i < 2; i++) {
		for(int j = 0 ; j < 2; j++) {
			res[i][j] = 0;
			for(int k = 0 ; k < 2; k++) {
				res[i][j] += a[i][k]*b[k][j] % 1000000007;
			}
		}
	}
	
	for(int i = 0 ; i < 2; i++) {
		for(int j = 0 ; j < 2; j++) {
			a[i][j] = res[i][j];
		}
	}
}

void pow1(ll n) {
	ll res[2][2] = { {1, 0} , { 0, 1}};
	ll a[2][2] = {{1, 1} , {1 , 0}};
	while(n){
		if(n%2 == 1) {
			nhan(res,a );
		}
		nhan(a, a);
		n/=2;
	}
	cout << res[0][1] << endl;
}

int main(){
	int n; cin >> n;
	pow1(n);
	
	return 0;
}
