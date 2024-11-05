#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string s;
        cin >> s;
        
        vector<int> v;
        for (char x : s) {
            v.push_back(x - '0');
        }
        reverse(v.begin(), v.end());
        
        int chk = 0, l = v.size() - 1;
        for (int i = 0; i < l; i++) {
            if (v[i] < v[i + 1]) {
                multiset<pair<int,int>, greater<pair<int,int>>> se;
                for (int j = 0; j <= i; j++) {
                    if (v[j] < v[i + 1]) {
                        se.insert({v[j], j});
                    }
                }
                for (auto x : se) {
                    v[x.second] = v[i + 1];
                    v[i + 1] = x.first;
                    break;
                }
                chk = 1;
                break;
            }
        }
        
        reverse(v.begin(), v.end());
        
        if (chk == 0)
            cout << "-1";
        else
            for (int x : v)
                cout << x;
            
        cout << endl;
    }
    
    return 0;
}


