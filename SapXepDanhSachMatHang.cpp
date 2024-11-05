#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Hang{
	int maSP;
	string name, nhom;
	float giaM, giaB, Loi;
};

void nhap(Hang ds[], int n) {
	for(int i = 0 ; i < n ; i++) {
		ds[i].maSP = i+1;
		
		getline(cin , ds[i].name);
		getline(cin , ds[i].nhom);
		
		cin >> ds[i].giaM >> ds[i].giaB;
		cin.ignore();
		
		ds[i].Loi = ds[i].giaB - ds[i].giaM;
	}
}

void sapxep(Hang ds[], int n) {
	for(int i = 0 ; i < n ; i++) {
		for(int j = i+1; j < n ; j++) {
			if(ds[i].Loi < ds[j].Loi){
				float tmp = ds[i].Loi;
				ds[i].Loi = ds[j].Loi;
				ds[j].Loi = tmp;
				
				int tmp1 = ds[i].maSP;
				ds[i].maSP = ds[j].maSP;
				ds[j].maSP = tmp1;
				
				string tmp2 = ds[i].name;
				ds[i].name = ds[j].name;
				ds[j].name = tmp2;
				
				string tmp3 = ds[i].nhom;
				ds[i].nhom = ds[j].nhom;
				ds[j].nhom = tmp3;
				
			}
 		}
	}
}


void in(const Hang ds[], int n) {
	for(int i = 0 ;i < n ; i++) {
		cout << ds[i].maSP << " " << ds[i].name << " " << ds[i].nhom << " " << fixed << setprecision(2) << ds[i].Loi <<endl;
	}
	
}
int main() {
	int n;
	cin >>n;
	cin.ignore();
	struct Hang ds[n];
	
	nhap(ds, n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}

