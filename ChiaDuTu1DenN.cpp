#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int s,n,dem,t;
	long long k;
	cin >> t;
	while(t--) {
		cin >> n>> k;
		dem = n/k;
		n = n%k;
		s = 0;
		if(dem > 0) 
			s = (k*(k-1)/2)*dem;
		s += n*(n+1)/2;
		
		cout << s << endl;
		
	}
	return 0;
}
