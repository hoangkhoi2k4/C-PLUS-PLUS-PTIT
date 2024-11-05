#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		int sum  = 0;
		for(int i = 0 ; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		
		int sum1 = 0;
		int check = -1;
		for(int i = 0 ; i < n ; i++){
			sum1 += a[i];
			if(sum1 == sum - sum1 - a[i+1]) {
				check = i + 2;
				break;
			}
		}
		cout << check  << endl;
	}
	return 0;
}


