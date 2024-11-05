#include <bits/stdc++.h>

using namespace std;

class nhanvien{
private:
    string hoten;
    int luongcoban, manhanvien;
public: 
    void nhapbp() {
        cin >> manhanvien;
        cin.ignore(); 
        getline(cin, hoten);
        cin >> luongcoban;
    }
    
    int get_manhanvien(){
        return manhanvien;
    }
    int get_luongcoban(){
        return manhanvien;
    }
    string get_hoten(){
        return hoten;
    }
    void xemmh(){
        cout << manhanvien << "\t" << hoten << "\t" << luongcoban << endl;
    }
};

class danhsach{
private:
    nhanvien dsnv[100];
    int tongsonv;
    
public:
    void nhapbp() {
        cout << "Tong so nhan vien: ";
        cin >> tongsonv ;
        cout << "MaNV\tHo ten\tLuong co ban" << endl;
       
        for(int i = 0 ; i < tongsonv; i++) {
            dsnv[i].nhapbp();
        }
    }
    
    void xemmh(){
        cout << "MaNV\tHo ten\tLuong co ban" << endl;
        for(int i = 0 ; i < tongsonv; i++) {
            dsnv[i].xemmh();
        }
    }
    
    static bool cmp( nhanvien& a,  nhanvien& b) {
        return a.get_manhanvien() < b.get_manhanvien();
    }
    
    void sapxep() {
        sort(dsnv, dsnv + tongsonv, danhsach::cmp);
    }
};

class luongnv:private nhanvien{
	private:
		int ngaycong, luong;
	public:
		void nhapbp(nhanvien& a){
			a.xemmh();
			cin >> ngaycong;
			luong = luongcoban + ngaycong * 100000;
		}
		
		void xemmh(nhanvien& a) {
			cout << a.get_manhanvien() << "\t" << a.get_hoten() << "\t" << a.get_luongcoban() << "\t" << ngaycong << "\t" << luong << endl;
		}
};

int main(){
    danhsach d;
    d.nhapbp();
    d.sapxep();
    d.xemmh();
    return 0;
}

