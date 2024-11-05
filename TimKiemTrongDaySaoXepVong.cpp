#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		
		int a[n];
		for(int i = 0 ; i < n ; i++) 
		cin >> a[i];
		int h = 0, index;
		for(int i = 0 ; i < n ; i++) {
			if(a[i] == k) {
				h = 1;
				index = i;
				break;
			}
		}
		if(h == 0)  cout << "-1" << endl;
		else cout << index + 1 <<endl;
	}
}

