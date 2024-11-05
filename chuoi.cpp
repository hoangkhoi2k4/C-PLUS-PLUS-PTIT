#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void solve(string& s) {
    vector<string> v;
    istringstream ss(s);
    string w;

    while (getline(ss, w, '.')) {
        v.push_back(w);
    }

    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it;
        if (it + 1 != v.rend()) {
            cout << ".";
        }
    }
}

int main() {
    string s ; cin >> s;
    solve(s);
    return 0;
}

