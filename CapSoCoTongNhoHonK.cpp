#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() { 
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    
    ll sum = 0;
    for(int i = 0; i < n-1; i++) {
        auto it = lower_bound(a+i+1, a+n, k - a[i]);
        sum += it-a-i-1;
    }
    cout << sum << endl;
    return 0;
}
