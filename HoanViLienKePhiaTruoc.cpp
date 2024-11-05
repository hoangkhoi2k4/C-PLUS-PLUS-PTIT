#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
            
        prev_permutation(a, a + n);
        
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        
        cout << endl;
    }
    
    return 0;
}


