#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		vector<string> v;
		set<string> se;
		stringstream ss(s);
		string word;
		
		while(ss >> word) {
			v.push_back(word);
		}
		for(auto x : v) {
			if(se.find(x) != se.end()){
				cout << x << endl;
				break;
			}
			se.insert(x);
		}
		
		return 0;
	}
}
