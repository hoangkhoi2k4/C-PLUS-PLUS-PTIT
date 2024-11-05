#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int a,n,b,dem,t,j;
	cin >> n;
	while(n--) {
		cin >> a>> b;
		dem = a/b;
		j = b;
		a = a%b;
		t = 0;
		if(dem > 0) 
			t = (b*(b-1)/2)*dem;
		t += a*(a+1)/2;
		
		if(t == j) cout << 1;
		else cout << 0;
		cout << endl;
		
	}
	return 0;
}

