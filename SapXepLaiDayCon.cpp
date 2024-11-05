#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		
		sort(b,b+n);
		int index1 = -1, index2 = -2;
		for(int i = 0 ; i < n ; i++){
			if(a[i] != b[i] ) {
				index1 = i;
				break;
			}
		}
		for(int i = n - 1; i >= 0; i--) {
			if(a[i] != b[i] ) {
				index2 = i;
				break;
			}
		}
		
		cout << index1 + 1 << " " << index2 + 1 << endl;
	}
}

