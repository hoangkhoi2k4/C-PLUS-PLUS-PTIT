#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        set<int> c;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c.insert(a[i]);
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            c.insert(b[i]);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int x : c) {
            cout << x << " ";
        }
        cout << endl;

        vector<int> d;
        for (int i = 0; i < n; i++) {
            if (find(b.begin(), b.end(), a[i]) != b.end()) {
                d.push_back(a[i]);
            }
        }

        for (int x : d) {
            cout << x << " ";
        }

        cout << endl;
    }
}


