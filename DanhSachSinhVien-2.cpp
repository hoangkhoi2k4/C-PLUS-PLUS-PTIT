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
       }
       ds[i].maSV = c + ds[i].maSV;
       maCount++;
        
        getline(cin, ds[i].name);
        
        // Xoa khoang trang thua o dau va cuoi chuoi name
        while (ds[i].name[0] == ' ') {
            ds[i].name.erase(0, 1);
        }
        while (ds[i].name[ds[i].name.length() - 1] == ' ') {
            ds[i].name.erase(ds[i].name.length() - 1, 1);
        }
        
        // Loai bo khoang trang du thua giua cac tu trong chuoi name
        int j = 0;
        while (j < ds[i].name.length()) {
            if (ds[i].name[j] == ' ' && ds[i].name[j + 1] == ' ') {
                ds[i].name.erase(j, 1);
            } else {
                j++;
            }
        }
        
        // Chuyen doi cac ki tu trong chuoi name thanh chu thuong
        for (int j = 0; j < ds[i].name.length(); j++) {
            ds[i].name[j] = tolower(ds[i].name[j]);
        }
        
        // Chuyen doi ki tu dau tien cua tu thanh chu hoa
        ds[i].name[0] = toupper(ds[i].name[0]);
        for (int j = 0; j < ds[i].name.length(); j++) {
            if (ds[i].name[j] == ' ' && ds[i].name[j + 1] != ' ') {
                ds[i].name[j + 1] = toupper(ds[i].name[j + 1]);
            }
        }
        
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


