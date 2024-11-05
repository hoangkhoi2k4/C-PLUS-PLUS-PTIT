#include <iostream>
using namespace std;
typedef long long ll;

struct PhanSo {
    ll tu, mau;
};

ll UCLN(ll a, ll b) {
    if (b == 0) {
        return a;
    } else {
        return UCLN(b, a % b);
    }
}

void nhap(PhanSo& x) {
    cin >> x.tu >> x.mau;
}

void rutgon(PhanSo& x) {
    ll ucln = UCLN(x.tu, x.mau);
    x.tu /= ucln;
    x.mau /= ucln;
}

void in(PhanSo& x) {
    cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


