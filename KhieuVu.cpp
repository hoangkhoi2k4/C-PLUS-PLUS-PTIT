#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int &i : a) cin >> i;
	for(int &i : b) cin >> i;
	
	sort(a, a+n);
	sort(b, b+ m);
	
	int i =0 , j = 0, res = 0;
	
	while(i <= n && j <= m) {
		if(a[i] <= b[j]){
			++i;
		} else {
			++i, ++j, ++res;
		}
	}
	cout << res;
	return 0;
}

/* INPUT:
3 3
4 3 4
1 2 3
OUTPUT:
3 */
