#include <iostream>
#include <set>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		set<int> s;
		
		for(int i = 0 ; i < n ; i++) {
			int x;
			cin >> x;
			s.insert(x);
		}
		
		int ok = 0;
		for(int x : s) {
			if(s.find(x + k) != s.end()) {
				ok = 1;
				cout << 1 << endl;
				break;
			}
		}
		if(ok != 1) cout << -1 << endl;
	}
	
	return 0;
}

