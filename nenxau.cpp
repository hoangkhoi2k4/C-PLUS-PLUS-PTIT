#include <iostream>
#include <string>
using namespace std;
string kiTu(const string& s) {
	string kiTu = "";

	int count = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == s[i + 1]) {
			count++;
		} else {
			kiTu += s[i] + to_string(count);
			count = 1;
		}
	}

	return kiTu;
}

int main() {
	string s;
	cin >> s;
	cout << kiTu(s) ;

	return 0;
}


