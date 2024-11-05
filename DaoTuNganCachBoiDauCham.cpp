#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	string w;
	stringstream ss(s);
	
	vector<string> v;
	while(getline(ss, w, '.')){
		v.push_back(w);
	}
	for(int i = v.size() - 1; i >= 0 ; i--) {
		if(i != 0) {
			cout << v[i] << ".";
		} else {
			cout << v[i];
		}
	}
}
