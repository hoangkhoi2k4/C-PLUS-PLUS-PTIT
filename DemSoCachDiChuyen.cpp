#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a[20][20] , n , k, Max;
ll sum , res;

void test(int i, int j){
	sum +=  a[i][j];
	if(sum == k && i == n - 1 && j == n - 1) ++res;
	else if(sum + Max * (2*n - i - j - 2) >= k){
		if(i < n - 1) test (i + 1, j );
		if(j < n - 1) test (i , j + 1 );
	}
	sum -= a[i][j];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		Max = -1;
		res = 0 , sum = 0;
		
		for(int i = 0 ; i < n; i++) {
			for(int j = 0 ; j < n; j++) {
				cin >> a[i][j];
				Max = max(Max, a[i][j]);
			}
		}
		test(0, 0);
		cout << res << endl;
	}
}
