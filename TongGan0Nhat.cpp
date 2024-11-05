#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		int Min = INT_MAX;
		int i1,i2;
		for(int i = 0 ; i < n ; i++) {
			for(int j = i + 1; j < n ; j++){
				if(abs(a[i] + a[j]) < Min) {
					i1 = i;
					i2 = j;
					Min = abs(a[i]  + a[j]);
				}
			}
		}
		
		cout << a[i1]  + a[i2] << endl;
	}
	return 0;
}


