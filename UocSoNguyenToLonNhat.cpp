#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

bool snt(ll n) {
	if(n < 2) return false;
	for(ll i = 2; i <= sqrt(n) ; i++) {
		if(n%i == 0) return false;
	}
	return true;
}

int main() {
	int t; 
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector <ll> v;
		if(snt(n)) cout << n<< endl;
		else {
			for(ll i = 2; i <= sqrt (n) ; i++) {
				if(n%i == 0) {
					while(n%i == 0) {
						v.push_back(i);
						n/=i;	
					}
				}
			}
			if(n > 1) v.push_back(n);
			sort(v.begin() , v.end());
			cout << v[v.size() - 1] << endl;
		}
		
	}
	return 0;
}

