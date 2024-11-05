#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll x , y, p;
		cin >> x >> y >> p;
		
		ll sum = x;
		for(int i = 1 ; i < y ; i++){
			sum = (sum*x)%p;
		}
		cout << sum << endl;
	}
	
	return 0;
}
