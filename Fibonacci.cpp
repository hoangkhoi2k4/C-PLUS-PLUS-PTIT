#include <bits/stdc++.h>

using namespace std;
unsigned long long n, t = 1, fibo[120];

void sang(){
	fibo[0] = 0;
	fibo[1] = 1;
	
	for(int i = 2; i < 120; i ++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

int main(){
	cin >> n;
	if(t == 1)
	sang();
	
	t++;
	for(int i = 0 ; i < n; i++) {
		cout << fibo[i] << " ";
	}
	
	return 0;
}
