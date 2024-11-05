#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

struct PhanSo{
	ll tu;
	ll mau;
};

ll gcd(ll a, ll b){
	if(a== 0) return b;
	else return gcd(b%a,a);
}

void process(PhanSo& a, PhanSo& b) {
	ll c_tu = 0, c_mau = 0;
	c_tu = pow(a.tu*b.mau + a.mau*b.tu, 2);
	c_mau = pow(a.mau*b.mau,2);
	
	ll c= gcd(c_tu,c_mau);
	
	c_tu = c_tu/c;
	c_mau = c_mau/c;
	
	ll d_tu = 0, d_mau = 0;
	d_mau = a.mau*b.mau*c_mau;
	d_tu = a.tu*b.tu*c_tu;
	
	ll d = gcd(d_tu,d_mau);
	
	d_tu = d_tu/d;
	d_mau = d_mau/d;
	
	cout << c_tu << "/" << c_mau << " "<< d_tu<< "/" << d_mau << endl;
	
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

