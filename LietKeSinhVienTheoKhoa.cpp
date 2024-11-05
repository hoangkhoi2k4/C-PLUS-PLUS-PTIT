#include <iostream>
#include <string>

using namespace std;

struct SV{
	string maSV, name, lop, email;
	
	friend istream& operator >> (istream& is, SV &a) {
		getline(is, a.maSV);
		getline(is, a.name);
		getline(is, a.lop);
		getline(is, a.email);
		
		return is;
	}
};

void in(SV a[], int n, string s){
	
	for(int i = 0 ; i < n ; i++) {
		if(stoi(a[i].lop.substr(2,2)) == stoi(s.substr(3,2))) {
			cout << a[i].maSV << " " << a[i].name << " " << a[i].lop << " " << a[i].email << endl;
		}
	}
}
int main() {
	
	int n;
	cin >> n;
	cin.ignore();
	struct SV ds[n];
	
	for(int i = 0 ; i < n ; i++) {
		cin >> ds[i];
	}
	
	int t;
	cin >> t;
	while(t--) {
		string course;
		cin >> course;
		cout << "DANH SACH SINH VIEN KHOA " << course << ":" << endl;
		in(ds,n, course);
	}
	
	return 0;
}

