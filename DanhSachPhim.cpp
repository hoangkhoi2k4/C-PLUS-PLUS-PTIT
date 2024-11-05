#include <bits/stdc++.h>

using namespace std;

class Phim; class TL;
map<string, TL> m;
int maTL = 1;
class TL{
	public:
		string ma, theloai;
		friend istream& operator >> (istream& is, TL& a){
			a.ma = "TL" + string(3 - to_string(maTL).length(), '0') + to_string(maTL);
			maTL ++;
			getline(is, a.theloai);
			m[a.ma] = a;
			return is;
		}
};

int maP = 1;
class Phim{
	public:
		string ma, name,date, theloai;
		int tap;
		
		friend istream& operator >> (istream& is, Phim& a){
			a.ma = "P" + string(3 - to_string(maP).length(), '0') + to_string(maP);
			maP ++;
			getline(is, a.theloai);
			getline(is, a.date);
			getline(is, a.name);
			is >> a.tap;
			is.ignore();
			return is;
		}
};

bool cmp(Phim a, Phim b){
	if(a.date.substr(6, 4) == b.date.substr(6,4)){
		if(a.date.substr(3,2) == b.date.substr(3, 2)) {
			if(a.date.substr(0, 2) == b.date.substr(0, 2)){
				if(a.name == b.name) {
					return a.tap > b.tap;
				}
				return a.name < b.name;
			}
			return a.date.substr(0, 2) < b.date.substr(0, 2);
		}
		return a.date.substr(3, 2) < b.date.substr(3, 2);
	}
	return a.date.substr(6, 4) < b.date.substr(6, 4);
}
int main(){
	int n, k; 
	cin >> n >> k;
	cin.ignore();
	
	vector<TL> t(n);
	vector<Phim> p(k);
	
	for(int i = 0 ;i < n; i++) {
		cin >> t[i];
	}
	for(int i = 0 ;i < k; i++) {
		cin >> p[i];
	}
	sort(p.begin(), p.end(), cmp);
	
	for(int i =0 ; i < k; i++) {
		cout << p[i].ma<< " " << m[p[i].theloai].theloai << " " << p[i].date << " " << p[i].name << " " << p[i].tap << endl;
	}



	return 0;
}
