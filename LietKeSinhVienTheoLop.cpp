#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct SinhVien {
    string maSinhVien;
    string hoTen;
    string lop;
    string email;
};

bool compare(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.maSinhVien < sv2.maSinhVien;
}

void in(vector <SinhVien> a, string s) {
	for(int i = 0 ; i < a.size() ; i ++) {
		if(a[i].lop == s) {
			cout << a[i].maSinhVien << " " << a[i].hoTen <<" " << a[i].lop << " " << a[i].email << endl;
		}
	}
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> ds(n);

    for (int i = 0; i < n; ++i) {
        getline(cin, ds[i].maSinhVien);
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin,ds[i].email);
    }

//    sort(ds.begin(), ds.end(), compare);

	
	int t;
    cin >> t;
    
    while(t--) {
        string name;
        cin >> name;
        cout << "DANH SACH SINH VIEN LOP " << name << ":" <<  endl;
        in(ds, name);
    }
//    for (const auto& sv : ds) {
//    	cout << sv.maSinhVien << " " << sv.hoTen << " " << sv.lop << " " << sv.email << "\n";
//    }

    return 0;
}


