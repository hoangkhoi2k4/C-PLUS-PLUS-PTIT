#include <bits/stdc++.h>

using namespace std;

string subtrac(string a, string b){
	
	int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;

    if (a < b)
        swap(a, b);
    reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string res = string(len, '0');
	int nho = 0;
	for(int i = 0 ; i < len; i++) {
		int tmp = (a[i] - '0') - (b[i] - '0') - nho;
		if(tmp < 0) {
			tmp += 10;
			nho = 1;
		} else nho = 0;
		res[i] = tmp + '0';
	}
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << subtrac(s1, s2);
		cout << endl;
	}
	
	return 0;
}
