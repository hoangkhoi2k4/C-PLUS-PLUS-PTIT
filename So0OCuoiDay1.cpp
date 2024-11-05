#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void sortV(vector<ll>& v) {
    int n = v.size();
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            swap(v[i], v[cnt]);
            cnt++;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sortV(v);

        for (ll e : v) {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}
