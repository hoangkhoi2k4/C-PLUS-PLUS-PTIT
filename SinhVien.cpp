#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string name, dantoc, msv;
	float diem;
	int kv;
};

int ma = 1;
void nhap(SinhVien& a) {
	string c = "TS";
	a.msv = to_string(ma);
	ma++;
	while(a.msv.length() < 2) {
		a.msv = "0" + a.msv;
	}
	a.msv = c + a.msv;
	getline(cin, a.name);
	cin >> a.diem;
	cin.ignore();
	
	getline(cin, a.dantoc);
	
	cin >> a.kv;
	cin.ignore();
}

void chuanHoa(SinhVien& a) {
	for(int i = 0; i < a.name.size() ; i++) {
		a.name[i] = tolower(a.name[i]);
	}
	
	string r ="", x ="";
	stringstream ss(a.name);
	
	while(ss >> r){
		r[0] = toupper(r[0]);
		x += r;
		x+= " ";
	}
	
	a.name = x;
}

void tinhDiem(SinhVien& a) {
	if(a.kv == 1) {
		a.diem += 1.5;
	} else if( a.kv == 2) {
		a.diem += 1;
	}
	
	if(a.dantoc != "Kinh") {
		a.diem += 1.5;
	}
}

bool compare(SinhVien sv1, SinhVien sv2) {
   	if(sv1.diem == sv2.diem) {
   		return sv1.msv < sv2.msv;
	} else  return sv1.diem > sv2.diem;
}

void in(const SinhVien a) {
	if(a.diem >= 20.5) {
		cout << a.msv << " " << a.name << " " << a.diem << " " << "Do";
		cout << endl;
	} else {
		cout << a.msv << " " << a.name << " " << fixed << setprecision(1)<< a.diem << " " << "Truot";
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	vector<SinhVien> sv(n);
	
	for(int i = 0 ; i < n ;i++) {
		nhap(sv[i]);
	}
	
	for(int i = 0 ; i < n ; i++) {
		chuanHoa(sv[i]);
		tinhDiem(sv[i]);
	}
	
	sort(sv.begin(), sv.end(), compare);
	
	for(int i = 0 ; i < n ; i++) {
		in(sv[i]);
	}
}
