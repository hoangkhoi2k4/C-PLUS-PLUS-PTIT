#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        int a[n];
        for (int &i : a) cin >> i;

        ll sum = 0, ans = INT_MAX; 
        int d = INT_MAX; 
        int l = 0, r;
        for (r = 0; r < n; r++) {
            sum += a[r];
            while (sum > x) {
                d = min(d, r - l + 1);
                ans = min(ans, sum); 
                sum -= a[l];
                ++l;
            }
        }
        if (d != INT_MAX) cout << d << endl; 
        else cout << -1 << endl; 
    }
    return 0;
}

