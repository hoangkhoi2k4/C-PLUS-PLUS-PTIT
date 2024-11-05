#include <iostream>
#include <string>
using namespace std;

void Binary(int n, string s) {
    if (s.size() == n) {
        cout << s << " ";
        return;
    }

    Binary(n, s + "0");
    Binary(n, s + "1");
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        Binary(n, "");
        cout << endl;
    }

    return 0;
}

