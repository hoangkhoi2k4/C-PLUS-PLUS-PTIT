#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		sort(a,a+n);
		int min = INT_MAX;
		for(int i = 1 ; i < n ; i++) {
			if(min != a[0] && min > a[i]){
				min = a[i];
			}
		}
		
		if(min != a[0]) {
			cout << a[0] << " "<<min << endl;
		} else {
			cout << "-1" <<endl;
		}
	}
}

