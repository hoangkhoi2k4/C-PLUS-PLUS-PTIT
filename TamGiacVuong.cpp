#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, b = 0;
        cin >> n;
        long long a[n];
        int i, j, k;
        for (i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= a[i];
        }
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                long long x = a[i] + a[j];
                if (sqrt(x) == static_cast<int>(std::sqrt(x))) {
                    for (k = i + 1; k < n; k++) {
                        if (a[k] == x) {
                            cout << "YES" << std::endl;
                            b = 1;
                            break;
                        }
                    }
                    break;
                }
            }
            if (b)
                break;
        }
        if (!b)
            cout << "NO" << std::endl;
    }
}

