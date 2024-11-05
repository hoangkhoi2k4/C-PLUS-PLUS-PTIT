#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if(b == 0){
		return a;
	} else return gcd(b, a%b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int mi = INT_MAX, ma = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        mi = *min_element(begin(a), end(a));
        ma = *max_element(begin(a), end(a));
        
        int cnt = 0;
        
        if (mi != ma) {
            int gcdA = a[0] - mi;
            
            for (int i = 0; i < n; i++)
                gcdA = gcd(gcdA, a[i] - mi);
            
            for (int j = 1; j <= gcdA; j++) {
                if (gcdA % j == 0)
                    cnt++;
            }
        }
        
        cout << cnt << endl;
    }
}


