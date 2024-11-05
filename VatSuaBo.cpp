#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	
	sort(a, a+n, greater<int>());
	int sum = 0;
	for(int i = 0 ; i < n; i ++) {
		if(a[i] > 0) {
			sum += a[i];
		}
		for(int j = i + 1; j < n ; j++) {
			a[j]--;
		}
	}
	cout << sum;
	
	return 0;
}

/* INPUT:
4
2 1 4 3
OUTPUT:
6
*/
