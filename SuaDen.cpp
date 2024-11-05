#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k ,b;
	cin >> n >> k >> b;
	int a[100001] = {0};
	
	for(int i = 0 ; i < b ; i++) {
		int x; cin >> x;
		a[x] = 1; // danh dau vi tri den bi hong
	}
	int cnt = 0;
	for(int i = 1; i <= k;i++){
		if(a[i]) cnt++;
	}
	int res = cnt;
	for(int i = k+1 ; i <= n; i++) {
		cnt = cnt -  a[i - k] + a[i];
		res = min(res, cnt);
	}
	cout << res;
	
	return 0;
}
