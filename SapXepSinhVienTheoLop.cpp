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
    if (sv1.lop == sv2.lop) {
        return sv1.maSinhVien < sv2.maSinhVien;
    }
    return sv1.lop < sv2.lop;
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

    sort(ds.begin(), ds.end(), compare);


    for (const auto& sv : ds) {
    	cout << sv.maSinhVien << " " << sv.hoTen << " " << sv.lop << " " << sv.email << "\n";
    }

    return 0;
}


