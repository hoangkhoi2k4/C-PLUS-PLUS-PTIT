#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sumz = 0;
ll subz = 0;
ll n, m;
ll a, b;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b, a%b);
}

void init() {
	cin >> n >> m;
	
	subz = m;
	sumz = (n + 1)*n >> 1;
	a = (sumz + subz) >> 1;
	b = sumz - a;
}

void process() {
	if(a << 1 != sumz + subz) {
		cout << "No\n";
		return ;
	}
	
	ll tmp = gcd(a, b);
	if(tmp == 1) cout << "Yes\n";
	else cout << "No\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		init();
		process();
	}
	return 0;
}
