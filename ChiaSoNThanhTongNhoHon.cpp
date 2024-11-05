#include <bits/stdc++.h>

using namespace std;

int n, k, a[100];
vector<vector<int>> res;

void Try(int i, int sum, vector<int> v){
    if(sum > n) return;
    if(sum == n){
        res.push_back(v);
        return;
    }
    for(int j = i; j <= n; j++){
        if(sum + a[j] <= n){
            v.push_back(a[j]);
            Try(j, sum + a[j], v);
            v.pop_back();
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
        
        vector<int> v; v.clear();
        res.clear();
        Try(1, 0, v);

        sort(res.begin(), res.end());

        if(res.size() == 0){
            cout << -1 << endl;
            continue;
        }
        cout << res.size() << endl;
        for(int i = res.size() - 1; i >= 0 ; i--){
            cout << "(";
            for(int j = res[i].size()  - 1; j >= 1; j--){
                cout << res[i][j] << " ";
            }
            cout << res[i][0] << ") ";
        }
        cout << "\n";
    }
    return 0;
}

