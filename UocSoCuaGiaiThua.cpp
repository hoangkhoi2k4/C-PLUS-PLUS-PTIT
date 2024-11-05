#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        int x = 0;
        for (int i = p; i <= n; i *= p) {
            x += n / i;
        }

        cout << x << endl;
    }

    return 0;
}


