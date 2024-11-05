#include <iostream>
#include <string>

using namespace std;

class NhanVien{
	private :
		string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHD;
	public :
		NhanVien() {
			maNV = "";
			hoTen = "";
			gioiTinh = "";
			ngaySinh = "";
			diaChi = "";
			maSoThue = "";
			ngayKyHD = "";
		}
		
		friend istream& operator >> (istream& is, NhanVien& a){
			getline(is, a.hoTen);
			getline(is, a.gioiTinh);
			getline(is, a.ngaySinh);
			getline(is, a.diaChi);
			getline(is, a.maSoThue);
			getline(is, a.ngayKyHD);
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, const NhanVien& a) {
			os << "00001" << " " <<a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " <<a.ngayKyHD;
			
			return os;
		}
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}

