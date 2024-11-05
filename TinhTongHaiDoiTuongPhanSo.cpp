#include <iostream>
using namespace std;

typedef long long ll;

class PhanSo {
private:
    ll tuso;
    ll mauso;
public:
    PhanSo() {
        tuso = 0;
        mauso = 1;
    }

    PhanSo(ll tu, ll mau) {
        tuso = tu;
        mauso = mau;
    }

    ll UCLN(ll a, ll b) {
        if (b == 0)
            return a;
        return UCLN(b, a % b);
    }

    void RutGon() {
        ll ucln = UCLN(tuso, mauso);
        tuso /= ucln;
        mauso /= ucln;
    }

    PhanSo operator+(const PhanSo& ps) {
        ll tu = tuso * ps.mauso + mauso * ps.tuso;
        ll mau = mauso * ps.mauso;
        PhanSo tong(tu, mau);
        tong.RutGon();
        return tong;
    }

    friend istream& operator>>(istream& is, PhanSo& ps) {
        is >> ps.tuso >> ps.mauso;
        return is;
    }

    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
        os << ps.tuso << "/" << ps.mauso;
        return os;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
 
