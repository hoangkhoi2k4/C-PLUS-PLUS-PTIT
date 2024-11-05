#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    unordered_set<string> LoaiBo;

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        // Loai bo dau cach
        string clean = "";
        for (char c : s) {
            if (c != ' ') {
                clean += c;
            }
        }

        LoaiBo.insert(clean);
    }

    int count = LoaiBo.size();
    cout << count ;

    return 0;
}


