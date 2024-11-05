#include <bits/stdc++.h>

using namespace std;

int main() {
	double res;
	int a, b, c , d;
	cin >> a >> b >> c >> d;
	
	res = (double)sqrt(pow(c - a, 2) + pow(d - b, 2));
	cout << fixed << setprecision(9) << res;
}
