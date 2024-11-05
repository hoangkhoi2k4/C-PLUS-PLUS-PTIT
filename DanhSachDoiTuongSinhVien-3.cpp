#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstring>

using namespace std;

int maCount = 1;
struct SinhVien {
    string maSV, name, lop, date;
    char name_x[100];
    float GPA;
    
    friend istream& operator>>(istream& is, SinhVien& a) {
        if (maCount == 1) is.ignore();

        string c = "B20DCCN";
        a.maSV = to_string(maCount);
        while (a.maSV.length() < 3) {
            a.maSV = "0" + a.maSV;
        }
        a.maSV = c + a.maSV;

        maCount++;
        scanf(" %[^\n]", a.name_x);
        is.ignore();
    	char* token = strtok(a.name_x, " ");
    	while (token != NULL) {
            for(int i = 1; i < strlen(token); i++) 
				token[i] = tolower(token[i]);
            token[0] = toupper(token[0]);
            a.name += token;
            if (isalpha(token[strlen(token) - 1])) a.name += " ";
            token = strtok(NULL, " ");
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
            a.date += day + '/';

            size_t newPos = S.find('/', pos + 1);
            if (newPos != string::npos) {
                string month = S.substr(pos + 1, newPos - pos - 1);
                if (month.length() == 1) {
                    month = '0' + month;
                }
                a.date += month + '/';

                string year = S.substr(newPos + 1);
                a.date += year;
            }
        }
       
        is >> a.GPA;
        is.ignore();

        return is;
    }
    
    friend ostream& operator<<(ostream& os, const SinhVien& a) {
        os << a.maSV << " " << a.name << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.GPA << endl;
        return os;
    }
};

bool cmp(const SinhVien& a, const SinhVien& b) {
    return a.GPA > b.GPA;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}



