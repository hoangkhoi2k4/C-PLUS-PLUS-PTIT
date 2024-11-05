#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);

    int ans = 1;
    int tmp = v[0].second; 
    for(int i = 1; i < n; i++) { 
        if(v[i].first > tmp) {
            ans++;
            tmp = v[i].second;
        }
    }

    cout << ans << endl;
    return 0;
}

/* 
INPUT:
6
3 8
9 12
6 10
1 4
2 7
11 14
OUTPUT:
3
*/
