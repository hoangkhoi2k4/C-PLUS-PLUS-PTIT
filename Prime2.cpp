#include <bits/stdc++.h>

using namespace std;

const int maxn = (int)1e6;

int a[maxn + 1];

void sang() {
	for(int i = 0; i <= maxn; i++) {
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i = 2; i <= sqrt(maxn); i++) {
		if(a[i]) {
			for(int j = i * i; j <= maxn; j += i) {
				a[j] = 0;
			}
		}
	}
}
int F[1000001];

int main() {
	sang();
	F[0] = F[1] = 0;
	int dem = 0;
	for(int i = 2; i <= maxn; i++) {
		if(a[i]) {
			dem++;
		}
		F[i] = dem;
	}
	int t;
	cin >> t;
	while(t--) {
		int l,r;
		cin >> l >> r;
		cout << F[r] - F[l] << endl;
	}
	return 0;
}
