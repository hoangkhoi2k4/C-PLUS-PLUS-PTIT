#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(s <= a[i].first) {
            cout << "NO\n"; return 0;
        }
        s += a[i].second;
    }
    cout << "YES\n";
}
