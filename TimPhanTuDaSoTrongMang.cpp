#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int main(){
    int n; 
    cin >> n;
    map<int , int> mp;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);

    int x, y;
    for(auto it : v){
        x = it.first;
        y = it.second;
        break;
    }
    
    if(y > n/2){
        cout << x << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}

