#include <iostream>
#include <iomanip>

using namespace std;

struct SinhVien{
	string maSV, name, lop;
	float diem1,diem2,diem3;
};

int h = 0;
void nhap(SinhVien& a) {
	if(h==0) 
	cin.ignore();
	getline(cin, a.maSV);
	getline(cin, a.name);
	getline(cin, a.lop);
	
	cin >> a.diem1 >>a.diem2 >> a.diem3;
	cin.ignore();
	h++;
}

void sap_xep(SinhVien* ds, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(ds[i].maSV > ds[j].maSV) {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void in_ds(SinhVien* ds, int n) {
    for(int i = 0; i < n; i++) {
        cout << i+1 << " " << ds[i].maSV << " " << ds[i].name << " " << ds[i].lop << " " <<fixed << setprecision(1) << ds[i].diem1 << " " <<fixed << setprecision(1) << ds[i].diem2 << " " << fixed << setprecision(1) << ds[i].diem3 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

