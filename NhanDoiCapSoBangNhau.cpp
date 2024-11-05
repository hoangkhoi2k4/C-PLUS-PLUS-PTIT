#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll a[n];
		for(ll i = 0 ; i < n; i++) {
			cin >> a[i];
		}
		
		for(ll i = 0 ; i < n - 1 ; i++) {
			if(a[i] != 0 && a[i] == a[i+1]) {
				a[i] *= 2;
				a[i+1] = 0;
				i++;
			}
		}
		for(ll i = 0 ; i < n; i++) {
			if(a[i] != 0) {
				cout << a[i] << " ";
			}
		}
		for(ll i = 0 ; i < n ; i++) {
			if(a[i] == 0) {
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}

