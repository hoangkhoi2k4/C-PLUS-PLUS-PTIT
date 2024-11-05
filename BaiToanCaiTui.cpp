#include <bits/stdc++.h>

using namespace std;
int n, ind;
long b, a[100], c[100], f[100][100];
int Xopt[100], X[100];
float w, Fopt = -32000, cost, weight = 0;

void Update_Kyluc(){
	if(cost > Fopt){
		Fopt = cost;
		for(int i = 1; i <= n; i++) {
			Xopt[i] = X[i];
		}
	}
}

void Result(){
	cout << "\n Ket qua toi uu: "<< Fopt;
	cout << "\n Phuong an toi uu:";
	for(int i = 1; i <= n; i++) {
		cout << Xopt[i] << " ";
	}
}

void Branch_And_Bound(int i){
	int j, t = (b - weight)/(a[i]);
	for( j = t; j >= 0; j--) {
		X[i] = j;
		weight = weight + a[i]*X[i];
		cost += c[i]*X[i];
		if(i == n) Update_Kyluc();
		else if(cost + c[i+1]*(b- weight)/a[i+1] > Fopt){
			Branch_And_Bound(i+1);
		}
		
		weight  -= a[i]*X[i];
		cost = cost - c[i]*X[i];
	}
}


int main(){
	cout << "So luong do vat: "; cin >> n;
	cout << "Trong luong tui: "; cin >> b;
	for(int i = 1 ; i <= n; i++) {
		cout << "Nhap gia tri su dung thu " << i << ": ";
		cin >> c[i];
	}
	for(int i = 1; i <= n; i++) {
		cout << "Nhap trong luong cua do vat thu " << i << ": ";
		cin >> a[i];
	}
	Branch_And_Bound(1);
	Result();	
	return 0;
}
