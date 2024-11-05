#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		
		sort(b,b+n);
		
		for(int e : a) {
			auto it = upper_bound(b,b+n,e);
			if(it != b + n) {
				cout << *it << " ";
			} else  {
				cout << "_ ";
			}
		}
		cout << endl;
	}
	
	return 0;
}

