#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + n);// sap xep theo thu tu tang dan
        
        int minDiff = INT_MAX;
        for (int i = 1; i < n; i++) {
            int diff = a[i] - a[i-1];
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
        
        cout << minDiff << endl;
    }
    
    return 0;
}
