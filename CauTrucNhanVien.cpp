#include <iostream>
#include <iomanip>
using namespace std;

struct NhanVien {
    string maNV;
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;
};

void nhap(NhanVien& nv) {
    getline(cin, nv.hoTen);
    cin >> nv.gioiTinh;
    cin.ignore();
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    cin >> nv.maSoThue;
    cin.ignore();
    getline(cin, nv.ngayKyHopDong);
}

void in(const NhanVien& nv) {
    cout << "00001 " << nv.hoTen << " " << nv.gioiTinh << " " << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " " << nv.ngayKyHopDong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


