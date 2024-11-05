#include <bits/stdc++.h>

using namespace std;
int n, k;

void sinhToHop() {
	int x[k+1];
	
	for(int i = 1; i <= k; i++) {
		x[i] = i;
	}
	while(1) {
		for(int i = 1; i <= k; i++) cout << x[i];
		cout << endl;
		int i = k;
		while(x[i] == n - k + i && i > 0) {
			i--;
		}
		if(i == 0) break;
		else {
			x[i]++;
			for(int j = i + 1; j <= k; j++) {
				x[j] = x[j-1] + 1;
			}
		}
	}
}

int main() {
	cin >> n >> k;
	sinhToHop();
	return 0;
}
