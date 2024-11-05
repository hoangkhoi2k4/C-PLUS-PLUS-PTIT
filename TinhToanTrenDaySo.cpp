#include <iostream>
#include <cmath>

#define Mod 1000000007

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if(a == 0) return b;
	else return gcd(b%a, a);
}

ll Pow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res *= a;
            res %= Mod;
        }
        a *= a;
        a %= Mod;
        b /= 2;
    }
    return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		ll h = 1;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			h*=a[i];
			h%=Mod;
		}
		
		ll g = a[0];
		for(int i = 1; i < n ; i++) {
			g = gcd(g, a[i]);
		}
		cout << Pow(h,g) << endl;
		
	}
	return 0;
}

