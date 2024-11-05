#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

ll find(ll n, ll x) {
    ll cnt = 0;
    for (ll i = 1; i <= n; i++) {
        ll low = 1, high = n;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (i * mid == x) {
                cnt++;
                break;
            } else if (i * mid < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return cnt;
}

int main() {
    ll n, x;
    cin >> n >> x;
    ll res = find(n, x);
    cout << res << endl;
    return 0;
}
