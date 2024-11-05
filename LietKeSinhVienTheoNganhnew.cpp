#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ma;
	string name;
	string clas;
	string email;
	string nganh;
};
void nhap (SinhVien &p) {
	cin >> p.ma;
	cin.ignore();
	getline (cin, p.name);
	cin >> p.clas;
	cin >> p.email;
	p.nganh = p.ma.substr (3, 4);
	if(p.nganh == "DCKT") p.nganh = "KE TOAN";
	if(p.nganh == "DCCN" && p.clas[0] != 'E') p.nganh = "CONG NGHE THONG TIN";
	if(p.nganh == "DCAT" && p.clas[0] != 'E') p.nganh = "AN TOAN THONG TIN";
	if(p.nganh == "DCVT" ) p.nganh = "VIEN THONG";
	if(p.nganh == "DCDT" ) p.nganh = "DIEN TU";
	
}
void in (SinhVien p[], int n, string s[], int x) {
	for (int i=0; i<x; i++) {
		cout << "DANH SACH SINH VIEN NGANH ";
		cout << s[i] << ":" << endl;
		for (int j=0; j<n; j++) {
			if(s[i] == p[j].nganh) {
				cout << p[j].ma << " ";
				cout << p[j].name << " ";
				cout << p[j].clas << " ";
				cout << p[j].email << endl;
			}
		}
	}
}
int main () {
	int n;
	cin >> n;
	SinhVien p[10000];
	for (int i=0; i<n; i++) nhap(p[i]);
	int x;
	cin >> x;
	string s[1000];
	cin.ignore();
	for (int i=0; i<x; i++) {
		getline(cin, s[i]);
		string ss = s[i];
		for (int j=0; j<ss.length(); j++) {
			if(ss[j] >= 'a' && ss[j] <= 'z') ss[j] -= 32;
		}
		s[i] = ss;
	}
	in (p, n, s, x);
	return 0;
}
