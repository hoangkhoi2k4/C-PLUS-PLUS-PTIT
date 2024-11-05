#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    if (s.size() == 1)
        return false;
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        ++l;
        --r;
    }
    return true;
}

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.first.size() != b.first.size())
        return a.first.size() > b.first.size();
    else
        return a.first > b.first;
    return 0;
}

int main() {
    string s;
    map<string, int> mp;
    
    while (cin >> s) {
        if (check(s))
            mp[s]++;
    }
    
    vector<pair<string, int>> v;
    for (auto x : mp)
        v.push_back(make_pair(x.first, x.second));
    
    sort(v.begin(), v.end(), cmp);
    
    for (auto x : v)
        cout << x.first << " " << x.second << endl;
    
    return 0;
}


