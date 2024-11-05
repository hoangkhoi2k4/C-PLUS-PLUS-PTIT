#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Hero {
	public:
		ll mau, NL;
		string tt;

		void nhap() {
			string tmp1, tmp2;
			getline(cin, tmp1);
			stringstream ss(tmp1);

			string w;
			while(ss >> w) {

			}
			mau = stol(w);

			getline(cin, tmp2);
			stringstream sss(tmp2);
			while(sss >> w) {

			}
			NL = stol(w);

			getline(cin, tt);
		}
};

int main() {
	Hero a;
	a.nhap();
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin , s);
		if(a.mau <= 0 || a.NL <= 0 || a.tt == "DEAD") {
			cout << "POWER : 0" << endl;
			cout << "BLOOD : 0" <<endl;
			cout << "DEAD" << endl;
			cout << "--------------------" << endl;
		} else {

			if(s[0] == 'm') {
				a.mau -= 15;
				a.NL -= 2;
				if(a.mau <= 0 || a.NL <= 0) {
					a.tt = "DEAD";
				}
			}
			if(s[0] == 'p') {
				a.mau += 10;
				a.NL += 2;
				if(a.mau <= 0 || a.NL <= 0) {
					a.tt = "DEAD";
				}
			}
			if(s[0] == 'w') {
				ll p = stol(s.substr(6));
				if(p >= a.NL) {
					a.NL = 0;
					a.mau = 0;
					a.tt = "DEAD";
				} else {
					a.NL += 5;
				}
			}
			if(s[0] == 's') {
				ll p = stol(s.substr(8));
				if(p >= a.NL) {
					a.NL = 0;
					a.mau = 0;
					a.tt = "DEAD";
				} else {
					a.NL += 5;
					a.mau += 7;
				}
			}

			if(a.tt == "ALIVE" && a.mau > 0 && a.NL > 0) {
				cout << "POWER : " << a.NL << endl;
				cout << "BLOOD : " << a.mau << endl;
				cout << a.tt << endl;
				cout << "--------------------" << endl;
			} else {
				cout << "POWER : 0" << endl;
				cout << "BLOOD : 0" <<endl;
				cout << "DEAD" << endl;
				cout << "--------------------" << endl;
			}
		}

	}

	return 0;
}
