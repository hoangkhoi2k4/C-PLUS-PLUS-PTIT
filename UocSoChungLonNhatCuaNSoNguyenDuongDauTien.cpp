#include <iostream>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        long long result = 1;
        for (ll i = 2; i <= n; i++) {
            result = lcm(result, i);
        }

        cout << result << endl;
    }

    return 0;
}


