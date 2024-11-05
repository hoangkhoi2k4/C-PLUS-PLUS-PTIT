#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	int res = -1; 
	for(int i = 0 ; i < n ; i++) {
		if(a[i] != res) { 
			cout << a[i] << " "; 
			res = a[i]; 
		}
	}
	return 0;
}


