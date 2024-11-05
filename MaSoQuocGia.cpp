#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	while(t--) {
		string s;
		getline(cin, s);
		
		int n = s.size();
		int a[20];
		for(int i = 0 ;i < n; i++) {
			a[i] = s[i] - '0';
		}
		
		int mark = 0;
		for(int i = 0 ; i < n ; i++) {
			cout << "" << a[i];
			if(a[i+1] == 0 && a[i+2] == 8 && a[i+3] == 4) {
				mark = i + 4;
				break;
			}
		}
		for(int i = mark; i < n; i++) {
			cout <<"" << a[i];
		}
		cout << endl;
	}
	return 0;
}

