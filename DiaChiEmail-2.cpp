#include <bits/stdc++.h>
using namespace std;

void strlwr(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--) {
        string x[50];
        int idx = 0;
        string s;
        getline(cin, s);
        strlwr(s);
        stringstream ss(s);
        string word;
        while (ss >> word) {
            x[idx++] = word;
        }
        string a = x[idx - 1];
        cout << x[idx - 1];
        for (int i = 0; i < idx - 1; i++) {
            cout << x[i][0];
            a += x[i][0];
        }
        if (mp.find(a) == mp.end()) {
            cout << "@ptit.edu.vn" << endl;
        } else {
            cout << mp[a] + 1 << "@ptit.edu.vn" << endl;
        }
        mp[a]++;
    }
}


