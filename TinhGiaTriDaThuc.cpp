#include <iostream>

using namespace std;
int a[2003];

int main() {
	int n,i,m,x,j;
	long long tong, t;
	cin >> n;
	while(n--) {
		cin >> m >> x;
		for(j = 0; j < m ; j++) {
			cin >> a[j];
		}
		
		m--;
		tong = a[m];
		t = 1;
		for(i = m - 1; i > -1; i--) {
			t = (t*x) % 1000000007;
			
			tong  = (tong + t * a[i]) % 1000000007;
		}
		cout << tong << endl;
	}
	return 0;
}

