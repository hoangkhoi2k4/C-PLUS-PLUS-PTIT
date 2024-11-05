#include <bits/stdc++.h>

using namespace std;

int main() {
	long long x;
	cin >> x;
	
	long long res;
	if(x >3 ) {
		res = pow(x, 3) + 2*pow(x, 2) + 5*x;
	} else if(x < 1){
		res = 5*x - 8;
	} else {
		res = pow(x, 2) - 2*x + 4;
	}
	
	cout << res;
	return 0;
}
