#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	
	sort(a, a + n, greater<int>());
	
	for(int i : a) cout << i << " ";
	return 0;
}
