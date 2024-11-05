#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll test(int n, int a[]){
	ll max_ending = 0;
	ll max_so_far = 0;
	int x = -1000000;
	int check = 1;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] >= 0) check = 0;
		else x = max(x,a[i]);
		max_ending += a[i];
		
		if(max_ending < 0) max_ending = 0;
		if(max_ending > max_so_far) max_so_far= max_ending;
	}
	
	if(check) return x;
	return max_so_far;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n ; i++) {
			cin >> a[i];
		}
		
		cout << test(n,a) << endl;
	}
	return 0;
}

