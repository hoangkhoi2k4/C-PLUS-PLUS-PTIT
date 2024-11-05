#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n;) {
        int cnt = 1;
        char c = s[i];

        int j = i + 1;
        while (j < n && s[j] == c) {
            cnt++;
            j++;
        }

        cout << c << cnt;
        i = j;
    }

    return 0;
}

