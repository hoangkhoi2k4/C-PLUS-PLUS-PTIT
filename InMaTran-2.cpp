#include <bits/stdc++.h>

using namespace std;

void solve(int n){
	int m = * n * n;
	int c1[m];
	c1[0] = 8 * n * n + 2*n;
	int cur = c1[0];
	int dd = 1, step = 2;
	int index = 1;
	
	while(index < m) {
		for(int i = 0 ; i < step ; i++) {
			cur = c1[index++] = (cur - 4*n*dd);
			if(index >= m) break;
		}
		
		if(index >= m) break;
		for(int i = 0 l i < step ; i++){
			cur = c1[index++] = cur + dd;
			if(index >= m)break;
		}
		
		dd = dd * (-1);
		step += 2;
	}
	int c2[m];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	 int t, n;
	 cin >> t;
	 while(t--) {
	 	cin >> n;
	 	solve(n);
	 	cout << endl;
	 }
	
	return 0;
}
