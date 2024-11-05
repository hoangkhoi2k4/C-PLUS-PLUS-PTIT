#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

string tachNganh(string s);
int maCount = 1;

struct GiaoVien{
	string ma, name, nganh;
	
	friend istream& operator >> (istream& is, GiaoVien &a){
		string Ma = "GV";
		a.ma = "";
		a.ma = to_string(maCount);
		while(a.ma.length() < 2){
			a.ma =   "0"+a.ma;
		}
		a.ma = Ma+a.ma ;
		maCount ++;
		
		getline(is, a.name);
		getline(is, a.nganh);
		
		return is;
	}
};

string tachNganh(string sv){
		string s= "", result ="";
		stringstream ss(sv);
		
		while(ss >> s){
			result += toupper(s[0]);
		}
		return result;
}

string tachName(string sv){
	string s = "";
	
	stringstream ss(sv);
	while(ss >> s);
	
	
	return s;
}

bool cmp(GiaoVien a, GiaoVien b){
	if(tachName(a.name) == tachName(b.name) ){
		return a.ma < b.ma;
	} else return tachName(a.name) < tachName(b.name);
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	struct GiaoVien ds[n];
	
	for(int i = 0 ; i < n ; i++){
		cin >> ds[i];
	}
	sort(ds, ds+n, cmp);
	for(int i = 0 ; i < n ; i++) {
		cout << ds[i].ma << " " << ds[i].name << " " << tachNganh(ds[i].nganh) << endl;
	}

//	cout << tach(ds[0].name);
	
}


