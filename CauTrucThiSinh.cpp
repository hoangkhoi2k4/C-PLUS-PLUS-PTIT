#include <iostream>
#include <iomanip>
using namespace std;

struct ThiSinh {
    string name;
    string date;
    float diem1,diem2,diem3;
};

void nhap(ThiSinh& p) {
    getline(cin, p.name);
	cin >> p.date;
    cin.ignore();
    
    cin >> p.diem1 >> p.diem2 >> p.diem3;
}


void in(ThiSinh& p) {
    cout << p.name << " " << p.date << " " << fixed << setprecision(1) <<" "<< p.diem1+p.diem2+p.diem3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


