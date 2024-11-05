#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Find(int n, vector<int>& A) {
    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        B[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        if (find(A.begin(), A.end(), B[i]) == A.end()) {
            return B[i];
        }
    }

    return n + 1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> A(n - 1);

        for (int i = 0; i < n - 1; i++) {
            cin >> A[i];
        }

        int result = Find(n, A);
        cout << result << endl;
    }

    return 0;
}


