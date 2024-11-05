#include <bits/stdc++.h>
#define size 11000
using namespace std;

int prime[size + 1];


void init(){
	memset(prime, 1, sizeof1(prime));
	prime[0] = prime[1] = 0;
	for(int i = 1; i*i <= size ; i++) {
		if(prime[i])
		for(int j = i*i ; j <= size ; j += i){
			prime[j] = 0;
		}
	}
}

int main(){
	init();
	
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i = 2 ; i <= n; i++) {
			if(prime[i]) cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}
