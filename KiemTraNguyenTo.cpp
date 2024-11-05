#include <iostream>
#include <math.h>

using namespace std;

int snt(int n) {
	if(n < 2) {
		return 0;
	} else {
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
	int n;
	cin >> n;
	if(snt(n) == 1) {
		cout << "YES";
	} else  {
		cout << "NO";
	}
	return 0;
}

