#include<bits/stdc++.h>
//B16DCCN011,,5,6
using namespace std;
int a=0;
//01/01/2003
class SinhVien {
	public:
		string ma;
		string ten;
		string lop;
		string email;
		friend istream&operator>>(istream&cin,SinhVien&x) {
			getline(cin,x.ma);
			getline(cin,x.ten);
			getline(cin,x.lop);
			getline(cin,x.email);
			return cin;
		}
		friend ostream&operator<<(ostream&cout,SinhVien x) {
			cout<<x.ma<<" "<<x.ten<<" "<<x.lop<<" "<<x.email<<endl;
			return cout;
		}
};
void in(const SinhVien ds[], const string& s, int n) {
    for (int i= 0; i < n; i++) {
    	if(ds[i].ma[5] == s[0]) {
    		if((s[0] == 'K' || s[0] == 'V' || s[0] == 'D')){
    				cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].email << endl;
			}
			else if(ds[i].lop[0] != 'E') {
					cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].email << endl;
			}
		}
    
    }
}
int main() {
	SinhVien ds[1001];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++) cin>>ds[i];
	int m;
	cin>>m;
	cin.ignore();
	while(m--) {
		string b;
		getline(cin,b);
		for(int i=0; i<b.size(); i++) {
			b[i]=toupper(b[i]);
		}
		stringstream ss(b);
		string token;
		string res="";
		while(ss>>token) {
			res+=token[0];
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<b<<":"<<endl;
		in(ds, res, n);

	}
}

//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//1
//Ke toan
