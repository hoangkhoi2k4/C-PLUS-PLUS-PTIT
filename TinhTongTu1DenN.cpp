#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		long n;
		cin >> n;
		long sum = (n * (n + 1)) / 2; // S? d?ng công th?c tính t?ng
		cout << "" << sum << endl;
	}
	return 0;
}
