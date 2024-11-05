#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> m;
	for(int i = 0 ; i < 10 ; i++) {
		string x; int y;
		cin >> x >> y;
		m.insert(make_pair(x, y));
	}
	int q; cin >> q;
	while(q--) {
		string x;
		cin >> x;
		int l = 0, r = 0, sum = 0;
		for(int i = 0 ; i < x.length() ; i++) {
			int so = 0;
			if(x[i] >= '0' && x[i] <= '9'){
				r = i - 1;
				while(x[i] >= '0' && x[i] <= '9'){
					so = so*10 + (x[i] - '0');
					i++;
				}
				sum += m[x.substr(l, r - l + 1)] * so;
				l = i;
			}
		}
		cout << sum << endl;
	}
	
	
	return 0;
}
