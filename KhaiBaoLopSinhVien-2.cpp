#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class SinhVien {
    private:
        string maSV, hoTen, lop, ngaySinh;
        float diemGPA;
    public:
        SinhVien() {
            maSV = "";
            hoTen = "";
            lop = "";
            ngaySinh = "";
            diemGPA = 0;
        }
        friend istream& operator>>(istream& is, SinhVien& sv) {
            getline(is, sv.hoTen);
            getline(is, sv.lop);
            
            string rawDate;
            getline(is, rawDate);

            size_t pos = rawDate.find('/');
            if (pos != string::npos) {
                int day = stoi(rawDate.substr(0, pos));
                size_t newPos = rawDate.find('/', pos + 1);
                if (newPos != string::npos) {
                    int month = stoi(rawDate.substr(pos + 1, newPos - pos - 1));
                    int year = stoi(rawDate.substr(newPos + 1));
                    sv.ngaySinh += to_string(day) + "/" + to_string(month) + "/" + to_string(year);
                }
            }
            
            is >> sv.diemGPA;
            cin.ignore();
            return is;
        }
        friend ostream& operator<<(ostream& os, const SinhVien& sv) {
            os << "B20DCCN001" << " " << sv.hoTen << " " << sv.lop << " ";
            
            size_t pos = sv.ngaySinh.find('/');
            if (pos != string::npos) {
                int day = stoi(sv.ngaySinh.substr(0, pos));
                size_t newPos = sv.ngaySinh.find('/', pos + 1);
                if (newPos != string::npos) {
                    int month = stoi(sv.ngaySinh.substr(pos + 1, newPos - pos - 1));
                    int year = stoi(sv.ngaySinh.substr(newPos + 1));
                    os << setw(2) << setfill('0') << day << "/";
                    os << setw(2) << setfill('0') << month << "/";
                    os << setw(4) << setfill('0') << year << " ";
                }
            }
            
            os << fixed << setprecision(2) << sv.diemGPA;
            return os;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


