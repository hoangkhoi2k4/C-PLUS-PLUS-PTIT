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
    
    while(a.name[0] == ' '){
        a.name.erase(0,1);
    }
    while(a.name[a.name.length()-1] == ' '){
        a.name.erase((a.name.length() - 1),1);
    }
    int i = 0;
    while(i < a.name.length()){
        if(a.name[i] == ' '&& a.name[i+1]==' '){
            a.name.erase(i,1);
        } else {
            i++;
        }
    }
    for( int i = 0; i < a.name.length(); i++) {
       a.name[i] = tolower(a.name[i]);
    }
    a.name[0] = toupper(a.name[0]);
    for( int i = 0; i < a.name.length(); i++) {
       if(a.name[i] == ' '&& a.name[i+1] != ' ') {
           a.name[i+1] = toupper(a.name[i+1]);
       }
    }
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

