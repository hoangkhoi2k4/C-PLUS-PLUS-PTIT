#include <bits/stdc++.h>

using namespace std;

string s;

void check(){
	if(s[0] == '-'){
		s.erase(0, 1);
	}
	int n = s.length();
	for(int i = 0; i < n ; i++) {
		if(i%2 == 0 && (s[i] - '0')%2 != 1){
			cout << "NO";
			return;
		} 
		if(i%2 == 1 && (s[i] - '0')%2 != 0){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		check();
		cout << endl;
	}
	return 0;
}
