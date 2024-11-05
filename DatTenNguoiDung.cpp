#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	map<string, int> mp;
	cin.ignore();
	while(t--) {
		string username;
		getline(cin, username);
		
		if(mp.find(username) == mp.end()){
			cout << username << endl;
		} else{
			cout << username << mp[username] << endl;
		}
		mp[username]++;
	}
}
