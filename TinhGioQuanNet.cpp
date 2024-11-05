#include <bits/stdc++.h>

using namespace std;

struct x{
	string user, mk, name, vao, ra;
	int vao1 = 0, vao2 = 0, tong, ra1 = 0, ra2 = 0;
};

void nhap(x &a){
	cin >> a.user;
	cin >> a.mk;
	cin.ignore();
	getline(cin , a.name);
	
	cin >> a.vao;
	string tmp;
	stringstream ss(a.vao);
	vector<string> v1;
	while(getline(ss, tmp, ':')){
		v1.push_back(tmp);
	}
	string y = v1[0];
	for(int i = 0 ; i < y.length() ; i++) {
		a.vao1 = a.vao1*10 + (y[i] - '0');
	}
	string y1 = v1[1];
	for(int i = 0 ; i < y1.length() ; i++) {
		a.vao2 = a.vao2*10 + (y1[i] - '0');
	}
	cin >> a.ra;
	
	stringstream sss(a.ra);
	vector<string> v2;
	while(getline(sss, tmp, ':')){
		v2.push_back(tmp);
	}
	string y3 = v2[0];
	for(int i = 0 ; i < y3.length() ; i++) {
		a.ra1 = a.ra1*10 + (y3[i] - '0');
	}
	string y4 = v2[1];
	for(int i = 0 ; i < y4.length() ; i++) {
		a.ra2 = a.ra2*10 + (y4[i] - '0');
	}
	a.tong = (a.ra1*60 + a.ra2)  - (a.vao1*60 + a.vao2);
}

bool cmp(x a, x b){
	if(a.tong == b.tong) {
		return a.user < b.user;
	}
	return a.tong > b.tong;
}

void in(x a){
	int y, y1;
	y = a.tong/60;
	y1 = a.tong%60;
	cout << a.user << " " << a.mk << " " << a.name << " " << y << " gio " << y1 << " phut" << endl;
}

int main(){
	int n; cin >> n;
	x ds[n];
	for(int i = 0; i < n; i++) {
		nhap(ds[i]);
	}
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; i++) {
		in(ds[i]);
	}
	return 0;
}
