#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	getchar();
	while(t--) {
		string s;
		getline(cin, s);
		
		int a = 1;
		for(int i = 0 ; i < s.size(); i++) {
			if(s[i] != '0' && s[i] != '6' && s[i] != '8' ) {
				a = 0;
				break;
			}
		}
		if(a == 0) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}

