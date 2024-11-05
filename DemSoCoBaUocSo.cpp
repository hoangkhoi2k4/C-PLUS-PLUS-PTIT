#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int snt(ll n) {
	if(n == 2) return 1;
	else  {
		if(n < 2 || n%2 == 0){
			return 0;
		} else  {
			for(ll i = 3; i <= sqrt(n); i+=2) {
				if(n%i == 0) {
					return 0;
					break;
				}
			}
			return 1;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		
		int cnt = 0;
		
		for(ll i = 2 ; i <= sqrt(n); i++) {
			if(snt(i)&& i*i <= n) cnt ++;
		}
		
		cout << cnt << endl;
	}
    
}


