#include <iostream>
#include <iomanip>

using namespace std;

int maCount = 1;
struct SinhVien {
    string maSV, name, lop, date;
    float GPA;
    
    friend istream& operator>>(istream& is, SinhVien &a){
    if(maCount == 1) is.ignore();

    string c = "B20DCCN";
    a.maSV = to_string(maCount);
    while (a.maSV.length() < 3) {
        a.maSV = "0" + a.maSV;
    }
    a.maSV = c + a.maSV;

    maCount++;

    getline(is, a.name);
    is >> a.lop;

    string S;
    is >> S;
    size_t pos = S.find('/');
    if (pos != string::npos) {
        string day = S.substr(0, pos);
        if (day.length() == 1) {
            day = '0' + day;
        }
        a.date += day;

        size_t newPos = S.find('/', pos + 1);
        if (newPos != string::npos) {
            string month = S.substr(pos + 1, newPos - pos - 1);
            if (month.length() == 1) {
                month = '0' + month;
            }
            a.date += '/' + month;

            string year = S.substr(newPos + 1);
            a.date += '/' + year;
        }
    }
    is >> a.GPA;
    is.ignore();

    return is;
}
	
	friend ostream& operator<<(ostream &os, SinhVien a){
		os << a.maSV << " " << a.name << " " << a.lop << " " << a.date << " " <<fixed << setprecision(2)<< a.GPA << endl;
		return os;
	}
};


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

