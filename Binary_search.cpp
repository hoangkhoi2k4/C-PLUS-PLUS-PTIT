#include <bits/stdc++.h>

using namespace std;

// linear search
bool ls(int a[], int n, int x){
	for(int i = 0 ; i < n; i++) {
		if(a[i] == x) {
			return true;
		}
	}
	return false;
}

// Binary search using recursion
bool binary_search(int a[], int n, int l, int r, int x) {
	if(l > r) return false;
	int m = (l + r)/2;
	if(a[m] == x) return true;
	else if(a[m] < x) {
		binary_search(a, n, m + 1, r, x);
	} else {
		binary_search(a, n, l, m -1 , x);
	}
}
// Binary search using the usual mathod
bool bin_sea(int a[], int n, int x) {
	int l = 0,r = n - 1;
	while(l <= r) {
		int m =  (l + r)/2;
		
		if(a[m] == x) return true;
		else if(a[m] > x){
			l = m +  1;
		} else {
			r = m - 1;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, x;
	cin >> n >> x;
	int a[n]; 
	for(int i = 0 ; i < n; i++) cin >> a[i];
	
	if(binary_search(a, n, 0, n - 1, x)) cout << "Found!" << endl;
	else cout << "Not found!" << endl;
	return 0;
}
