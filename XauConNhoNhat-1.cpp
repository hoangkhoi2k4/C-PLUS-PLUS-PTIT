#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		string a, b;
		cin >> a >> b;
		int dem[26] = {}, s = INT_MAX,  l , r;
		for(int i = 0 ; i < b.length() ; i++) ++dem[b[i] - 'a'];
		for(int i = 0 ; i < a.length() ; i++) {
			int d[26] = {};
		
			for(int j = i ; j < a.length() ; j++) {
				d[a[j] - 'a']++;
				bool check = 0;
				
				for(int k = 0 ; k < 26 ; k++) {
					if(d[k] < dem[k]){
						check = 1;
						break;
					}
				}
				
				if(!check && s > j - i + 1) {
					s = j  - i + 1;
					l = i;
					r = j;
				}
			}
			
		}
		if(s == INT_MAX) cout << - 1 << endl;
		else {
			for(int i = l ; i <= r  ; i++) cout << a[i];
			cout << endl;
		}
	}
	
	return 0;
}
