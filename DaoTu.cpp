#include <iostream>
#include <sstream>

using namespace std;

void dao(string s){
	string s1 = "";
	string s2 = "";
	
	stringstream ss(s);
	while(ss >> s1) {
		s2 = s1 + s2;
		s2 = " " + s2;
	}
	for(int i = 1 ; i < s2.size(); i++) {
		cout << s2[i];
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		
		dao(s);
	}
	return 0;
}

