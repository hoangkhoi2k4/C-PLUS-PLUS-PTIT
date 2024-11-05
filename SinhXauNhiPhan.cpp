#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 1] = {0};
	int b = 13, max = INT_MIN;
	int tmp[n+1] = {0};
	while(true) {
		for(int i = 1; i <= n ; i++) {
			if(5*a[1] + 7*a[2] + 4*a[3] + a[4] > max && 5*a[1] + 6*a[2] + 2*a[3] + 2*a[4] <= b ){
				max = 5*a[1] + 7*a[2] + 4*a[3] + a[4];
				for(int i = 1 ; i <= n; i++) {
					tmp[i] = a[i];
				}
			}
		} 
		
		int i = n;
		while(a[i] == 1) {
			a[i] = 1 - a[i];
			i--;
		}
		if(i == 0) break;
		else a[i] = 1 - a[i];
	}
	cout << max << endl;
	for(int i = 1; i <= n ; i++) cout << tmp[i] << " ";
	
	return 0;
}
