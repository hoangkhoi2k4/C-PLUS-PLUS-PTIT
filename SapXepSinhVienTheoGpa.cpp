#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv, name, date, lop;
	float gpa;
};

int m = 1;
void nhap(SinhVien &a){
	string tmp = "";
	tmp += to_string(m);
	while(tmp.length() < 3) {
		tmp = "0"+tmp;
	}
	a.msv = "SV" + tmp;
	m++;
	string s;
	getline(cin, s);
	string x = "";
	stringstream ss(s);
	while(ss >> x){
		x[0] = toupper(x[0]);
		for(int i = 1; i < x.length() ; i++){
			x[i] = tolower(x[i]);
		}
		a.name =    a.name + x + " " ;
	}
	a.name.pop_back();
	cin >> a.lop;
	cin >> a.date;
	if(a.date[1] == '/'){
		a.date.insert(0, "0");
	}
	if(a.date[4] == '/'){
		a.date.insert(3, "0");
	}
	cin >> a.gpa;
	cin.ignore();
}

bool cmp(SinhVien a, SinhVien b){
	if(a.gpa == b.gpa) return a.msv < b.msv;
	return a.gpa > b.gpa;
}

void in(SinhVien a){
	cout << a.msv << " " << a.name << " " << a.lop << " "  << a.date << " " <<fixed << setprecision(2) << a.gpa << endl;
}

int main(){
	int n; cin >> n;cin.ignore();
	SinhVien ds[n];
	for(int i = 0; i < n; i++) {
		nhap(ds[i]);
	}
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; i++) {
		in(ds[i]);
	}
	return 0;
}
