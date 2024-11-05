#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		
		vector<int> v;
		while(n%2==0){
			v.push_back(2);
			n/=2;
		}
		
		for(int i = 3 ; i * i <= n; i+=2){
			while(n%i == 0) {
				v.push_back(i);
				n/=i;
			}
		}
		if(n > 2) v.push_back(n);
		
		int s = v.size();
		cout << v[s - k + 1] << endl;
	}
	return 0;
}
