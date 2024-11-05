#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main() {
	double res ,a, b, anpha;
	cin >> a >> b >>anpha;
	double x = pi/180;
	res = (double)(a*b*sin(anpha*x))/2;
	cout << fixed << setprecision(2) << res;
}
