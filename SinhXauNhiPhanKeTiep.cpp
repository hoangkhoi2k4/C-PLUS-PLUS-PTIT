#include <iostream>

using namespace std;

string s;

void sinh() {
	int n = s.size() - 1;
	int i;
	for( i = n ; i >= 0; i--) {
		if(s[i] == '0') {
			break;
		}
	}
	if(i == -1) {
		cout << "khong the sinh xau ke tiep" << endl;
		return;
	}
	s[i] = '1';
	i++;
	for( i; i <= n ; i++) {
		s[i] = '0';
	}
	for(i = 0 ; i <= n ; i++) {
		cout << s[i];
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		cin >> s;
		cout << "xau ke tiep la: "<< endl;
		sinh();
	}
	
	return 0;
}
