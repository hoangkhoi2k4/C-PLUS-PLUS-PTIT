#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n < 2) return 0;
	else {
		for(int i = 2; i <= sqrt(n) ; i++) {
			if(n % i == 0) {
				return 0;
				break;
			}
		}
		return 1;
	}
}

int main() {
	int x;
	cin >> x;
	while(x--) {
		int n;
		cin >> n;
		for(int i = 2; i*i <= n; i++) {
			if(snt(i)) cout << i*i << " ";
		}
		cout << endl;
	}
}

