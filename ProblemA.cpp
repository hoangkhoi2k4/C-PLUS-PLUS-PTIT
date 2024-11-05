#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
	for(int i =  2 ; i <= sqrt(n) ;i++ ){
		if(n%i == 0) {
			int dem = 0;
			while(n%i == 0){
				n/=i;
				dem ++;
				if(dem >= 3){
					return true;
				}
			}
		}
	}
	return false;
}

int main(){
	ll n; cin >> n;
	if(check(n)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
