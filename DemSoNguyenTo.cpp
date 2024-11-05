#include <iostream>
#include <cmath>

using namespace std;

int snt(int n) {
    if (n < 2) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (i != 0 && n % i == 0) {
                return 0;
                break;
            }
        }
        return 1;
    }
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        if (L > R) swap(&L, &R);

        int cnt = 0;
        int i = L;
        for (; i <= R; i++) {
            if (snt(i)) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}


