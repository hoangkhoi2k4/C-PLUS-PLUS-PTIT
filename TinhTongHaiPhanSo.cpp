#include <iostream>

using namespace std;
typedef long long ll;

struct PhanSo{
	ll tu, mau;
};
ll UCLN(ll a, ll b) {
    if (b == 0) {
        return a;
    } else {
        return UCLN(b, a % b);
    }
}

void nhap(PhanSo& x){
	cin >> x.tu >> x.mau;
}

void in(PhanSo& x){
	cout << x.tu << "/" << x.mau;
}

PhanSo tong(const PhanSo& p, const PhanSo& q) {
    PhanSo t;
    t.tu = p.tu * q.mau + q.tu * p.mau; 
    t.mau = p.mau * q.mau; 


    ll gcd = UCLN(t.tu, t.mau);
    t.tu /= gcd;
    t.mau /= gcd;

    return t;
}



int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

