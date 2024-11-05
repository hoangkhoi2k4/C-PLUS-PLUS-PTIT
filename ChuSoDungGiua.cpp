#include <bits/stdc++.h>

using namespace std;


int main(){
	string s; cin >> s;
	if(s.length()%2 == 0) {
		cout << "NOT FOUND!";
	} else {
		cout << s[s.length()/2];
	}
	return 0;
}
