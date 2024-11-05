#include <iostream>
#include <string>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if (a == 0) return b;
	else return gcd(b%a, a);
}

ll find(ll a, string b){
	ll res = 0;
	for(int i = 0; i < b.size() ; i++) {
		res = res*10 + b[i] - '0';
		res %= a;
	} 
	return res;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		ll a;
		string b;
		cin >> a;
		cin.ignore();
		getline(cin, b);
		
		cout << gcd(a, find(a, b)) << endl;
	}
	return 0;
}

