#include <iostream>
#include <cmath>

int snt(int n) {
	if(n < 2) return 0;
	else {
		for(int i = 2; i <= sqrt(n) ; i++) {
			if(n%i == 0) {
				return 0;
				break;
			}
		}
			return 1;
	}
}

int gcd(int a, int b) {
	if(a == 0) return b;
	else return gcd(b%a,a);
} 

using namespace std;
int main() {
	 int t;
	 cin >>t;
	 while(t--) {
	 	int x;
	 	cin >> x;
	 	int cnt = 1;
	 	for(int i = 2 ; i < x; i++) {
	 		if(gcd(i,x) == 1) cnt++;
		 }
		 
//		 cout << cnt << endl;;
		 if(snt(cnt) == 1) cout << 1 << endl;
		 else cout << 0 << endl;
	 }	
}

