#include <bits/stdc++.h>

using namespace std;

int main() {

		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		
		sort(a,a+n);
		
		if(n%2 == 0) {
			for(int i = 0 ; i < n/2 ; i++) {
				cout << a[i] << " " << a[i + n/2] << " ";
			}
		} else {
			for(int i = 0 ; i < n/2 ; i++) {
				cout << a[i] << " " << a[i + (n+1)/2] << " ";
			}
			cout << a[n/2];
		}
		cout << endl; 

	
	return 0;
}

