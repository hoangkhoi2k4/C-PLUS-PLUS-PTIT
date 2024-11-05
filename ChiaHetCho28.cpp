#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll a[n];

    map<ll, ll> mp;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i] % 28]++;
    }

    ll res = 0;

    for (ll i = 0; i <= 27; i++) {
        if (mp[i]) {
            if (i == 0 || i == 14) {
                res += mp[i] * (mp[i] - 1) / 2;
                mp[i] = 0;
            }
            else {
                res += mp[i] * mp[28 - i];
                mp[i] = 0;
                mp[28 - i] = 0;
            }
        }
    }

    cout << res << endl;
    return 0;
}
