#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien{
    string maSV, name, ma, date;
    float GPA;
};

void nhap(SinhVien& p){
    p.maSV= "B20DCCN001";
    
    getline(cin, p.name);
    getline(cin, p.ma);

    string rawDate;
    getline(cin, rawDate);

    size_t pos = rawDate.find('/');
    if (pos != string::npos) {
        string day = rawDate.substr(0, pos);
        if (day.length() == 1) {
            day = '0' + day; 
        }
        p.date += day;
        
        size_t newPos = rawDate.find('/', pos + 1);
        if (newPos != string::npos) {
            string month = rawDate.substr(pos + 1, newPos - pos - 1);
            if (month.length() == 1) {
                month = '0' + month; 
            }
            p.date += '/' + month;
            
            string year = rawDate.substr(newPos + 1);
            p.date += '/' + year;
        }
    }
    
    cin >> p.GPA;
}

void in(const SinhVien& p){
    cout << p.maSV << " " << p.name << " " << p.ma << " " << p.date << " " << fixed << setprecision(2) << p.GPA; 
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}


