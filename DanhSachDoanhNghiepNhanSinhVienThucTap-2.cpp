#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct DoanhNghiep{
    string ma;
    string ten;
    int soSV;

	friend istream& operator >> (istream& is, DoanhNghiep &dn){
    	getline(is, dn.ma);
    	getline(is, dn.ten);

    	is >> dn.soSV;
    	is.ignore();

    	return is;
	}
};

bool cmp(DoanhNghiep &a, DoanhNghiep &b){
    if (a.soSV == b.soSV) {
        return a.ma < b.ma;
    }
    return a.soSV > b.soSV;
}

void xuat(DoanhNghiep ds[], int n, int a, int b ){
    for(int i = 0 ; i < n ; i++) {
    	if(a <= ds[i].soSV && ds[i].soSV <= b){
    		cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].soSV << endl;
		}
    }
}
int main() {
    int n;
    cin >> n;
    cin.ignore();
    struct DoanhNghiep ds[n];

	for(int i = 0 ; i < n ; i++) {
    	cin >> ds[i];
	}
	sort(ds, ds + n, cmp);
	
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " <<b << " SINH VIEN:" << endl;
		xuat(ds,n,a,b);
	}
	return 0;
}

