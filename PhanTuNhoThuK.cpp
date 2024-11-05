#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,index;
		cin >> n >> index;
		int a[n];
		for(int i = 0 ; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		
		cout << a[index - 1];
		cout << endl;
	}
}

