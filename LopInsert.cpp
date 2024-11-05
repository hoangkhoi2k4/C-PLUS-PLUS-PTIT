#include <iostream>
#include <set>
#include <fstream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);	
	ifstream fs("DATA.in");
	int n, m, x;
	fs >> n >> m;
	
	set<int> s;
	unordered_map<int, int> m1;
	
	while(n --) {
		fs >> x;
		++m1[x];
	}
	while(m --) {
		fs >> x;
		if(m1[x]) {
			s.insert(x);
		}
	}
	
	for(int a : s) cout << a << " ";
	
	return 0;
}
