#include <iostream>
using namespace std;

using ll = unsigned long long;

ll gcd(ll a, ll b, ll c) {
    a = a % c; // Giam do dai cua a de tranh tran so
    ll res = 0;
    while (b > 0) {
        // Neu bit nho nhat cua b la 1, cong a vao res
        if (b & 1) {
            res = (res + a) % c;
        }
        // Nhan a voi 2 va giam di 1 bit cua b 
        a = (a * 2) % c;
        b = b >> 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;

	while (t--) {
    	ll a, b, c;
    	cin >> a >> b >> c;

    	ll res = gcd(a, b, c);
    	cout << res << endl;
	}

	return 0;
}

