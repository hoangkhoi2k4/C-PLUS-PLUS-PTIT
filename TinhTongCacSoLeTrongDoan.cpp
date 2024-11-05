#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	if(a==b) {
		if(a%2 == 0) cout << "0";
		else cout << a;
	} else {
		if(a%2 == 0){
			a++;
		} 
		else if(b%2 == 0) {
			b--;
		}
		
		long long tb = (a+b)/2;
		long long kq = tb*(((b-a)/2)+1);
		cout << kq;
	}
	
	return 0;
}
