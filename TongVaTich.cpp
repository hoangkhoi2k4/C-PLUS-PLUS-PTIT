#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	int s = (a%10)+(b%10);
	int p = (a/1000)*(b/1000);
	
	cout << s << endl << p;
	
	return 0;
}
