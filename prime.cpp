#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

ll prime(ll n) {
	if( n < 2) return 0;
	else {
		for(int  i = 2 ; i <= sqrt(n); i++) {
			if( n % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n ;
		cin >> n;
		
		if(prime(n)) cout << n << " la so nguyen to";
		else cout << n << " khong phai la so nguyen to";
		
		cout << "\n";
	}
	
	return 0;
}
