#include <bits/stdc++.h>


using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
class honso {
private:
    int nguyen;
    int tu;
    int mau;

public:

    honso(int nguyen = 2, int tu = 3, int mau = 5 ) {
        this->nguyen = nguyen;
        this->tu = tu;
        this->mau = mau;
    }
    
    honso(const char* str) {
    string s = string(str);

    this->nguyen = stoi(s.substr(0, 1));

    this->tu = stoi(s.substr(2, 1));
    this->mau = stoi(s.substr(4, 1));
	}

    void nhapbp() {
        cin >> nguyen;
        cin >> tu;
        cin >> mau;
    }


    void xemmh() const {
        cout << nguyen << " " << tu << "/" << mau << endl;
    }
    

    void rutgon() {
        int v = mau*nguyen + tu;
        int t = mau;
        int ucln = gcd(v,t);
        v = v / ucln;
        t = t / ucln;
		nguyen  = v/t;
		tu = v - nguyen*mau;
		mau = t;   
    }
    
    
    friend honso operator +(honso a, honso b)
    {
        honso c;
        c.nguyen = a.nguyen + b.nguyen;
        c.tu = a.tu * b.mau + a.mau * b.tu;
        c.mau = a.mau * b.mau;
        c.rutgon();
        return c;
    }  
    friend honso operator -(honso a, honso b)
    {
        honso c;
        c.nguyen = a.nguyen - b.nguyen;
        c.tu = a.tu * b.mau - a.mau * b.tu;
        c.mau = a.mau * b.mau;
        c.rutgon();
        return c;
    } 
    
    friend honso operator*(honso a, int x)
    {
		honso c;
		a.tu = a.mau*a.nguyen + a.tu;		
		
		c.mau = a.mau;
		c.tu = a.tu*x;
		c.nguyen = 0;
		c.rutgon();
		
		return c;
    } 
     friend honso operator /(honso a, int x)
    {
		honso c;
		a.tu = a.mau*a.nguyen + a.tu;		
		
		c.mau = a.mau*x;
		c.tu = a.tu;
		c.nguyen = 0;
		c.rutgon();
		
		return c;	
    } 
    
    operator char*() {
        static char s[100];
        snprintf(s, sizeof(s), "%d %d/%d", nguyen, tu, mau);
        return s;
    }
};



int main() {
    honso a, b(2, 3, 5), c;

    a.nhapbp();
    a.rutgon();
    a.xemmh();

    c = a + b;
    c.xemmh();

    c = a - b;
    c.xemmh();

    c = a * 3;
    c.xemmh();

    c = a / 3;
    c.xemmh();
    
    a = honso("2 3/5");
    a.xemmh();
    
    cout << "\n b = " << ( char*)(b) ;

    return 0;
}

