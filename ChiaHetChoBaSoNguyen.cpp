#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll ucln(ll a, ll b)
{
	if(b == 0) return a;
	return ucln(b, a%b);
}

ll bcnn(ll a, ll b)
{
	return a*b/ucln(a, b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        ll tmp = bcnn(bcnn(x, y), z);
        ll min = (ll)pow(10, n-1), max = (ll)pow(10, n)-1;
        ll res = (min + tmp-1)/tmp * tmp;
        
        if(res <= max) cout << res << endl;
        else cout << -1 << endl;
    }
}
