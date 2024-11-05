#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang ;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang {
	public:
		string mkh, name, gt, ns, dc;
		friend class HoaDon;

		friend istream& operator >> (istream& is, KhachHang& a) {
			++cntkh;
			a.mkh = "KH" + string(3 - to_string(cntkh).length(), '0') + to_string(cntkh);
			scanf("\n");
			getline(is, a.name);
			getline(is, a.gt);
			getline(is, a.ns);
			getline(is, a.dc);

			KH[a.mkh] = a;
			return is;
		}
};

class MatHang {
	public:
		string mmh, name, dvt;
		ll giaban, giamua;
		
		friend class HoaDon;

		friend istream& operator >> (istream& is, MatHang& a) {
			++cntmh;
			a.mmh = "MH" + string(3 - to_string(cntmh).length(), '0') + to_string(cntmh);
			scanf("\n");
			getline(is, a.name);
			getline(is, a.dvt);
			cin >> a.giamua >> a.giaban;


			MH[a.mmh] = a;
			return is;
		}
};

class HoaDon {
	public:
		string mhd, mkh, mmh;
		int sl;

		friend istream &operator >> (istream &is, HoaDon &a) {
			++cnthd;
			if(cnthd < 10) a.mhd = "HD00" + to_string(cnthd);
			else a.mhd = "HD0" + to_string(cnthd);
			cin >> a.mkh >> a.mmh >> a.sl;
			return is;
		}
		friend ostream &operator << (ostream &os, HoaDon &a) {
			os << a.mhd << ' ' << KH[a.mkh].name << ' ' << KH[a.mkh].dc << ' ' << MH[a.mmh].name << ' ' << MH[a.mmh].dvt << ' ' << MH[a.mmh].giamua << ' ' << MH[a.mmh].giaban  << ' ' << a.sl << ' ' << MH[a.mmh].giaban * a.sl << endl;
			return os;
		}
};

int main() {
	KhachHang dskh[25];
	MatHang dsmh[45];
	HoaDon dshd[105];
	int N,M,K,i;
	cin >> N;
	for(i=0; i<N; i++) cin >> dskh[i];
	cin >> M;
	for(i=0; i<M; i++) cin >> dsmh[i];
	cin >> K;
	for(i=0; i<K; i++) cin >> dshd[i];

	for(i=0; i<K; i++) cout << dshd[i];
	return 0;
}
