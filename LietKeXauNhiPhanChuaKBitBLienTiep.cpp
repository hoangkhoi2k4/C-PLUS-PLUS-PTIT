#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];

void in() {
	int cnt1 = 0;
	for(int i = 1; i <= n ; i++) {
		if(a[i]) {
			int cnt = 0;
			while(a[i]) {
				cnt++; i++;
			}
			if(cnt == k) cnt1++;
			--i;
		}
	}
	if(cnt1 == 1) {
		for(int i = 1; i <= n; i++) {
			if(a[i]) {
				cout << "B";
			} else {
				cout << "A";
			}
		}
		cout << endl;
	}
}

void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++) {
		a[i] = j;
		if(i == n) {
			int dem = 0;
			for(int l = 1 ; l <= n ; l++)
				if(a[l] == 1) dem ++;
			if(dem >= k) {
				in();
			}

		} else Try(i + 1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		Try(1);
	}
}
