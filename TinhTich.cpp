#include <iostream>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

       long long min = INT_MAX, max = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        for (int i = 0; i < m; i++) {
            if (b[i] < min) {
                min = b[i];
            }
        }

        cout << min * max << endl;
    }
    return 0;
}

