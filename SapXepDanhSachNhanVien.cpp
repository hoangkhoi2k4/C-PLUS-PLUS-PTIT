#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct NhanVien{
	string maNV, name, gioiTinh, date,address, ma, ngay;
};

void nhap(NhanVien& a){
		static int maCount = 1;
		if(maCount == 1) cin.ignore();
    	a.maNV = to_string(maCount);
    	while (a.maNV.size() < 5) {
        	a.maNV = "0" + a.maNV;
    	}
    	maCount++;
    	
		getline(cin ,a.name);
		getline(cin ,a.gioiTinh);
		getline(cin ,a.date);
		getline(cin ,a.address);
		getline(cin ,a.ma);
		getline(cin ,a.ngay);	
}

bool cmp(const NhanVien& a, const NhanVien& b) {
    if (stoi(a.date.substr(6,4)) == stoi(b.date.substr(6,4))) { 
        if (stoi(a.date.substr(0,2)) == stoi(b.date.substr(0,2))) { 
            return stoi(a.date.substr(3,2)) < stoi(b.date.substr(3,2)); 
        }
        return stoi(a.date.substr(0,2)) < stoi(b.date.substr(0,2));
    }
    return stoi(a.date.substr(6,4)) < stoi(b.date.substr(6,4));
}


void sapxep(NhanVien a[], int n) {
    sort(a, a + n, cmp);
}

void inds(const NhanVien a[], int n) {
	for(int i = 0 ; i < n ; i++) {
		cout << a[i].maNV << " " << a[i].name << " " << a[i].gioiTinh << " " <<a[i].date << " " << a[i].address << " " << a[i].ma << " " << a[i].ngay << endl; 
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


