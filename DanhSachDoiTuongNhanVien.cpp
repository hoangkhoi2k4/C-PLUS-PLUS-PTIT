#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int maCount = 1;

struct NhanVien{
    string maNV, name, gioiTinh, date, address, ma, ngay;

friend istream& operator >> (istream& is, NhanVien &a){
    if(maCount == 1) cin.ignore();

    a.maNV = to_string(maCount);
    while(a.maNV.length() < 5) {
        a.maNV = "0" + a.maNV;
    }
    maCount++;

    getline(is, a.name);
    getline(is, a.gioiTinh);
    getline(is, a.date);
    getline(is, a.address);
    getline(is, a.ma);
    getline(is, a.ngay);

    return is;

}

friend ostream& operator << (ostream& os, NhanVien a) {
    os << a.maNV << " " << a.name << " " << a.gioiTinh << " " << a.date << " " << a.address << " " << a.ma << " " << a.ngay << endl;
    return os;
}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

