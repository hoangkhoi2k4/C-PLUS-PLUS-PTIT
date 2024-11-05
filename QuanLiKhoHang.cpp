#include <bits/stdc++.h>

using namespace std;

struct MH{
	string ma, ten, hang, dv;
	int nhap, ban;
};

map<string, int> m;
void nhap(MH &a){
	getline(cin, a.ten);
	getline(cin, a.hang);
	if(m.find(a.ten) != m.end()) {
		m[a.ten] ++;
		string res = "";
		int tmp = m[a.ten];
		
		res += to_string(tmp);
		while(res.length() < 4) {
			res = "0" + res;
		}
		string x = "", y = "";
		stringstream ss(a.ten);
		while(ss >> x){
			y += static_cast<char>(toupper(x[0])); 
		}
		res = y + res;
		a.ma = res;
	} else {
		m[a.ten] ++;
		string res = "";
		int tmp = m[a.ten];
		
		res += to_string(tmp);
		while(res.length() < 4) {
			res = "0" + res;
		}
		string x = "", y = "";
		stringstream ss(a.ten);
		while(ss >> x){
			y += static_cast<char>(toupper(x[0])); 
		}
		res = y + res;
		a.ma = res;
	}
	cin>> a.dv;
	cin >> a.nhap >> a.ban;
	cin.ignore();
	
}

bool cmp(MH a, MH b){
	if(a.ban - a.nhap == b.ban - b.nhap) return a.ma < b.ma;
	return (a.ban - a.nhap > b.ban - b.nhap);
}

void in(MH a){
	cout << a.ma << " " << a.ten << " " << a.hang << " " << a.dv << " " << a.nhap << " " << a.ban << endl;
}

int main(){
	int n; cin >> n;
	cin.ignore();
	MH ds[n];
	for(int i = 0 ; i< n; i++) {
		nhap(ds[i]);
	}
	sort(ds, ds+n , cmp);
	for(int i = 0; i < n; i++) {
		in(ds[i]);
	}
	return 0;
}
