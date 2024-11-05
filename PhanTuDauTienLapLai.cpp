#include <iostream>
#include <unordered_set>
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

        unordered_set<int> set;
        int d = -1;

        for (int i = 0; i < n; i++) {
            if (set.count(a[i])) {
                d = a[i];
                break;
            } else {
                set.insert(a[i]);
            }
        }

        cout << d << endl;
    }

    return 0;
}


