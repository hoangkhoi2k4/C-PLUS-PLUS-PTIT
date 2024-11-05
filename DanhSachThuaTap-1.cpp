#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int maCount = 1;

struct intern{
    string ma, maSV, name, lop, email, company;
    
    friend istream& operator >> (istream& is, intern &a) {
        a.ma = to_string(maCount);
        maCount++;
        
        getline(is, a.maSV);
        getline(is, a.name);
        getline(is, a.lop);
        getline(is, a.email);
        getline(is, a.company);
        
        return is;
    }
};

bool cmp(intern a1, intern a2){
    return a1.name < a2.name;
}

void in(vector<intern> a, string s){
    for(int i = 0 ; i < a.size() ; i++) {
        if(a[i].company == s) {
            cout << a[i].ma << " " << a[i].maSV << " " << a[i].name << " " << a[i].lop << " " << a[i].email << " " << a[i].company << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<intern> ds(n);
    
    for(int i = 0 ; i < n; i++) 
        cin >> ds[i];
    
    sort(ds.begin(), ds.end(), cmp);
    
    int t;
    cin >> t;
    
    while(t--) {
        string name;
        cin >> name;
        in(ds, name);
    }
    
    return 0;
}

