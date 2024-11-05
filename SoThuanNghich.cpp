#include <iostream>

using namespace std;

int soThuanNghich(string s){
	int n = s.size();
	int a[20],b[20];
	for(int i = 0 ; i < n; i++) {
		a[i] = s[i] - '0';
		b[i] = a[i];
	}
	for(int i = n-1; i >= 0; i--){
		a[n - 1 - i] = a[i];
	}
	
	for(int i = 0 ; i < n ; i++){
		if(a[i] != b[i] ) {
			return 0;
			break;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	getchar();
	while(t--) {
		string s;
		getline(cin, s);
	
		if(soThuanNghich(s) == 1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	
}

