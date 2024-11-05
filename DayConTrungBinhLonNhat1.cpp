#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &i : a) cin >> i;
		
		ll sum = 0;
		for(int i = 0 ; i < k ; i++) {
			sum += a[i];
		}
		ll ans = sum, l, r;
		
		for(int i = k ; i  < n; i++) {
			sum = sum + a[i] - a[i - k];
			if(ans < sum) {
				l = i - k + 1;
				r =  i;
				ans = sum;
			}
		}
		for(int i = l ; i <= r; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
