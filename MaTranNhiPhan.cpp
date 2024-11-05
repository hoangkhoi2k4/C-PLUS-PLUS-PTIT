#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n * 3);

    int cnt = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n * 3; i++) {
        cin >> a[i];
        if (a[i] == 0)
            cnt1++;
        if (a[i] == 1)
            cnt2++;

        if ((i + 1) % 3 == 0) {
            if (cnt2 > cnt1) {
                cnt++;
            }
            cnt1 = 0;
            cnt2 = 0;
        }
    }

    cout << cnt;
    return 0;
}


