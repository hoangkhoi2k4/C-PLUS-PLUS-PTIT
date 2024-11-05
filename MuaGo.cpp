#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a[7];
		for(int i = 0 ; i < 7 ; i++) cin >> a[i];
		
		sort(a, a+ 7);
		
		cout << a[0] << " " << a[1] << " " << a[2] << endl;
	}
	
	return 0;
}
