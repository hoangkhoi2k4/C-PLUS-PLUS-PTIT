#include <bits/stdc++.h>

using namespace std;

int main(){
	
	map<char, int> m;
	m.insert(make_pair('A', 0));m.insert(make_pair('B', 1));m.insert(make_pair('C', 2));m.insert(make_pair('D', 3));m.insert(make_pair('E', 4));m.insert(make_pair('F', 5));m.insert(make_pair('G', 6));m.insert(make_pair('H', 7));m.insert(make_pair('I', 8));m.insert(make_pair('J', 9));
	m.insert(make_pair('K', 0));m.insert(make_pair('L', 1));m.insert(make_pair('M', 2));m.insert(make_pair('N', 3));m.insert(make_pair('O', 4));m.insert(make_pair('P', 5));m.insert(make_pair('Q', 6));m.insert(make_pair('R', 7));m.insert(make_pair('S', 8));m.insert(make_pair('T', 9));
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int n = s2.length();
		string x = "";
		for(int i = 0; i < n; i++) {
			if(s2[i] >= 'A' && s2[i] <= 'T'){
				x += to_string(m[s2[i]]);
			}
		}
		if(x == s1) {
			cout << "YES\n";
		} else cout << "NO\n";
	}
	return 0;
}
