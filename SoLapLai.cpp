#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
	if(a==0)  return b;
	else return gcd(b%a,a);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a,x,y;
		cin >> a >> x >> y;
		ll m = gcd(x,y);
		for(ll i = 1; i <= m ; i++) {
			cout << a;
		}
		cout << endl;
	}
}

