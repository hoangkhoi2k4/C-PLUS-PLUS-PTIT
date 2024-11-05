#include <bits/stdc++.h>

using namespace std;

int main() {

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	stringstream ss(s1);
	string w = "";

	vector<string> v;
	stringstream sss(s2);
	string w1 = "";
	while(sss >> w1) {
		for(char &c : w1) {
			c = tolower(c);
		}
		v.push_back(w1);
	}
	set <string > s;
	std::vector<string>::iterator it;
	while(ss >> w) {
		for(char &c : w){
			c = tolower(c);
		}
		it = find(begin(v), end(v) , w);
		if(it == v.end()) {
			s.insert(w);
		}
	}

	for(auto c : s) cout << c << " ";


	return 0;
}
