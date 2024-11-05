#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while(t--) {
		int n; cin >> n;
		
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a + n);
		int cnt = 1;
		for(int i = 0 ; i < n-1; i++) {
			if(a[i] != a[i+1]) {
				cnt++;
			}
		}
		
		cout << cnt << endl;
	}
}
