#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		
		map<string, int> m;
		stringstream ss(s);
		string word;
		
		while(ss >> word) {
			m[word] ++;
		}
		
		string res;
		int fre = 0;
		for(auto x: m) {
			if(x.second > fre) {
				res = x.first;
				fre = x.second;
			}
		}
		
		cout << res << endl;
	}
	
	return 0;
}
