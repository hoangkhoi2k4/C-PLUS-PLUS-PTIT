#include <bits/stdc++.h>

using namespace std;

int n, k, a[10000];

void in() {
	cout << "{ ";
	for(int i = k ; i >= 1; i--){
		if( i == 1) {
			cout << a[i] ;
		} else 
			cout << a[i] << ", ";
	}
	cout << "}";
	cout << endl;
}

void sinh(){
	cin >> n >> k;
	for(int i = 1 ; i <= k; i++) a[i] = i;
	while(1){
		in();
		int i = k;
		while(a[i] == n - k + i && i > 0) {
			i--;
		}
		if(i == 0) break;
		else{
			a[i] ++;
			for(int j = i + 1; j <= k ; j++) a[j] = a[j -1 ] + 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		sinh();
	}
	return 0;
}
