#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& v) {
    int n = v.size();
    vector<int> dp(n, 0); 

    for (int i = 0; i < n; i++) {
        dp[i] = v[i]; 
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j]) {
                dp[i] = max(dp[i], dp[j] + v[i]); 
            }
        }
    }

    return *max_element(dp.begin(), dp.end()); 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int max = find(v);
        cout << max << endl;
    }

    return 0;
}


