#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
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

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int ok = 0;
		for(int i = 0; i <= n; i++) {
			if(snt(i) == 1 && snt(n-i) == 1) {
				ok = 1;
				cout << i << " " << n-i;
				break;
			}
		}
		
		
		cout << endl;
	}
}

