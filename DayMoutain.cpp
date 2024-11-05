#include <iostream>
#include <algorithm>

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

        int L, R;
        cin >> L >> R;

        if (R - L < 2) {
            cout << "Yes" << endl;
        } else {
            int m = R - L + 1;
            int b[m], c[m];

            for (int i = L; i <= R; i++) {
                b[i - L] = a[i];
                c[i - L] = a[i];
            }

            sort(c, c + m);
            int max = c[m - 1];
	
            int index = -1;
            for (int i = 0; i < m; i++) {
                if (b[i] == max) {
                    index = i;
                    break;
                }
            }

            int ok = 1;
            for (int i = 0; i <= index; i++) {
                for (int j = i + 1; j <= index; j++) {
                    if (b[i] > b[j]) {
                        ok = 0;
                        break;
                    }
                }
            }

            if (ok == 0) {
                cout << "No" << endl;
            } else {
                int ak = 1;
                for (int i = index; i < m; i++) {
                    for (int j = i + 1; j < m; j++) {
                        if (b[i] < b[j]) {
                            ak = 0;
                            break;
                        }
                    }
                }
                if (ak == 0) {
                    cout << "No" << endl;
                } else {
                    cout << "Yes" << endl;
                }
            }
        }
    }
}


