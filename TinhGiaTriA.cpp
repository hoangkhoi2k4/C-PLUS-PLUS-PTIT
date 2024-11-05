#include <bits/stdc++.h>

using namespace std;

int main() {
	long long x;
	cin >> x;
	
	long long res;
	if(x >= 10) {
		res = pow(x, 3) + 5*x;
	} else{
		res = pow(x, 2) - 2*x + 4;
	}
	
	cout << res;
	return 0;
}
