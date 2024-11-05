#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[100];
void in() {
	for(int l = 1; l <= n; l++) {
		if(a[l] == 1) {
			cout << 'B';
		} else {
			cout << 'A';
		}
	}
	cout << endl;
}

void Try(int i) {
	for(int j = 0 ; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			int dem = 0;
			for(int l = 1; l <= n; l++) {
				if(a[l] == 1) dem++;
			}
			if(dem == k) in();
		} else Try(i + 1);
	}
}
int main() {
	cin >> n >> k;
	Try(1);
	return 0;
}
