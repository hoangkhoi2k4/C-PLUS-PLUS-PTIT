
#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
class SinhVien{
    public:
        string name,msv,dob;
        float gpa;
    public:
        void nhap(){
            getline(cin,name);
            getline(cin,msv);
            getline(cin,dob);
            cin>>gpa;
        }
        void xuat(){
            if ((char)dob[1]=='/') dob.insert(0,"0");
            if ((char)dob[4]=='/') dob.insert(3,"0");
            cout<<"B20DCCN001 "<<name<<" "
                <<msv<<" "<<dob<<" "
                <<fixed<<setprecision(2)<<gpa;
        }  
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

