#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() { 
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
    	ll n, k;
    	cin >> n >> k;
    	ll a[n];
    	for(ll i=0; i<n; i++)
        	cin >> a[i];

    	sort(a, a+n);
    	
    	ll sum = 0;
    	for(ll i=0; i<n-1; i++) {
        	auto it = lower_bound(a, a+n, a[i]+k);
        	sum += it-a-i-1;
    	}
	    	cout << sum << endl;
	}
	return 0;
}

