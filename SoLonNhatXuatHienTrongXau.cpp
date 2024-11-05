#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	if(a.length() != b.length()){
		return a.length() > b.length();
	}
	return a > b;
}

int main() {
	string s;
	cin >> s;
	vector<string> v;
	string sum = "";
	for(int i = 0; i < s.length() ; i++) {
		while(isdigit(s[i])) {
			sum += s[i];
			++i;
		}
		if(sum != "")
			v.push_back(sum);
		sum = "";
	}
	for(int i = 0 ; i < v.size() ; i++){
		for(int x = 0; x < v[i].length() ; x++){
			if(v[i][x] == '0'){
				int r = 0;
				while(v[i][x] == '0'){
					++r;
					x++;
				}
				if(r == v[i].length()){
					v[i] = "0";
					break;
				} else {
					v[i].erase(0, r);
					break;
				}
			} else {
				break;
			}
		}
	}
	sort(begin(v), end(v), cmp);
	cout << v[0];
}
