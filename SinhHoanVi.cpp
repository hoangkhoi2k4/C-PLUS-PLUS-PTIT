#include <bits/stdc++.h>

using namespace std;
int n;
void nhap(){
	cout << "Nhap n:\n" ;
	cin >> n; 
}

void sinhHoanVi() {
	int x[n + 1];
	for(int i = 1 ; i <= n ; i++) x[i] = i;
	while(1) {
		for(int i = 1; i <= n ; i++) cout << x[i];
		cout << endl;
		
		int j = n - 1, k = n;
		while(x[j] > x[j+1] && j > 0) j--;
		if(j == 0) break;
		else {
			while(x[k] < x[j]) k--;
			swap(x[k], x[j]);
//			int l = j + 1, r = n;
//			while(l < r) {
//				swap(x[l], x[r]);
//				l++;
//				r--;
//			}
			sort(x + j + 1, x + n + 1);
		}
	}
}

int main() {
	nhap();
	sinhHoanVi();
	return 0;
}
