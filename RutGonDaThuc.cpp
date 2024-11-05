#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);
        vector<pair<int, int>> v;
        stringstream ss(s);
        string tmp;
        vector<string> p;

        while (getline(ss, tmp, '+')) {
            if (tmp[0] == ' ') {
                tmp.erase(0, 1);
            }
            if (tmp[tmp.length() - 1] == ' ') {
                tmp.pop_back();
            }
            p.push_back(tmp);
        }

        unordered_map<int, int> po; 
        for (auto x : p) {
            int index = 0, k = 0;
            for (int i = 0; i < x.length(); i++) {
                if (isdigit(x[i])) {
                    while (isdigit(x[i])) {
                        k = k * 10 + (x[i] - '0');
                        i++;
                    }
                }
                index = i;
                break;
            }
            int h = stoi(x.substr(index + 2)); 
            po[h] += k; 
        }
        
        for(auto x : po) {
        	v.push_back(x);
		}
		sort(begin(v), end(v), cmp);

        for (int i = 0 ; i < v.size() ;i++) {
        	if(i != v.size()  - 1)
            	cout << v[i].second << "x^" << v[i].first << " + ";
            else 
            	cout << v[i].second << "x^" << v[i].first ;
        }
        cout << endl;
    }
    return 0;
}

