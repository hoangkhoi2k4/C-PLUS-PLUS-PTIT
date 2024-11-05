#include <bits/stdc++.h>

using namespace std;

string add(string a, string b){
	string res = "";
	if(a.length() < b.length()) swap(a, b);
	int n = a.length(), m = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	b += string(n - m, '0');
	int nho = 0;
	for(int i = 0 ; i < n; i++) {
		int tmp = (a[i] - '0') + (b[i] - '0') + nho;
		nho = tmp/10;
		tmp%=10;
		
		res += to_string(tmp) ;
	}
	if(nho) res += (char)(nho + '0');
	reverse(begin(res), end(res));
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << add(s1, s2);
		cout << endl;
	}
	
	return 0;
}
