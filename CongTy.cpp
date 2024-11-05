#include <bits/stdc++.h>
using namespace std;

struct ct{
	string ma, chuc, name, date ;
	int ngay, luong, pc, thuong, thu;
};

void nhap(ct &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.name);
	
	if(a.ma[0] == 'G')  {
		a.chuc = "Giam doc";
		a.pc = 2000000;
	}
	if(a.ma[0] == 'P') {
		a.chuc = "Pho giam doc";
		a.pc = 1000000;
	}
	if(a.ma[0] == 'T') {
		a.chuc = "Truong phong";
		a.pc = 500000;
	} 
	if(a.ma[0] == 'N') {
		a.chuc = "Nhan vien";
		a.pc = 200000;
	}
	cin >> a.date;
	if(a.date[2] != '/'){
		a.date.insert(0, "0");
	}	
	if(a.date[5] != '/'){
		a.date.insert(3, "0");
	}
	cin >> a.ngay;
	cin >> a.luong;
	
	if(a.ngay >= 27) {
		a.thuong = (a.luong*a.ngay)/5;
	} else if(a.ngay >= 25) {
		a.thuong = (a.luong*a.ngay)/10;
	} else {
		a.thuong = 0;
	}
	a.thu = a.luong*a.ngay + a.pc + a.thuong;
}

bool cmp(ct a, ct b){
	if(a.thu == b.thu) {
		return a.ma < b.ma;
	}
	return a.thu > b.thu;
}

void in(ct a){
	cout << a.ma << " " << a.name << " " << a.chuc << " " << a.date << " " << a.ngay << " "<< a.luong << " " << a.thu << endl;
} 

int main(){
	int n; cin >> n;
	ct ds[n];
	for(int i = 0; i < n; i++) {
		nhap(ds[i]);
	}
	
	sort(ds, ds+n, cmp);
	
	for(int i = 0 ; i < n; i++) {
		in(ds[i]);
	}
	return 0;
}
