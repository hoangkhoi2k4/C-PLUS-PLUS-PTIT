#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], check = 0;
		map<int, int> m;
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			m[a[i]]++;
		}
		for(int i = 0 ; i < n; i++) {
			if(m[a[i]] > 1){
				cout << a[i] << endl;
				check = 1;
				break;
			}
		}
		if(!check) cout << "NO\n";
	}
	return 0;
}
