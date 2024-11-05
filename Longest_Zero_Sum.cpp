#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> mp;
    mp[0] = -1;
    int sum = 0;
    int len = 0;
    int start = -1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (mp.find(sum) != mp.end()) {
            if (len < i - mp[sum]) {
                len = i - mp[sum];
                start = mp[sum] + 1;
            }
        }
        else {
            mp[sum] = i;
        }
    }

    if (start == -1) {
        cout << "NOT FOUND";
    }
    else {
        for (int i = start; i < start + len; i++) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
