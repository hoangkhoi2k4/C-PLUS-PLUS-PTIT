#include <iostream>

using namespace std;
int a[10001];

void sang() {
	for(int i = 2; i <= 10001;i++) a[i] = 1;
	for(int i = 2; i <= 10001; i++) {
		if(a[i] == 1) {
			for(int j = i*i; j <=10001 ; j= j + i) {
				a[j] = 0;
			}
		}
	}
}

void kiemtra(int n) {
	if(a[n] == 1) {
		cout << "0";
	} else {
		int check = 0;
		for(int i = 2; i <= n;i++) {
			if( n%i == 0 && a[i] == 1) {
				n=n/i;
				check++;
				a[i] = 0;
			}
		}
		
		if(check == 3 && n==1) {
			cout << "1";
		} else cout << "0";
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		sang();
		kiemtra(n);
		cout << endl;
	}
}

