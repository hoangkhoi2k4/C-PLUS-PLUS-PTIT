#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset<int> a;
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        a.insert(p);
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++) {
        auto it = a.upper_bound(b[i]);

        if (it != a.begin()) {
            it--;
            cout << *it << endl;
            a.erase(it);
        } 
         else {
            cout << "-1\n";
        }
    }

    return 0;
}

