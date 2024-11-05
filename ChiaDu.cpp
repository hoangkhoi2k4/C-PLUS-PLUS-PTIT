#include <iostream>
#include <fstream>

using namespace std;
int main() {
	int t,a,m,i;
	cin >> t;
	while(t--) {
		cin >> a >> m;
		i = 0;
		while(i*a%m != 1 && i < m) i++;
		if( i!=m) cout << i << endl;
		else cout << -1 << endl;
	}
	return 0;
}

