#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string ma, name, ns, gt, dc, mst, date;

};


int maCount = 1;
void nhap(NhanVien& a){
	if(maCount == 1) {
		cin.ignore();
	}
	a.ma = to_string(maCount);
    while (a.ma.size() < 5) {
        a.ma = "0" + a.ma;
    }
    maCount++;
	
	getline(cin, a.name);
	getline(cin, a.gt);
	getline(cin, a.ns);
	getline(cin, a.dc);
	getline(cin, a.mst);
	getline(cin, a.date);
}


bool cmp(const NhanVien a,const NhanVien b){
	if(stoi(a.ns.substr(6,4)) == stoi(b.ns.substr(6, 4))){
		if(stoi(a.ns.substr(0, 2)) == stoi(b.ns.substr(0,2))){
			return stoi(a.ns.substr(3, 2)) < stoi(b.ns.substr(3,2));
		}
		return stoi(a.ns.substr(0, 2)) < stoi(b.ns.substr(0,2));
	}
	return stoi(a.ns.substr(6, 4)) < stoi(b.ns.substr(6,4));
}

void sapxep( NhanVien a[], int n){
	sort(a, a+n, cmp);
}

void inds(const NhanVien a[], int n){
	for(int i = 0; i < n; i++) {
		cout << a[i].ma << " "<< a[i].name << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].date << endl;
	} 
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011

