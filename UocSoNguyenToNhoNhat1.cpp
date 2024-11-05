#include <iostream>
#include <cmath>

using namespace std;

int snt(int n) {
	if(n < 2) return 0;
	else {
		for(int i = 2 ; i <= sqrt(n); i++) {
			if(n%i == 0) {
				return 0;
				break;
			}
		}
		return 1;
	}
}

int uoc(int n) {
	for(int i = 2; i <= n; i++) {
		if(n%i == 0) {
			return i;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		
		cout << 1 << " ";
		for(int i = 2 ; i <= n ; i++) {
			if(i%2 == 0) {
				cout << 2 << " ";
			} else if(snt(i)) {
				cout << i << " ";
			} else cout << uoc(i) << " ";
		}
		
		cout << endl;
	}
	return 0;
}
