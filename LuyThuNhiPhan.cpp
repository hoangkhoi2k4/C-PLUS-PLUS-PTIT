#include <bits/stdc++.h>

using namespace std;

long long pow1(int a, int b)
{
	if(b == 0) return 1;
	long long x = pow1(a, b/2);
	if(b%2 == 1) {
		return x*x*a;
	} else return x*x;
}
int main(){
	int a, b, c;
	cin >> a >> b;
	long long res = 1;
	
	cout << pow1(a, b) << " ";
	while(b){
		if(b%2 == 1){
			res *= a;
		}
		b/=2;
		a*=a;
	}
	cout << res;
	return 0;
}
