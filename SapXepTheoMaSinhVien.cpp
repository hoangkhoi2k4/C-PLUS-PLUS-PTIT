#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct SinhVien {
    string maSinhVien;
    string hoTen;
    string lop;
    string email;
    
    friend istream& operator >> (istream& is, SinhVien &a){
    	getline(cin, a.maSinhVien);
        getline(cin, a.hoTen);
        getline(cin, a.lop);
        getline(cin,a.email);
        return is;
	}
};

bool compare(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.maSinhVien < sv2.maSinhVien;
}

int main() {
    vector<SinhVien> ds;
		struct SinhVien tmp;
 		while(cin >> tmp) {
 			ds.push_back(tmp);
		 }
       

    sort(ds.begin(), ds.end(), compare);


    for (const auto& sv : ds) {
    	cout << sv.maSinhVien << " " << sv.hoTen << " " << sv.lop << " " << sv.email << "\n";
    }

    return 0;
}


