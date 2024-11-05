#include <iostream>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
	map<int, int> mp;
	mp[100] = 200;
	mp[200] = 300;
	mp[500] = 600;
	mp.insert({300, 400});
	mp.insert({400, 500});
	
	mp.erase(100);
	
	for(pair<int, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	
	return 0;
}
