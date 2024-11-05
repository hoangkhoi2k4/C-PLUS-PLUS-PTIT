#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int m = 0;
class SinhVien {
	public:
		string ma, name, lop, date;
		float gpa;
	public:
		SinhVien() {
			ma = "";
			name = "";
			date = "";
			lop = "";
			gpa = 0;
		}

		friend istream& operator >> (istream &is, SinhVien &a) {
			getline(is, a.name);

			while(a.name[0] == ' ') {
				a.name.erase(0,1);
			}
			while(a.name[a.name.length()-1] == ' ') {
				a.name.erase((a.name.length() - 1),1);
			}
			int i = 0;
			while(i < a.name.length()) {
				if(a.name[i] == ' '&& a.name[i+1]==' ') {
					a.name.erase(i,1);
				} else {
					i++;
				}
			}
			for( int i = 0; i < a.name.length(); i++) {
				a.name[i] = tolower(a.name[i]);
			}
			a.name[0] = toupper(a.name[0]);
			for( int i = 0; i < a.name.length(); i++) {
				if(a.name[i] == ' '&& a.name[i+1] != ' ') {
					a.name[i+1] = toupper(a.name[i+1]);
				}
			}
			is >> a.lop;
			is >> a.date;
			is >> a.gpa;
			is.ignore();

			m++;
			string s = "";
			s = s + to_string(m);
			while(s.length() < 3) {
				s = "0" + s;
			}
			s = "B20DCCN" + s;
			a.ma = s;

			return is;
		}


		friend ostream& operator<< (ostream &os, SinhVien a) {
			os << a.ma << " " << a.name << " " << a.lop << " " << a.date  << " "<< fixed << setprecision(2) << a.gpa << endl;

			return os;
		}
};

bool cmp(SinhVien a, SinhVien b) {
	return a.gpa > b.gpa;
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	SinhVien ds[n];
	for(int i = 0 ; i < n; i++) {
		cin >> ds[i];
	}
	sort(ds, ds + n, cmp);
	for(int i = 0 ; i < n; i++) {
		cout << ds[i];
	}
	return 0;
}
