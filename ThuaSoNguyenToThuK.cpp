#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int main() {

	int n, k;
	cin >> n >> k;
	vector<int> v;

	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			v.push_back(i);
			n /= i;
		}
	}

	if (n != 1) {
		v.push_back(n);
	}

	if (k > v.size()) {
		cout << "-1\n";
	} else {
		cout << v[k - 1] << "\n";
	}


	return 0;
}


