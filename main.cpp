#include <bits/stdc++.h>

using namespace std;

int Sum(int n) {
	int sum = 0;
	while(n) {
		int b = n%10;
		sum += b;
		n/=10;
	}
	
	return sum;
}

int tongThuaSo(int n) {
	int sum = 0;
	for(int i = 2; i <= n ; i++) {
		while(n % i == 0) {
			sum += i;
			n/=i;
		}
		if(n== 1) break;
	}
	
	return sum;
}

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int x1 = Sum(n);
		int x2 = tongThuaSo(n);
		if(x1 == x2) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		
		cout << endl;
	}
	
	
	return 0;
}
