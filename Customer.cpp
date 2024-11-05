#include <bits/stdc++.h>

using namespace std;

class Cus;
class Inv;


class Cus {
	public:
		string name;
		int dis, ma, key;


		void nhap() {
			string x;
			getline(cin , x);
			stringstream sss(x);
			string t; 
			while(sss >> t){
				
			}
			ma = stoi(t);
			getline(cin, name);
			string tmp;
			getline(cin, tmp);
			stringstream ss(tmp);
			string w = "";
			while(ss >> w) {

			}
			dis = stoi(w);
			
		}
};

class Inv {
	public:
		string id;
		double mon;

		void nhap() {
			getline(cin , id);
			string tmp;
			getline(cin, tmp);
			stringstream ss(tmp);
			string w = "";
			int dem = 0;
			while(ss >> w) {
				dem++;
				if(dem == 3) {
					break;
				}

			}
			mon = stod(w);
		}
};

int main() {
	int n;
	cin >> n;
	cin.ignore();

	Cus a[n];
	Inv b[n];
	for(int i = 0 ; i < n ; i++) {
		string tmp;
		getline(cin, tmp);

		a[i].nhap();
		b[i].nhap();
	}

	for(int i = 0; i < n; i++) {
		for(int j  = i + 1 ; j < n; j++) {
			if((b[j].mon - a[j].dis*b[j].mon*0.01) > (b[i].mon - a[i].dis*b[i].mon*0.01) ) {
				Inv tmp = b[j];
				b[j] = b[i];
				b[i] = tmp;

				Cus tmp1 = a[j];
				a[j] = a[i];
				a[i] = tmp1;
			} else if((b[j].mon - a[j].dis*b[j].mon*0.01) == (b[i].mon - a[i].dis*b[i].mon*0.01)) {
				if(a[j].ma < a[i].ma) {
					Inv tmp = b[j];
					b[j] = b[i];
					b[i] = tmp;

					Cus tmp1 = a[j];
					a[j] = a[i];
					a[i] = tmp1;
				}
			}
		}
	}

	for(int i = 0; i < n; i++) {
		cout << "Customer ID : "<< a[i].ma << endl;
		cout << a[i].name << endl;
		cout << "Amount : " << fixed << setprecision(2) << b[i].mon - a[i].dis*b[i].mon*0.01  << " $"<< endl;
		cout << "--------------------" << endl;
	}
	return 0;
}
