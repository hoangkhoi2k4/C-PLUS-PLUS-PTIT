#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct NhanVien {
    string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHD;
};

void nhap(NhanVien& nv) {
    static int maCount = 1;
		if(maCount == 1) cin.ignore();
    nv.maNV = to_string(maCount);
    while (nv.maNV.length() < 5) {
        nv.maNV = "0" + nv.maNV;
    }
    maCount++;
    getline(cin, nv.hoTen);

    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHD);
}
void inds(const NhanVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].maNV << " " << ds[i].hoTen << " " << ds[i].gioiTinh << " " << ds[i].ngaySinh << " " << ds[i].diaChi << " " << ds[i].maSoThue << " " << ds[i].ngayKyHD << endl;
    }
}


int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}


