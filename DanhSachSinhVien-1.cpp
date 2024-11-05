#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct SinhVien {
    string maSV, name, lop, date;
    float GPA;
};

void nhap(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        static int maCount = 1;
        if (maCount == 1)
            cin.ignore();
       string c = "B20DCCN";
       ds[i].maSV = to_string(maCount);
    while (ds[i].maSV.length() < 3) {
        ds[i].maSV = "0" + ds[i].maSV;
    } ds[i].maSV = c + ds[i].maSV;
        maCount++;
        
        getline(cin, ds[i].name);
        getline(cin, ds[i].lop);
        
        string S;
        getline(cin, S);
        size_t pos = S.find('/');
        if (pos != string::npos) {
            string day = S.substr(0, pos);
            if (day.length() == 1) {
                day = '0' + day;
            }
            ds[i].date += day;
            
            size_t newPos = S.find('/', pos + 1);
            if (newPos != string::npos) {
                string month = S.substr(pos + 1, newPos - pos - 1);
                if (month.length() == 1) {
                    month = '0' + month;
                }
                ds[i].date += '/' + month;
                
                string year = S.substr(newPos + 1);
                ds[i].date += '/' + year;
            }
        }
        
        cin >> ds[i].GPA;
        cin.ignore();
    }
}

void in(const SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].maSV << " ";
        cout << ds[i].name << " ";
        cout << ds[i].lop << " ";
        cout << ds[i].date << " ";
        cout << fixed << setprecision(2) << ds[i].GPA << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}


