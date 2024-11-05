#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
            a[i] *= a[i];
        }
        sort(a.begin(), a.end());
        bool found = false;
        for(ll i=0; i<n-1; i++){
            if( a[i] != 0 && binary_search(a.begin() + i + 1, a.end(), a[i] + a[i+1])){
                found = true;
                break;
            }
        }
        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

