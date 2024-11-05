#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s1, s2, w;
        set<string> kq;

        getline(cin, s1);
        getline(cin, s2);

        stringstream ss(s1);
        s2.insert(s2.length(), " ");

        while (ss >> w) {
            w.insert(w.length(), " ");
            size_t pos = s2.find(w);
            if (pos == string::npos) {
                kq.insert(w);
            }
        }

        for (const string& s : kq) {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}

