#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ;i < n; i++) {
			cin >> a[i];
		}
		
		int Min =1;
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			if(a[i] > 0) {
				if(a[i] <= Min) {
				Min = a[i] + 1;
			} else break;
			}
		}
		cout << Min << endl;
	}
}

