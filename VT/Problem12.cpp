#include <bits/stdc++.h>

using namespace std;

string add(string a, string b){
	if(a.length() < b.length()){
		swap(a, b);
	}
	int n = a.length(), m = b.length();
	string res = "";
	b = string(n - m, '0') + b;
	int nho = 0;
	for(int i = n - 1; i >= 0; i--){
		int tmp = (a[i] - '0') + (b[i] - '0') + nho;
		nho = tmp/10;
		tmp = tmp%10;
		res = res + to_string(tmp);
	}
	if(nho) res += to_string(nho);
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	string s; cin >> s;

	cout << add(s, "1") << endl;
	return 0;
}
