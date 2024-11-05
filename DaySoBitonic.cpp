#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> a(n);
		
		for(int i = 0 ; i < n; i++) cin >> a[i];
		vector<int> l(n,1);
		vector<int> r(n , 1);
		for(int i = 1 ; i < n ; i++) {
			int tmp  = 0;
			for(int j = i ; j >= 0 ; j--) 
				if(a[i] > a[j]) tmp = max(tmp, l[j]);
			l[i] = tmp + 1;
		}
		
		for(int i = n - 2; i >= 0 ; i--){
			int tmp = 0;
			for(int j = i ; j < n ; j++) 
				if(a[i] > a[j])tmp = max(tmp, r[j]);
			r[i] = tmp + 1;
		}
		
		int res = 0;
		for(int i = 0 ; i < n; i++) res = max(res, l[i] + r[i] - 1);
		cout << res << endl;
		
 	}
	
	return 0;
}
