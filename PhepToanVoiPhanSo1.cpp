#include<bits/stdc++.h>
 
using namespace std;
using ll= long long;
ll gcd(ll a, ll b){
	while(b!=0){
		ll r= a%b;
		a=b;
		b=r;
	}
	return a;
}
 
ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}
 
struct PhanSo{
	ll tu,mau;
	friend PhanSo operator + (PhanSo a, PhanSo b){
		PhanSo x;
		ll bc = lcm(a.mau, b.mau);
		x.tu= (bc/a.mau*a.tu)+(bc/b.mau*b.tu);
		x.mau = bc;
		return x;
	}
	friend PhanSo operator * (PhanSo a, PhanSo b){
		PhanSo x;
		x.tu= a.tu*b.tu;
		x.mau = a.mau*b.mau;
		return x;
	}
};
 
void rutgon(PhanSo &x){
	ll uc= gcd(x.tu, x.mau);
	x.tu /= uc;
	x.mau /= uc;
}
 
void in(PhanSo x){
	cout << x.tu << "/" << x.mau << " ";
}
void process(PhanSo a, PhanSo b){
	PhanSo c= (a+b)*(a+b);
	PhanSo d= (a*b)*c;
	rutgon(c);
	rutgon(d);
	in(c);
	in(d);
	cout << endl;
}
 
int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
