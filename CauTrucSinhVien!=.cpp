#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien{
    string maSV, name, ma, date;
    double GPA;
};

void nhapThongTinSV(SinhVien& p){
    p.maSV= "N20DCCN001";
    
    getline(cin, p.name);
    cin>>p.ma;
	cin>>p.date;
	if(p.date[1] == '/') {
		p.date.insert(0, "0");
	}
	if(p.date[4] == '/') {
		p.date.insert(3, "0");
	}
    
    cin >> p.GPA;
    cin.ignore();
}

void inThongTinSV(const SinhVien& p){
    cout << p.maSV << " " << p.name << " " << p.ma << " " << p.date << " " << fixed << setprecision(2) << p.GPA; 
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
