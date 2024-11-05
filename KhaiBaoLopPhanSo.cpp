#include <iostream>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

class PhanSo {
private:
    ll tuSo;
    ll mauSo;

public:
    PhanSo(ll tu = 0, ll mau = 1) {
        tuSo = tu;
        mauSo = mau;
    }
    friend istream& operator>>(istream& is, PhanSo& ps) {
    	is >> ps.tuSo >> ps.mauSo;
    	return is;
	}

// Ham in phan so ra man hinh
	friend ostream& operator<<(ostream& os, const PhanSo& ps) {
    	os << ps.tuSo << "/" << ps.mauSo;
    	return os;
	}

// Ham rut gon phan so
	void rutgon() {
    	ll ucln = gcd(tuSo, mauSo);
    	tuSo /= ucln;
    	mauSo /= ucln;
	}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

