#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll giaiThua[22];

void init(){
	giaiThua[0] = 1;
	for(int i = 1; i <= 20 ; i++) {
		giaiThua[i] = i*giaiThua[i - 1];
	}
}

// R + G + B = n , R >= r, G >= g, B >= b

void solve(){
	int n, g, r , b;
	cin >> n >> g >> r >> b;
	ll res = 0;
	for(int R = n ; R >= r; R--) {
		for(int G = n - R; G >= g ; G--) {
			int B = n - G - R;
			if(B >= b) res += giaiThua[n] / (giaiThua[R] * giaiThua[G] * giaiThua[B]);
		}
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	init();
	while(t--) {
		solve();
	}
	return 0;
}
