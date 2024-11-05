#include<bits/stdc++.h>

using namespace std;

class KhachHang;
class MatHang;
class HoaDon;

int dem1 = 0, dem2 = 0, dem3 = 0;
map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang {
	public:
		string mkh, name, gt, ns, dc;
		friend class HoaDon;

		friend istream& operator >> (istream& is, KhachHang& a) {
			dem1 ++;
			a.mkh= "KH" + string(3 - to_string(dem1).length(), '0') + to_string(dem1);
			if(dem1 == 1)
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
		int giamua, giaban;
		friend class HoaDon;

		friend istream& operator >> (istream& is, MatHang& a) {
			dem2 ++;
			a.mmh= "MH" + string(3 - to_string(dem2).length(), '0') + to_string(dem2);

			scanf("\n");
			getline(is, a.name);
			getline(is, a.dvt);
			is >> a.giamua >> a.giaban;

			MH[a.mmh] = a;
			return is;
		}
};


class HoaDon {
	public:
		string mkh, mmh, mhd;
		int sl, loinhuan;

		friend istream& operator >> (istream& is, HoaDon& a) {
			dem3 ++;
			a.mhd= "HD" + string(3 - to_string(dem3).length(), '0') + to_string(dem3);
			scanf("\n");
			is >> a.mkh >> a.mmh >> a.sl;
			a.loinhuan = MH[a.mmh].giaban*a.sl - MH[a.mmh].giamua*a.sl;

			return is;
		}

		friend ostream &operator << (ostream &os, HoaDon &a) {
			os << a.mhd << ' ' << KH[a.mkh].name << ' ' << KH[a.mkh].dc << ' ' << MH[a.mmh].name << ' ' << a.sl << ' ' << MH[a.mmh].giaban * a.sl << ' ' << a.loinhuan << endl;
			return os;
		}
};


bool cmp(HoaDon &a, HoaDon &b)
{
    return a.loinhuan >= b.loinhuan;
}

void sapxep(HoaDon a[], int n)
{
    sort(a, a + n, cmp);
}
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

	sapxep(dshd, K);

	for(i=0; i<K; i++) cout << dshd[i];
	return 0;
}
