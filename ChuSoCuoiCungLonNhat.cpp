#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int x = 1000000;
int a[1000001] ;
void sang() {
	for(int i = 2; i <= x; i++) {
		a[i] = 1;
	}
	
	for(int i = 2; i <= sqrt(x); i++) {
		if(a[i] == 1) {
			for(int j = i*i ; j <= x; j=j+i) {
				a[j] = 0;
			}
		}
	}
}

bool check(ll n){
	ll max = n%10;n/=10;
	while(n){
		ll a = n%10;
		if(a > max) return false;
		n/=10;
	}
	return true;
	
}
int main() {
	sang();
	ll n, dem = 0;;
	cin >> n;
	for(ll i = 0 ; i  < n ; i++) {
		if(a[i] && check(i)){
			cout << i << " ";
			dem ++;
		}
	}
	cout <<endl << dem << endl;

	return 0;
}

