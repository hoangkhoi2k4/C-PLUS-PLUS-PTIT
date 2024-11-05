#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define m 1000000007

ll a[1000006];

void sang(){
	a[1] = 1;
	a[0] = 1;
	for(int i = 2 ; i < 1000006 ; i++) {
		a[i] = (a[i-1]*2)%m + (a[i-2]*3)%m;
		a[i] = a[i]%m;
	}
}

int main(){
	sang();
	int n; cin >> n;
	cout << a[n-1] ;
	return 0;
}
