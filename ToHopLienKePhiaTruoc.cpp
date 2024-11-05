#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		int a[1001];
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
		}

		bool check = false;

		for (int i = k; i >= 1; i--) {
			if (a[i] - 1 > a[i - 1]) {
				check = true;
				a[i] -= 1;
				for (int j = i + 1; j <= k; j++) {
					a[j] = n - k + j;
				}
				break;
			}
		}

		if (!check) {
			for (int i = 1; i <= k; i++) {
				cout << n - k + i << " ";
			}
		}
		else
			for (int i = 1; i <= k; i++) {
				cout << a[i] ;
			}
		cout << endl;
	}
}
