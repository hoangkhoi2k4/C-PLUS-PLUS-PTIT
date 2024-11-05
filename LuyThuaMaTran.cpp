#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define mod 1000000007


ll n, k, a[10][10], b[10][10], res = 0;

void Mul(ll x[10][10], ll y[10][10]){
	ll c[10][10];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n ; j++){
			ll res1 = 0;
			for(int k = 0 ; k < n ; k++){
				res1 += (x[i][k]*y[k][j])%mod;
				res1 %= mod;
			}
			c[i][j] = res1 % mod;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j< n; j++){
			a[i][j] = c[i][j]%mod;
		}
	}
}

void Pow(ll a[10][10], ll n){
	if(n <= 1) return;
	Pow(a, n/2);
	Mul(a, a);
	if(n%2 == 1) Mul(a, b);
}

void solve(){
	cin >> n >> k;
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n; j++){
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	Pow(a, k);
	res = 0;
	for(int i = 0 ; i < n ; i++){
		res += (a[n-1][i] % mod) % mod;
		res %= mod;
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

