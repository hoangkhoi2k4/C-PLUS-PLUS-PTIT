#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int,int> b){
    return a.second < b.second;
}
 
int num(char c){
    return c - '0';
}
 
 
void solve(){
    int m, n; cin >> m >> n;
    string s; cin >> s;
    
    int len = s.length();
    ll dp[len][n];
    
    memset(dp,0,sizeof(dp));
    dp[0][num(s[0]) % n] = 1;
    
    for(int i = 1; i < len; i++){
    	
        dp[i][num(s[i]) % n] ++;
        for(int j = 0; j < n; j++){
            dp[i][j] += dp[i - 1][j];
            dp[i][(j*10 + num(s[i])) % n] += dp[i-1][j];
        }
    }
    cout << dp[len-1][0] << endl;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
