#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct SV {
    string maSV, name, lop, email;

    friend istream& operator >> (istream& is, SV& a) {
        getline(is, a.maSV);
        getline(is, a.name);
        getline(is, a.lop);
        getline(is, a.email);

        return is;
    }
};

void in(const vector<SV>& ds, const string& s) {
    for (const SV& sv : ds) {
    	if(sv.maSV[5] == s[0]) {
    		if((s[0] == 'K' || s[0] == 'V' || s[0] == 'D')){
    				cout << sv.maSV << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
			}
			else if(sv.lop[0] != 'E') {
					cout << sv.maSV << " " << sv.name << " " << sv.lop << " " << sv.email << endl;
			}
		}
    
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<SV> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        for (char& c : s) {
            c = toupper(c);
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        in(ds, s);
    }
    return 0;
}

