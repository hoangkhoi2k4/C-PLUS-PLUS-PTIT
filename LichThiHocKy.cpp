#include <bits/stdc++.h>

using namespace std;

class Mon;
class Time;

map<string, Mon> m;
int x = 1;

class Mon {
	public:
		string ma, name;
		friend class Time;

		friend istream& operator >> (istream& is, Mon& a) {
			
			if(x == 1) {
				is.ignore();
			}
			x++;
			getline(is, a.ma);
			getline(is, a.name);
			m[a.ma] = a;
			return is;
		}
};

int cnt= 1;
class Time {
	public:
		string maso,ma, date, gio, nhom;
		friend istream& operator >> (istream& is, Time& a) {
			
			a.maso = "T" + string(3- to_string(cnt).length(), '0') + to_string(cnt);
			cnt++;
			is >> a.ma;
			is >> a.date;
			is >> a.gio;
			is >> a.nhom;
			return is;
		}
		friend ostream& operator << (ostream& os, Time a){
			os << a.maso << " " << a.ma << " " << m[a.ma].name << " " << a.date << " " << a.gio << " " << a.nhom << endl;
			return os;
		}
};

bool cmp(Time a, Time b){
	if(a.date.substr(6, 4) == b.date.substr(6,4)){
		if(a.date.substr(3, 2) == b.date.substr(3,2)){
			if(a.date.substr(0,2) == b.date.substr(0,2)){
				if(a.gio.substr(0,2) == b.gio.substr(0,2)){
					if(a.gio.substr(3,2) == b.gio.substr(3,2)){
						return a.ma < b.ma;
					}
					return a.gio.substr(3,2) < b.gio.substr(3,2);
				}
				return a.gio.substr(0,2) < b.gio.substr(0,2);
			}
			return a.date.substr(0,2) < b.date.substr(0,2);
		}
		return a.date.substr(3, 2) < b.date.substr(3,2);
	}
	return a.date.substr(6, 4) < b.date.substr(6,4);
}

int main() {
	int n, m;
	cin >> n >> m;
	Mon mon[n];
	Time time[m];

	for(int i = 0 ; i < n; i++) {
		cin >> mon[i];
	}
	for(int i = 0  ; i < m; i++) {
		cin >> time[i];
	}
	sort(time, time + m, cmp);
	for(int i = 0 ; i < m ; i++){
		cout << time[i];
	}


	return 0;
}
