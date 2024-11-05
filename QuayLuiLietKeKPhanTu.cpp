#include <bits/stdc++.h>
#include <vector>

using namespace std;

void Try(vector<int>& A, vector<int>& s, int index, int k) {
    if (k == 0) {
        for (int i = s.size() - 1; i >= 0 ; i--) {
            cout << s[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = index; i < A.size(); ++i) {
        if (s.empty() || A[i] > s.back()) {
            s.push_back(A[i]);
            Try(A, s, i + 1, k - 1);
            s.pop_back();
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
	sort(v.begin(), v.end());
    int k;
    cout << "Nhap k: ";
    cin >> k;

    vector<int> s;
    Try(A, s, 0, k);

    return 0;
}

