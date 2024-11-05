#include <bits/stdc++.h>

using namespace std;
map <int, int> m;
vector<int> v;
int x;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while(cin >> x){
		if(!m[x]) v.push_back(x);
		++m[x];
		if(cin.peek() == '\n') break;
	}
	for(int i : v) cout << i << " " << m[i] << endl;
	
}
