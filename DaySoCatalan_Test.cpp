#include <bits/stdc++.h>

using namespace std;

string C[5001];

string add(string a, string b){
	string res = "";
	while(a.length() < b.length()) a = "0" + a;
	while(b.length() < a.length()) b = "0" + b;
	
	int r = 0;
	
	for(int i = a.length() - 1; i >=0 ; i--) {
		int tmp = a[i] - '0' + b[i] - '0' + r;
		r = tmp / 10;
		tmp = tmp%10;
		res = (char) (tmp + '0') + res;
	}
	
	if(r > 0) res = "1" + res;
	return res;
}

string tich(string a, string b){
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    string c(a.length() + b.length(), '0');
    
    for(int i = 0 ; i < b.length(); i++) {
        int j, nho = 0;
        for(j = 0 ; j < a.length(); j++) {
            int x = (b[i] - '0') * (a[j] - '0') + nho + (c[i + j] - '0');
            c[i + j] = x % 10 + '0';
            nho = x / 10;
        }
        while (nho > 0) {
            c[i + j] = nho % 10 + '0';
            nho /= 10;
            j++;
        }
    }

    while (c.length() > 1 && c.back() == '0') {
        c.pop_back();
    }

    reverse(c.begin(), c.end());
    
    return c;
}

string gt(int n){
	string res = "1";
	for(int i = 2; i <= n ; i++) {
		res = tich(to_string(i), res);
	}
	return res;
}

void solve(int n){
	C[0] = C[1] = "1";
}

int main(){
	int n;
	cin >> n;
//	solve();
	cout << gt(n);
	return 0;
}
