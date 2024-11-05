#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

struct SinhVien{
	string msv, name, lop, date;
	double gpa;
};

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++) {
		if(i == 0) cin.ignore();
		a[i].msv = to_string(cnt);
		while(a[i].msv.length() < 3){
			a[i].msv = "0" + a[i].msv;
		}
		a[i].msv = "B20DCCN" + a[i].msv;
		cnt++;
		
		getline(cin, a[i].name);
		getline(cin, a[i].lop);
		getline(cin, a[i].date);
		
		if(a[i].date[2] != '/') a[i].date.insert(0, "0");
		if(a[i].date[5] != '/') a[i].date.insert(3, "0");
		
		cin >> a[i].gpa;
		cin.ignore();
		
	}
}

void in(SinhVien a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i].msv << " " << a[i].name << " " << a[i].lop << " " << a[i].date << " " << fixed <<setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}
