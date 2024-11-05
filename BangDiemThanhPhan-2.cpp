#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct SinhVien {
    string masv, name, ma;
    float diem1, diem2, diem3;
};

bool compare(SinhVien sv1, SinhVien sv2) {
    return sv1.name < sv2.name;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> ds(n);

for (int i = 0; i < n; i++) {
    getline(cin, ds[i].masv);
    getline(cin, ds[i].name);
    getline(cin, ds[i].ma);
    cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;
    cin.ignore();
}

sort(ds.begin(), ds.end(), compare);

for (int i = 0; i < n; i++) {
    cout << i+1 << " " << ds[i].masv << " " << ds[i].name << " " << ds[i].ma << " ";
    cout << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
}

return 0;
}

